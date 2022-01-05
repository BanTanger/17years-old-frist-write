#define _CRT_SECURE_NO_WARNINGS 1
#include<opencv2\opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

//#define MY_METHOD_TRY
//#define JIANGDA
//#define MY_METHOD
#define MY_METHOD_TWO
//#define USE_TEMPLATE
//#define SHOW_ALLRECT
#define SHOW_RESULT
#define SHOW_CIRCLE
//#define DEBUG_LOG
//#define DEBUG
//#define DEBUG_TEST
//#define LEAF_IMG

/* *****************************************************************************
		�������ԣ�Spot��Pretreat���ֶ��Ѿ�û�����⣬�����������������С�
   ***************************************************************************** */
#define RED 
//#define BLUE

Mat srcImage, midImage;
vector<Point2f> cirV;
Mat drawcircle;
int value = 30;
const int valueMax = 255;
#ifdef MY_METHOD
static inline bool ContoursSortFun(vector<cv::Point> contour1, vector<cv::Point> contour2)
{
	return (contour1.size() > contour2.size());
}
#endif // MY_METHOD

static bool CircleInfo2(std::vector<cv::Point2f>& pts, cv::Point2f& center, float& radius)
{
	center = cv::Point2d(0, 0);//Բ��
	radius = 0.0;
	if (pts.size() < 3) return false;;

	//���������ã������ӣ�
	double sumX = 0.0;
	double sumY = 0.0;
	double sumX2 = 0.0;
	double sumY2 = 0.0;
	double sumX3 = 0.0;
	double sumY3 = 0.0;
	double sumXY = 0.0;
	double sumX1Y2 = 0.0;
	double sumX2Y1 = 0.0;
	const double N = (double)pts.size();
	for (int i = 0; i < pts.size(); ++i)
	{
		double x = pts.at(i).x;
		double y = pts.at(i).y;
		double x2 = x * x;
		double y2 = y * y;
		double x3 = x2 * x;
		double y3 = y2 * y;
		double xy = x * y;
		double x1y2 = x * y2;
		double x2y1 = x2 * y;

		sumX += x;
		sumY += y;
		sumX2 += x2;
		sumY2 += y2;
		sumX3 += x3;
		sumY3 += y3;
		sumXY += xy;
		sumX1Y2 += x1y2;
		sumX2Y1 += x2y1;
	}
	double C = N * sumX2 - sumX * sumX;
	double D = N * sumXY - sumX * sumY;
	double E = N * sumX3 + N * sumX1Y2 - (sumX2 + sumY2) * sumX;
	double G = N * sumY2 - sumY * sumY;
	double H = N * sumX2Y1 + N * sumY3 - (sumX2 + sumY2) * sumY;

	double denominator = C * G - D * D;
	if (std::abs(denominator) < DBL_EPSILON) return false;
	double a = (H * D - E * G) / (denominator);
	denominator = D * D - G * C;
	if (std::abs(denominator) < DBL_EPSILON) return false;
	double b = (H * C - E * D) / (denominator);
	double c = -(a * sumX + b * sumY + sumX2 + sumY2) / N;

	center.x = a / (-2);
	center.y = b / (-2);
	radius = std::sqrt(a * a + b * b - 4 * c) / 2;
	return true;
}
//class Pretreat;
class Spot;
//class Pretreat {
//public:
//	Pretreat() {}
//	~Pretreat() {}
//	void splitChannels();
//	void prethreshold();
//	void predilate();
//};
class Spot {
public:
	//��������
	Spot() {}
	~Spot() {}
	void findcontoursfun(Mat& drawcircle);
};
// Pretreat�� ���Ͳ�����
//void Pretreat::predilate() {
//	int structElementSize = 1;
//	Mat element =getStructuringElement(MORPH_RECT,Size(2*structElementSize + 1,2*structElementSize + 1),Point(structElementSize, structElementSize));
//	//Size ����Ϊ�˻���������ȵĽṹԪ��
//	//Point �����õ��ṹԪ�ص�����
//	dilate(midImage, midImage, element, Point(structElementSize, structElementSize), 1);
//	//�������㣬��������Ϊ�ṹԪ��
//	structElementSize = 1;
//	element =getStructuringElement(MORPH_RECT,Size(2*structElementSize + 1,2*structElementSize + 1),Point(structElementSize, structElementSize));
//	morphologyEx(midImage, midImage, MORPH_CLOSE, element, Point(structElementSize, structElementSize), 1);
//
//#ifdef DEBUG
//	namedWindow("dilate", WINDOW_AUTOSIZE);
//	//cvResizeWindow("dilate", 500, 500);
//	imshow("dilate", midImage);
//#endif // DEBUG
//}
// Pretreat�� ����ͨ��������
//void Pretreat::splitChannels() {
//#ifdef DEBUG_TEST
//	//һ��ʼ����canny��Ե��⣬��Ϊ����˳���ֵ���������������нϴ����
//	Mat canny;
//	int structElementSize = 1;
//	Mat element = getStructuringElement(MORPH_RECT, Size(structElementSize + 1, structElementSize + 1), Point(structElementSize, structElementSize));
//	Canny(srcImage, canny, 80, 160, 3, false);
//	dilate(canny, canny, element);
//	imshow("Canny", canny);
//#endif 
//	// 1.������ɫͨ��
//	vector<Mat> imgChannels;
//	split(srcImage, imgChannels);
//#ifdef RED
//	//ͨ������ͨ��������õ�һ�����Ե�������at(0/1/2)����BGR
//	//Mat���������
//	midImage = imgChannels.at(2) - imgChannels.at(0);
//#endif 
//#ifdef BLUE 
//	midImage = imgChannels.at(0) - imgChannels.at(2);
//#endif // BLUE
//}
// Pretreat�� ��ֵ��������
//void Pretreat::prethreshold() {
//	//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//	//blur(midImage, midImage, Size(9, 9), Point(-1, -1));//�˲��ᵼ�¶�ֵ��ֱ�ӱ����ͣ������ԭ������ֱ�ӳ�ȥ
//	//���ܬB������Ϊ��֮ǰ�ı�����Ͷ�ֵ���Ѿ������󲿷���������ʱ���þ�ֵ�˲������ʵ��䷴��
//	
//	// 2.��ֵ���������ڣ�ͼ����
//	threshold(midImage, midImage, value, valueMax, THRESH_BINARY | CV_THRESH_OTSU);
//#ifdef DEBUG
//	//��ȡ��ֵ����Ƶ
//	namedWindow("midImage", WINDOW_AUTOSIZE);
//	//cvResizeWindow("midImage2", 500, 500);
//	imshow("midImage", midImage);
//#endif // DEBUG
//}
//void prethreshold(int,void*) {
//	threshold(midImage, midImage, value, valueMax, THRESH_BINARY|CV_THRESH_OTSU);
//}

