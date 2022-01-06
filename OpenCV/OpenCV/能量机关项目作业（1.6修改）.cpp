#define _CRT_SECURE_NO_WARNINGS 1
#include<opencv2\opencv.hpp>
#include<iostream>
#include <chrono>
#include <thread>
using namespace cv;
using namespace std;
using namespace chrono;

//#define MY_METHOD_TRY
#define MY_METHOD_TRY_TWO
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
float factor = 0.08;
Mat srcImage, midImage;
vector<Point2f> cirV;
queue<Point2f> circleV;
Mat drawcircle;
int value = 30;
const int valueMax = 255;
static bool CircleInfo2(vector<Point2f>& m_Points, Point2f& Centroid, float& dRadius)
{
	if (!m_Points.empty())
	{
		int iNum = (int)m_Points.size();
		if (iNum < 3)	return 1;
		double X1 = 0.0;
		double Y1 = 0.0;
		double X2 = 0.0;
		double Y2 = 0.0;
		double X3 = 0.0;
		double Y3 = 0.0;
		double X1Y1 = 0.0;
		double X1Y2 = 0.0;
		double X2Y1 = 0.0;
		vector<cv::Point2f>::iterator iter;
		vector<cv::Point2f>::iterator end = m_Points.end();
		for (iter = m_Points.begin(); iter != end; ++iter)
		{
			X1 = X1 + (*iter).x;
			Y1 = Y1 + (*iter).y;
			X2 = X2 + (*iter).x * (*iter).x;
			Y2 = Y2 + (*iter).y * (*iter).y;
			X3 = X3 + (*iter).x * (*iter).x * (*iter).x;
			Y3 = Y3 + (*iter).y * (*iter).y * (*iter).y;
			X1Y1 = X1Y1 + (*iter).x * (*iter).y;
			X1Y2 = X1Y2 + (*iter).x * (*iter).y * (*iter).y;
			X2Y1 = X2Y1 + (*iter).x * (*iter).x * (*iter).y;
		}
		double C = 0.0;
		double D = 0.0;
		double E = 0.0;
		double G = 0.0;
		double H = 0.0;
		double a = 0.0;
		double b = 0.0;
		double c = 0.0;
		C = iNum * X2 - X1 * X1;
		D = iNum * X1Y1 - X1 * Y1;
		E = iNum * X3 + iNum * X1Y2 - (X2 + Y2) * X1;
		G = iNum * Y2 - Y1 * Y1;
		H = iNum * X2Y1 + iNum * Y3 - (X2 + Y2) * Y1;
		a = (H * D - E * G) / (C * G - D * D);
		b = (H * C - E * D) / (D * D - G * C);
		c = -(a * X1 + b * Y1 + X2 + Y2) / iNum;
		double A = 0.0;
		double B = 0.0;
		double R = 0.0;
		A = a / (-2);
		B = b / (-2);
		R = double(sqrt(a * a + b * b - 4 * c) / 2);
		Centroid.x = A;
		Centroid.y = B;
		dRadius = R;
		return 0;
	}
	else
		return 1;
	return 0;
}
//class Pretreat;
//class Pretreat {
//public:
//	Pretreat() {}
//	~Pretreat() {}
//	void splitChannels();
//	void prethreshold();
//	void predilate();
//};
class Spot;
class Spot {
public:
	//��������
	Spot() {}
	~Spot() {}
	void findcontoursfun(Mat& drawcircle);
};
void speed() {
	double v = 10;//һ��ʮת
	double danwantime = 1;//��
}
void speed(Point2f& centerR, Point2f& prepoints, Point2f& curpoints) {
	//centerRԲ�ġ�prepointsǰһ����,curpoints��ǰ��
	double chacheng = (prepoints.x * curpoints.x + prepoints.y * curpoints.y)
		/ ((sqrt((prepoints.x - centerR.x) * (prepoints.x - centerR.x) + ((prepoints.y - centerR.y) * (prepoints.y - centerR.y))))
	  *(sqrt((curpoints.x - centerR.x) * (curpoints.x - centerR.x) + ((curpoints.y - centerR.y) * (curpoints.y - curpoints.y)))));
	double cos = chacheng * factor;
	double angle = acos(cos);
	double t;
	cout << "cos:" << cos << endl;
	cout << "angle:" << angle << endl;
	double spica = angle * 12;//һ֡1/12��,�����ǵõ�angle�� angle/ 1/12 == angle*12
	cout << "���ٶ�:" << spica <<endl;
	double spt;
	//spt = 0.785 * sin(1.884 * t) + 1.305;
	//cout << "���ٶ�(�ٷ�)" << spt << endl;
}
void direction(Point2f cc,Point2f precenter,Point2f center) {
	double a_x = abs(precenter.x - cc.x);
	double b_x = abs(center.x - cc.x);
	double a_y = abs(precenter.y - cc.y);
	double b_y = abs(center.y - cc.y);
	double fangcheng = a_x * b_y - a_y * b_x;
	if (fangcheng > 0)cout << "����Ϊ��ʱ��" << endl;
	else cout << "����Ϊ˳ʱ��" << endl;
}
 //spot �ຯ�� ��������
