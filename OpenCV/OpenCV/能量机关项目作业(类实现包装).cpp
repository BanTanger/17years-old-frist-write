#define _CRT_SECURE_NO_WARNINGS 1
#include<opencv2\opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

#define SHOW_ALLRECT
#define SHOW_RESULT
#define SHOW_CIRCLE
//#define DEBUG_LOG
#define DEBUG
#define RED 
//#define BLUE
//#define DEBUG_TEST

Mat srcImage, midImage;

class Pretreat;
class Spot;
class Pretreat {
public:
	Pretreat() {}
	~Pretreat() {}
	void splitChannels();
	void prethreshold();
	void predilate();
};
class Spot {
public:
	//��������
	Pretreat pre;
	Spot() {}
	~Spot() {}
	void findcontoursfun();
};
// Pretreat�� ���Ͳ�����
void Pretreat::predilate() {
	int structElementSize = 2;
	Mat element =getStructuringElement(MORPH_RECT,Size(structElementSize + 1,structElementSize + 1),Point(structElementSize, structElementSize));
	//Size ����Ϊ�˻���������ȵĽṹԪ��
	//Point �����õ��ṹԪ�ص�����
	dilate(midImage, midImage, element, Point(structElementSize, structElementSize), 1);
	//�������㣬��������Ϊ�ṹԪ��
	structElementSize = 2;
	element =getStructuringElement(MORPH_RECT,Size(structElementSize + 1,structElementSize + 1),Point(structElementSize, structElementSize));
	morphologyEx(midImage, midImage, MORPH_CLOSE, element, Point(structElementSize, structElementSize), 1);

#ifdef DEBUG
	namedWindow("dilate", WINDOW_AUTOSIZE);
	//cvResizeWindow("dilate", 500, 500);
	imshow("dilate", midImage);
#endif // DEBUG
}
// Pretreat�� ����ͨ��������
void Pretreat::splitChannels() {
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
	blur(srcImage, srcImage, Size(9, 9), Point(-1, -1));//�˲�
#ifdef RED
	//ͨ������ͨ��������õ�һ�����Ե�������at(0/1/2)����BGR
	//Mat���������
	midImage = imgChannels.at(2) - imgChannels.at(0);
#endif 
#ifdef BLUE 
	midImage = imgChannels.at(0) - imgChannels.at(2);
#endif // BLUE
}
// Pretreat�� ��ֵ��������
void Pretreat::prethreshold() {
	// 2.��ֵ���������ڣ�ͼ����
	threshold(midImage, midImage,100,256, THRESH_BINARY|THRESH_OTSU);
#ifdef DEBUG
	//��ȡ��ֵ����Ƶ
	namedWindow("midImage", WINDOW_AUTOSIZE);
	//cvResizeWindow("midImage2", 500, 500);
	imshow("midImage", midImage);
#endif // DEBUG
}

double getDistance(Point source, Point end) {
	double dis;
	dis = pow((source.x - end.x), 2) + pow((source.y - end.y), 2);
	return sqrt(dis);
}

 //spot �ຯ�� ��������
void Spot::findcontoursfun() {
	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;
	findContours(midImage, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);
	
	//��ת����
	RotatedRect rect;
	Point2f src[4], dst[4];
	double width, height;
	//��Ϊ����ת�ģ���̬�����Բ���ֱ�������ϵ����ӣ�Ҫ����һ����ת�֮࣬����������������ת�������
		for (int i = 0; i < contours.size(); i++) {
			//��С����
			rect = minAreaRect(contours[i]);
			Point2f P[4];//�����ĸ��㡣
			rect.points(P);//��ȡ��С��Ӿ��ε��ĸ�����
			Point2f rectcenters = rect.center;//��С���ε����ģ�
			//��ó��ȡ�
			width = getDistance(P[0], P[1]);
			height = getDistance(P[1], P[2]);

#ifdef SHOW_ALLRECT
			Scalar color(rand() & 255, rand() & 255, rand() & 255);
			drawContours(srcImage, contours, i, color, 4, 8, hierarchy);
#endif // show_allrect
			namedWindow(" ", WINDOW_AUTOSIZE);
			imshow("",srcImage);
		}
}


int main() {
	Pretreat Image;
	Spot spot;
#ifdef BLUE
	VideoCapture capture("С��������.mp4");
#endif // BULE
#ifdef RED
	VideoCapture capture("����������.mp4");
#endif // RED

	Mat frame;
	Point2i center;//�����������

	while (1) {
		capture >> frame; // ��ѭ����ȡ֡
		resize(frame, srcImage, Size(frame.cols, frame.rows));
		
		Image.splitChannels();
		Image.prethreshold();
		Image.predilate();
		spot.findcontoursfun();

#ifdef SHOW_RESULT
		imshow("����������", frame);
		if (waitKey(1) >= 0)
			break;
#endif // SHOW_RESULT
	}
}