#ifdef JIANGDA
double getDistance(Point source, Point end) {
	double dis;
	dis = pow((source.x - end.x), 2) + pow((source.y - end.y), 2);
	return sqrt(dis);
}
#endif // JIANGDA


 //spot �ຯ�� ��������
void Spot::findcontoursfun(Mat& drawcircle) {
	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;
	//Point2f center;
	Mat canny;
	RotatedRect box;
	Canny(midImage, canny, 100, 100 * 2, 3);// canny��Ե��⡣˳���ֵ����ȥ��
	//vector<RotatedRect> minRects;
	//vector<RotatedRect> minRects(contours.size());
	findContours(canny, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);//CHAIN_APPROX_SIMPLEֻ�����յ���Ϣ
#ifdef MY_METHOD_TWO
	Mat drawing = Mat::zeros(canny.size(), CV_8UC3);
	Point2f rescenterPoint;
	//ͨ������hierarachy�����������ж��ĸ���δ�����
	int contour[20] = { 0 };
#ifdef MY_METHOD_TRY
	for (int i = 0; i < contours.size(); i++) {
		if (hierarchy[i][3] != -1) // �Ƿ�����Ƕ�����жϣ��������Ƕ������
			contour[hierarchy[i][3]]++;//�Ը��������м�����
		//������һ�����������÷�������Ӧ����Ԫ�ؼ�һ��
		//ͨ��������������������ܵ�֪�����м����������ˡ�
	}
#endif // MY_METHOD_TRY
	for (int j = 0; j < contours.size(); j++) {
		double area_of_contour = contourArea(contours[j],true);
		//����֣���contourArea�ĵڶ�����д��true���ʱ�Ѿ����Եõ���С��
		if ((area_of_contour >= 1200) && (area_of_contour <= 2000)) {//ֻ��һ�������������
			box = minAreaRect(contours[hierarchy[j][2]]);//�����������е������ת�����С�
			//����minAreaRectѰ�ҵ�����С���������ı�Ե��������minAreaRect(contours[hierarchy[j][2]])
			//hierarchy[j][2] ,2���������������Ҳ����������������Ƕ������
			Point2f points[4];//�ĵ��������
			box.points(points);
			Point2f cc = Point2f(0, 0);
			Point center = box.center;//�õ���ת���ε����ĵ㡣
#ifdef DEBUG
			cout << "center" << center << endl;
#endif // DEBUG
			circle(srcImage, center, 1, Scalar(0, 255, 0), 2);//��ӡ�����ĵ㡣
#ifdef SHOW_CIRCLE
			circle(drawcircle, center, 1, Scalar(0, 0, 255), 10);
			if (cirV.size() < 30) {
				cirV.push_back(center);
			}
			else {
				float R;//���Բ�Ļ�ȡ
				CircleInfo2(cirV, cc, R);
				circle(drawcircle, cc, 1, Scalar(255, 0, 0), 2);
#if (defined DEBUG_LOG) && (defined SHOW_CIRCLE)
				cout << endl << "center " << cc.x << " , " << cc.y << endl;
#endif
				//cirV.erase(cirV.begin());//ȫ���������ʡ��Դ
				if ((cc.x != 0) && (cc.y != 0)) {
					Mat rot = getRotationMatrix2D(cc, 30, 1);
#if (defined DEBUG_LOG)&& (defined SHOW_CIRCLE)
					cout << endl << "center " << cc.x << " , " << cc.y << endl;
#endif
					/*Point2f center����ʾ��ת�����ĵ�
					  double angle����ʾ��ת�ĽǶ�
					  double scale��ͼ����������*/
					float sinA = rot.at<double>(0, 1);//sin(30);
					float cosA = rot.at<double>(0, 0);//cos(30);
					float xx = -(cc.x - center.x);
					float yy = -(cc.y - center.y);
					rescenterPoint = Point2f(cc.x + cosA * xx - sinA * yy, cc.y + sinA * xx + cosA * yy);//������Ϊƫ������
					circle(srcImage, rescenterPoint, 1, Scalar(0, 255, 0), 5);
					//float radius = sqrt(pow((cc.x - rescenterPoint.x), 2) + pow((cc.y - rescenterPoint.y), 2));
					//circle(drawcircle, cc, radius, Scalar(0, 255, 0), 3);
				}
			}
#endif // SHOW_CIRCLE
			for (int i = 0; i < 4; i++) {
				//points[i] += rescenterPoint;
				cout << "��" << i << "�������" << points[i] << endl;
				line(srcImage, points[i], points[(i + 1) % 4], Scalar(127, 127, 0), 2, CV_AA);
			}
			Scalar color(rand() & 255, rand() & 255, rand() & 255);
			putText(srcImage, "target", points[0], FONT_HERSHEY_SIMPLEX, 0.8, color,1.5);//��ӡ����
			//��һ������ͼ�񣬶������ݣ������ı��ַ��������±�λ�ã��ģ������ʽ�����,�壬��С���ߣ����
#if(defined SHOW_CIRCLE)&&(defined SHOW_RESULT)
//namedWindow("circle", WINDOW_AUTOSIZE);
			imshow("circle", drawcircle);
#endif // SHOW_CIRCLE
		}
	}
#endif
}       
static void pretreat(int,void*) {
#ifdef DEBUG_TEST
	//һ��ʼ����canny��Ե��⣬��Ϊ����˳���ֵ���������������нϴ����
	Mat canny;
	int structElementSize = 1;
	Mat element = getStructuringElement(MORPH_RECT, Size(structElementSize + 1, structElementSize + 1), Point(structElementSize, structElementSize));
	Canny(srcImage, canny, 80, 160, 3, false);
	dilate(canny, canny, element);
	imshow("Canny", canny);
#endif 
	// 1.������ɫͨ��
	vector<Mat> imgChannels;
	split(srcImage, imgChannels);
#ifdef RED
	//ͨ������ͨ��������õ�һ�����Ե�������at(0/1/2)����BGR
	//Mat���������
	midImage = imgChannels.at(2) - imgChannels.at(0);
#endif 
#ifdef BLUE 
	midImage = imgChannels.at(0) - imgChannels.at(2);
#endif // BLUE
	//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	//blur(midImage, midImage, Size(9, 9), Point(-1, -1));//�˲��ᵼ�¶�ֵ��ֱ�ӱ����ͣ������ԭ������ֱ�ӳ�ȥ
	//���ܬB������Ϊ��֮ǰ�ı�����Ͷ�ֵ���Ѿ������󲿷���������ʱ���þ�ֵ�˲������ʵ��䷴��

	// 2.��ֵ���������ڣ�ͼ����
	threshold(midImage, midImage, value, valueMax, THRESH_BINARY);
#ifdef DEBUG
	//��ȡ��ֵ����Ƶ
	namedWindow("midImage", WINDOW_AUTOSIZE);
	//cvResizeWindow("midImage2", 500, 500);
	imshow("midImage", midImage);
#endif // DEBUG
	int structElementSize = 1;
	Mat element = getStructuringElement(MORPH_RECT, Size(2 * structElementSize + 1, 2 * structElementSize + 1), Point(structElementSize, structElementSize));
	//Size ����Ϊ�˻���������ȵĽṹԪ��
	//Point �����õ��ṹԪ�ص�����
	dilate(midImage, midImage, element, Point(structElementSize, structElementSize), 1);
	//�������㣬��������Ϊ�ṹԪ��
	structElementSize = 1;
	element = getStructuringElement(MORPH_RECT, Size(2 * structElementSize + 1, 2 * structElementSize + 1), Point(structElementSize, structElementSize));
	morphologyEx(midImage, midImage, MORPH_CLOSE, element, Point(structElementSize, structElementSize), 1);

#ifdef DEBUG
	namedWindow("dilate", WINDOW_AUTOSIZE);
	//cvResizeWindow("dilate", 500, 500);
	imshow("dilate", midImage);
#endif // DEBUG
}
int main() {
	//Pretreat Image;
	Spot spot;
#ifdef BLUE
	VideoCapture capture("С��������.avi");
#endif // BULE
#ifdef RED
	VideoCapture capture("����������.avi");
#endif // RED
	while (1) {
		drawcircle = Mat(srcImage.rows, srcImage.cols, CV_8UC3, Scalar(0, 0, 0));
		capture >> srcImage; // ��ѭ����ȡ֡
		//Image.splitChannels();
		createTrackbar("��ֵ����", "����������", &value, valueMax ,pretreat);
		pretreat(0, 0);
		//Image.prethreshold();
		//Image.predilate();
		spot.findcontoursfun(drawcircle);
#ifdef SHOW_RESULT
		namedWindow("����������", WINDOW_AUTOSIZE);
		imshow("����������", srcImage);
		if (waitKey(1000/24) >= 0)
			break;
#endif // SHOW_RESULT
	}
}
/*
		ʱ�������bug����ĵã������������ֵ�����ȿ�ȵĲ������ã�area�����������ContoursArea()������ã�
		Ȼ��ͨ����ӡ�����ǵ��Ե��ֶ��������޸Ĳ���������Ҫ�ľ��ǿ�ѡδ����ķ�Χ������������������ķ�����
		ͨ��contoursortfun�����ķ�ʽ����contours������������򣬱�֤area���Ե�����������ȷ������Ҫɸѡ�ķ�Χ

		���������󣬾��󲿷���������ٻ�ȡ����������򵥵Ŀ��԰��������ܳ����������������
		������ֱ����std�⣺sort(contours.begin(), contours.end(), ContoursSortFun);
		��ѡδ����Χ��ͬС�죬�ѻ�����ܳ�������϶���δ������ܳ����������ͨ��sort�ĵ����棬ֻҪѡ��ʱ��Ҫ����ͺá�

		ps:���ﻹ�ǲ����׽���ķ�������ֻ�ܽ���һ��for (int i = 0; i >= 0; i = hierarchy[i][0])���Ӹ������ĸ���ǲ�̫��������Ҫ�úü�ǿ��
		����֮ǰһֱ������Ϊû��imshow��ʾ��û�н�ȥѭ������ʵ��һ��ʼ��ʱ��û�п�ʼ��ʾ����Ц���ã���
		֮��ͨ����ӡ����ȣ�����ȵȷ�ʽȥ�ҵ�������Χ��

		ѧϰ�ʼǣ�<vector>hierarchy����������Ҫ����findContours�����ģ�
		�������ÿ������contours[i]��Ӧ��4��hierarchyԪ��.hierarchy[i][0]~hierarchy[i][3]��

		�ڲ�֪�����ٸ��ӣ����ֶ����1.û����minAreaRect�õ��������ı�Ե��2.û��ɸѡ���
		�߿����������󽫱����㴦��ɿ����㣬����̷˼���ϸ��ָ�����׿�����ͱ�����Ĳ�ͬ��
		���������Ӱ��ͼ�����ȣ���ֵ���󣩣������Աȷ��ֿ������¶�ֵ��ͼ�����ģ���������ԭ������
		�߿��޷���λ�����Ի�һֱ������

		�ڵڲ�֪�����ٸ��Ӽ�һ��������Բ�Σ�һ��ʼ�Ƿ�װ����һ����������Ϊû����ѭ���ڲ���������ΪcirV�㼯����û��������ת�������ġ�
		��ɾȥ��DrawCircle�����ѹ��ܷ���Spot������Ȼ�޷����룬������C�ϸ����ʱ���ϸ�İ�����֪��ȫ�ֱ����;ֲ������������Ұ�cirV�㼯���óɾֲ�����
		����ÿ�ν���ѭ�����ᱻ��ʼ�������Ե��Ե�ʱ���ӡcirV.size()һֱ����1���ĳ�ȫ�ֺ�����ok��Ȼ�����imshow��drawcircle���������⣬��ʾʲô
		Assertion failed��size.width>=0,size.height>=0��,ȥ��Ҳ��˵·�����󣬾�����C�ϸ��ϸ�Ľ��
		�ܽ��������ܳ�������ĵط���1.����������Ҫ���ã�û������2.Ҫ��drawcircle��Ҫ��ʾ�����ݣ�����whileѭ����ȥ��������������������һ�������ĵ㣩��
		���߰�drawcircle������һ��ȫ�ֱ���������ȥ��ֵ��3����imshow���ں������棨���룡��
*/