void Spot::findcontoursfun(Mat& drawcircle) {
	vector<vector<Point>> contours;
	vector<vector<Point>> contours_ploy;
	vector<Vec4i> hierarchy;
	//Point2f center;
	Mat canny;
	RotatedRect box;
	float R;//���Բ�Ļ�ȡ
	Point2f cc = Point(0,0);
	Canny(midImage, canny, 50, 100, 3);// canny��Ե��⡣˳���ֵ����ȥ��
	//vector<RotatedRect> minRects;
	//vector<RotatedRect> minRects(contours.size());
	findContours(canny, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);//CHAIN_APPROX_SIMPLEֻ�����յ���Ϣ
#ifdef MY_METHOD_TWO
	Mat drawing = Mat::zeros(canny.size(), CV_8UC3);
	Point2f rescenterPoint;
	//ͨ������hierarachy�����������ж��ĸ���δ�����
#ifdef MY_METHOD_TRY
	int contour[20] = { 0 };
	for (int i = 0; i < contours.size(); i++) {
		if (hierarchy[i][3] != -1) // �Ƿ�����Ƕ�����жϣ��������Ƕ������
			contour[hierarchy[i][3]]++;//�Ը��������м�����
		//������һ�����������÷�������Ӧ����Ԫ�ؼ�һ��
		//ͨ��������������������ܵ�֪�����м����������ˡ�
	}
#endif // MY_METHOD_TRY
	Point2f meanPoints = Point2f(256, 273);//����������ȶ��㡣
	for (int j = 0; j < contours.size(); j++) {
		double area_of_contour = contourArea(contours[j],true);
		//����֣���contourArea�ĵڶ�����д��true���ʱ�Ѿ����Եõ���С��
#ifdef MY_METHOD_TRY_TWO
		//��bug��������
		/*Բ�Ŀ��˺ܾã�û�а취�����ֱ�ӽ���Բ��Ϊ���ִ����ľ�ֵ�����������ȡ���ٶȺ�cos*/
			if (area_of_contour > 100 && area_of_contour <= 250) {
				Scalar color(rand() & 255, rand() & 255, rand() & 255);
				drawContours(midImage, contours, j, color, CV_FILLED, 8, hierarchy);
			//��׼Բ��ͼƬ��һ������Բ�����Բ���OpenCV�������Բ�ķ����������
				Mat pointsf;
				Mat(contours[0]).convertTo(pointsf, CV_32F);
				RotatedRect minR = fitEllipse(contours[0]);
				vector<Point2d> circlePoints;
				if (((minR.center.x >= 230) && (minR.center.x <= 300)) && ((minR.center.y >= 230) && (minR.center.y <= 300))) {
					circle(srcImage, minR.center, 1, Scalar(0, 255, 0), 2);
					cout << "\r" << minR.center << endl;
				}
				else {
					circle(srcImage, meanPoints, 1, Scalar(0, 255, 0), 2);
					cout << "\r" << meanPoints << endl;
				}
			}
#endif // MY_METHOD_TRY
		if ((area_of_contour >= 1200) && (area_of_contour <= 2000)) {//ֻ��һ�������������
			box = minAreaRect(contours[hierarchy[j][2]]);//�����������е������ת�����С�
			//����minAreaRectѰ�ҵ�����С���������ı�Ե��������minAreaRect(contours[hierarchy[j][2]])
			//hierarchy[j][2] ,2���������������Ҳ����������������Ƕ������
			Point2f points[4];//�ĵ��������
			box.points(points);
			Point2f center = box.center;//�õ���ת���ε����ĵ㡣
			Point2f precenter = minAreaRect(contours[hierarchy[(j + 1) % 4][2]]).center;//�õ���ת���ε����ĵ㡣
#ifdef DEBUG
			cout << "center" << center << endl;
#endif // DEBUG
			circle(srcImage, center, 1, Scalar(0, 255, 0), 2);//��ӡ�����ĵ㡣
#ifdef SHOW_CIRCLE
			circle(drawcircle, center, 1, Scalar(0, 0, 255), 10);
			if (cirV.size() < 120) {
				cirV.push_back(center);
				circleV.push(center);
			}
			else {
				CircleInfo2(cirV, cc, R);
				//circle(drawcircle, cc, 1, Scalar(255, 0, 0), 2);
				//circle(drawcircle, cc, R, Scalar(255, 0, 0), 2);
				//circle(srcImage, cc, 1, Scalar(255, 0, 0), 2);
				//circle(srcImage, cc, R, Scalar(255, 0, 0), 2);
#if (defined DEBUG_LOG) && (defined SHOW_CIRCLE)
				cout << endl << "center " << cc.x << " , " << cc.y << endl;
#endif
				//cirV.erase(cirV.begin());//ȫ���������ʡ��Դ
				if ((cc.x != 0) && (cc.y != 0)) {
					//һ��60�ȣ�һ֡5/2����sinֻ��ʶ������
					Mat rot = getRotationMatrix2D(cc, 5/2, 1);
#if (defined DEBUG_LOG)&& (defined SHOW_CIRCLE)
					cout << endl << "center " << cc.x << " , " << cc.y << endl;
#endif
					/*Point2f center����ʾ��ת�����ĵ�
					  double angle����ʾ��ת�ĽǶ�
					  double scale��ͼ����������*/
					float sinA = rot.at<double>(0, 1);//sin(60);
					float cosA = rot.at<double>(0, 0);//cos(60);
					float xx = -(cc.x - center.x);
					float yy = -(cc.y - center.y);
					rescenterPoint = Point2f(cc.x + cosA * xx - sinA * yy, cc.y + sinA * xx + cosA * yy);//������Ϊƫ������
					circle(srcImage, rescenterPoint, 1, Scalar(0, 255, 0), 5);
				}
			}
#endif // SHOW_CIRCLE
			for (int i = 0; i < 4; i++) {
				cout << "��" << i << "�������" << points[i] << endl;
				line(srcImage, points[i], points[(i + 1) % 4], Scalar(127, 127, 0), 2, CV_AA);
			}
			Scalar color(rand() & 255, rand() & 255, rand() & 255);
			//putText(srcImage, "target", points[0], FONT_HERSHEY_SIMPLEX, 0.8, color,1.5);//��ӡ����
			//��һ������ͼ�񣬶������ݣ������ı��ַ��������±�λ�ã��ģ������ʽ�����,�壬��С���ߣ����
			
			//�����ж�
			direction(cc,precenter, center);
			//�ٶȽ���
			//speed(cc,precenter,center);
#if(defined SHOW_CIRCLE)&&(defined SHOW_RESULT)
			//namedWindow("circle", WINDOW_AUTOSIZE);
			
			//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
			//imshow("circle", drawcircle);//��ֵ�bug��blue����ʶ��ֻ��red��ʶ��
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
	Mat frame, currentframe, previousframe,difframe;
#ifdef BLUE
	VideoCapture capture("С��������.avi");
#endif // BULE
#ifdef RED
	VideoCapture capture("����������.avi");
#endif // RED
	while (1) {
		milliseconds start_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		drawcircle = Mat(srcImage.rows, srcImage.cols, CV_8UC3, Scalar(0, 0, 0));
		capture >> srcImage; // ��ѭ����ȡ֡
		//Image.splitChannels();
		createTrackbar("��ֵ����", "����������", &value, valueMax ,pretreat);
		pretreat(0, 0);
		milliseconds func1_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		//Image.prethreshold();
		//Image.predilate();
		spot.findcontoursfun(drawcircle);
		milliseconds func2_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());

#ifdef SHOW_RESULT
		namedWindow("����������", WINDOW_AUTOSIZE);
		imshow("����������", srcImage);
		//previousframe = srcImage.clone();
		//capture >> srcImage;
		//currentframe = srcImage.clone();
		//cvtColor(currentframe, currentframe, COLOR_BGR2GRAY);
		//cvtColor(previousframe, previousframe, COLOR_BGR2GRAY);
		//absdiff(currentframe, previousframe, difframe);
		//threshold(difframe, frame, 20, 255.0, CV_THRESH_BINARY|CV_THRESH_OTSU);
		//dilate(frame, frame, Mat());//����  
		//erode(frame, frame, Mat());//��ʴ
		////imshow("֡�", frame);
		milliseconds end_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		cout << "Pretreat_Func_��ʱ:" << milliseconds(func1_time).count() - milliseconds(start_time).count()<< " ms" << endl;
		cout << "Findcontours_Func_��ʱ:" << milliseconds(func2_time).count() - milliseconds(func1_time).count()<< " ms" << endl;
		cout << "�ܺ�ʱ:" << milliseconds(end_time).count() - milliseconds(start_time).count()<< " ms" << endl;
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