//#ifdef MY_METHOD
//Mat drawing = Mat::zeros(canny.size(), CV_8UC3);
//for (int i = 0; i < contours.size(); i++)
//{
//	Scalar color = Scalar(0, 0, 255);
//	drawContours(drawing, contours, i, color, 1, 8, hierarchy, 0, Point());
//	//����һ��Ҫ���Ƶĵط����������ҵ����������룬
//	//����������һ��һ����ձ���ģ����Դ��ڶ��������ͨ��������������һ��һ�����룬
//	//����Ҳ����ͨ��-1ֱ�ӵõ����������Ļ��ƣ����轨��һ��ѭ��������
//	//�ģ���ɫ������ͨ��Scalarֱ�����ã�Ҳ������Scalar���͵�color�����������롣
//	//�壬���ƿ�Ĵ�ϸ��������ѡ���͡�
//	std::sort(contours.begin(), contours.end(), ContoursSortFun);
//#ifdef DEBUG
//	imshow(" ", drawing);
//#endif // DEBUG	
//	cv::RotatedRect min_center_rect;
//	vector<Point> points;
//	if (contourArea(contours[i]) == 0)
//		continue;//��������Ҫ�����
//	double area_of_contour = contourArea(contours[i]);
//#ifdef DEBUG_LOG
//	cout << area_of_contour << endl;
//#endif // DEBUG_LOG
//	// �Ƚ����
//	if ((area_of_contour >= 1200) && (area_of_contour <= 2000))
//	{
//		min_center_rect = cv::minAreaRect(contours[i]);
//		double center_rect_h_w_div = min_center_rect.size.height / min_center_rect.size.width;
//		center_rect_h_w_div = center_rect_h_w_div > 1 ? center_rect_h_w_div : 1 / center_rect_h_w_div;
//		//�����ҳ���ˮ��
//		points = contours[i];
//		//��ϳ���С��Ӿ���
//		RotatedRect rrect = fitEllipse(points);
//		cv::Point2f* vertices = new cv::Point2f[4];
//		///������ĸ����㸳ֵ��vertices
//		rrect.points(vertices);
//		// �ҳ����
//		float aim = center_rect_h_w_div;
//		//cout << aim << endl;
//		if (aim > 1.95 && aim < 2.5) {
//			cout << "��" << i << "�����Ϊ" << contourArea(contours[i]) << endl;
//			cout << "��" << i << "�������" << center_rect_h_w_div << endl;
//			for (int j = 0; j < 4; j++)
//			{
//				cout << "��" << j << "�������" << vertices[i] << endl;
//				cv::line(srcImage, vertices[j], vertices[(j + 1) % 4], cv::Scalar(0, 255, 0), 1, CV_AA);//CV_AA��˹�˲���֤�ȶ�.
//				//vertices[(j + 1) % 4]ͨ��ѭ������ķ�ʽ����֤���鲻��Խ�硣
//			}
//			//imshow("����", srcImage);
//		}
//		}
//	}
//#endif // MY_METHOD
//#ifdef JIANGDA
////ģ��ƥ��
//double TemplateMatch(cv::Mat image, cv::Mat tepl, cv::Point& point, int method)
//{
//	int result_cols = image.cols - tepl.cols + 1;
//	int result_rows = image.rows - tepl.rows + 1;
//	//    cout <<result_cols<<" "<<result_rows<<endl;
//	cv::Mat result = cv::Mat(result_cols, result_rows, CV_32FC1);
//	cv::matchTemplate(image, tepl, result, method);
//
//	double minVal, maxVal;
//	cv::Point minLoc, maxLoc;
//	cv::minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());
//
//	switch (method)
//	{
//	case CV_TM_SQDIFF:
//	case CV_TM_SQDIFF_NORMED:
//		point = minLoc;
//		return minVal;
//
//	default:
//		point = maxLoc;
//		return maxVal;
//
//	}
//}
//#endif // JIANGDA
//#ifdef JIANGDA
////��ת����
//RotatedRect rect;
//Point2f src[4], dst[4];
//double width, height;
//bool findTarget = 0;
//vector<vector<Point>> contours_ploy(contours.size());
//vector<Rect> ploy_rects(contours.size());
////��Ϊ����ת�ģ���̬�����Բ���ֱ�������ϵ����ӣ�Ҫ����һ����ת�֮࣬����������������ת�������
//if (hierarchy.size())
//for (int i = 0; i >= 0; i = hierarchy[i][0]) {
//	approxPolyDP(Mat(contours[i]), contours_ploy[i], 3, true);
//	ploy_rects[i] = boundingRect(contours_ploy[i]);
//	rect = minAreaRect(contours[i]); // �ѹյ���Ϣ����
//	Point2f P[4]; // �����ĸ������
//	rect.points(P);//�㴫��
//
//
//#ifdef MY_METHOD_TRY
//	if (contours_ploy.size()) {
//		//��С����
//		minRects[i] = minAreaRect(contours[i]);
//		minRects[i].points(src);
//		for (int r = 0; r < 4; r++) {
//			line(srcImage, src[r], src[(r + 1) % 4], Scalar(0, 0, 255), 1, 8);
//		}
//	}
//#endif		
//	double width;
//	double height;
//
//	//������ȡ��ҶƬ�Ŀ��
//	width = getDistance(P[0], P[1]);
//	height = getDistance(P[1], P[2]);
//	if (width > height)
//	{
//		src[0] = P[0];
//		src[1] = P[1];
//		src[2] = P[2];
//		src[3] = P[3];
//	}
//	else {
//		swap(width, height);
//		src[0] = P[1];
//		src[1] = P[2];
//		src[2] = P[3];
//		src[3] = P[0];
//	}
//#ifdef SHOW_ALLRECT
//	Scalar color(rand() & 255, rand() & 255, rand() & 255);
//	drawContours(srcImage, contours, i, color, 4, 8, hierarchy);
//#endif // show_allrect
//	//�������Ѱ��
//	double area = height * width;
//	if (area > 5000) {
//#ifdef DEBUG_LOG
//		cout << hierarchy[i] << endl;
//#endif // DEBUG_LOG
//		dst[0] = Point2f(0, 0);
//		dst[1] = Point2f(width, 0);
//		dst[2] = Point2f(width, height);
//		dst[3] = Point2f(0, height);
//		// Ӧ��͸�ӱ任�������ɹ������
//		Mat transform = getPerspectiveTransform(src, dst);
//		Mat perspectMat;
//		warpPerspective(midImage, perspectMat, transform, midImage.size());
//#ifdef DEBUG
//		//�Թ�����εķ�ʽ���ڴ��ڵ����Ͻǣ�֮�����SVMѵ��
//		imshow("warpdst", perspectMat);
//#endif
//		// ��ȡ��ҶͼƬ
//		/*Mat testim;
//		testim = perspectMat(Rect(0, 0, width, height));*/
//#ifdef LEAF_IMG
//		//���ڱ�����ҶͼƬ���Ա������ѵ��svm
//		string s = "leaf" + to_string(cnnt) + ".jpg";
//		cnnt++;
//		imwrite("./img/" + s, testim);
//#endif
//#ifdef DEBUG
//		imshow("testim", testim);
//#endif
//#ifdef DEBUG
//		namedWindow(" ", WINDOW_AUTOSIZE);
//		imshow(" ", srcImage);
//#endif // DEBUG
//#if (defined DEBUG)&&(defined USE_TEMPLATE)
//		imshow("temp1", tmp1);
//#endif
//
//#ifdef USE_TEMPLATE
//		cv::Point matchLoc;
//		Mat tmp1; //�ȶ�ͼ��
//		double value;
//		Mat templ[9];// ģ��
//		for (int i = 1; i <= 8; i++)
//		{
//			templ[i] = imread("../OpenCV/OpenCV/template" + to_string(i) + ".jpg", IMREAD_GRAYSCALE);
//			//resize(templ[i], tmp1, Size(42, 20));
//			//imshow(" ", templ[i]);
//		}
//		vector<double> NoHit;
//		vector<double> YesHit;
//		//���ӣ�δ����
//		for (int j = 1; j <= 6; j++)
//		{
//			value = TemplateMatch(tmp1, templ[j], matchLoc, CV_TM_CCOEFF_NORMED);
//			NoHit.push_back(value);
//		}
//		//�������ѻ���
//		for (int j = 7; j <= 8; j++)
//		{
//			value = TemplateMatch(tmp1, templ[j], matchLoc, CV_TM_CCOEFF_NORMED);
//			YesHit.push_back(value);
//		}
//		int maxv1 = 0, maxv2 = 0;
//		//Ѱ��ƥ�����ı��
//		for (int t1 = 0; t1 < 6; t1++)
//			if (NoHit[t1] > NoHit[maxv1])
//				maxv1 = t1;
//		for (int t2 = 0; t2 < 2; t2++)
//			if (YesHit[t2] > YesHit[maxv2])
//				maxv2 = t2;
//#endif
//#if (defined DEBUG_LOG)&&(defined USE_TEMPLATE)
//		cout << Vvalue1[maxv1] << endl;
//		cout << Vvalue2[maxv2] << endl;
//#endif
//#ifdef USE_SVM
//		//ת��Ϊsvm��Ҫ��ĸ�ʽ
//		Mat test = get(testim);
//#endif
//		//Ԥ���Ƿ���Ҫ�������Ҷ
//#ifdef USE_TEMPLATE
//		if (NoHit[maxv1] > YesHit[maxv2] && NoHit[maxv1] > 0.6)
//#endif
//#ifdef USE_SVM
//			if (svm->predict(test) >= 0.9)
//#endif
//			{
//				findTarget = true;
//				//����װ�װ�
//				if (hierarchy[i][2] >= 0)
//				{
//					RotatedRect rect_tmp = minAreaRect(contours[hierarchy[i][2]]);
//					Point2f Pnt[4];
//					rect_tmp.points(Pnt);
//					//������ô���õģ�����������
//					const float maxHWRatio = 0.7153846;
//					const float maxArea = 2000;
//					const float minArea = 500;
//
//					float width = rect_tmp.size.width;
//					float height = rect_tmp.size.height;
//					if (height > width)
//						swap(height, width);
//					float area = width * height;
//
//					if (height / width > maxHWRatio || area > maxArea || area < minArea) {
//						continue;
//					}
//					Point centerP = rect_tmp.center;
//					//�����
//					circle(srcImage, centerP, 1, Scalar(0, 0, 255), 1);
//					//����װ��λ��
//					for (int j = 0; j < 4; ++j)
//					{
//						line(srcImage, Pnt[j], Pnt[(j + 1) % 4], Scalar(0, 255, 255), 2);
//					}
//				}
//			}
//	}
//}
//#endif // JIANGDA