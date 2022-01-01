#define _CRT_SECURE_NO_WARNINGS 1
#include<opencv2\opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

#define SHOW_RESULT
#define SHOW_CIRCLE
#define DEBUG_LOG
#define DEBUG
//#define RED 
#define BLUE
int main() {
	VideoCapture capture("С��������.mp4");
	//VideoCapture capture("����������.mp4");
	Mat frame, srcImage;
	Point2i center;//�����������
	while (1) {
		capture >> frame; // ��ѭ����ȡ֡
		resize(frame, srcImage, Size(frame.cols , frame.rows));
		//������Ƶ��С(ѹ����Ƶ)

		//center = markred(srcImage);// ץ����
		//cout << center << endl;
	
	//ͼ��Ԥ����
		// 1.������ɫͨ��
		vector<Mat> imgChannels;
		split(srcImage, imgChannels);
		blur(srcImage, srcImage, Size(9, 9), Point(-1, -1));

		//readCapture();// 1.��ȡͼ�� readCapture()
		//pretreatCap();// 2.ͼ��Ԥ���� pretreatCap()
#ifdef RED
		//ͨ������ͨ��������õ�һ�����Ե�������at(0/1/2)����BGR
		//Mat���������
		Mat midImage2 = imgChannels.at(2) - imgChannels.at(0);
#endif 
#ifdef BLUE
		Mat midImage2 = imgChannels.at(0) - imgChannels.at(2);
#endif // BLUE

		// 2.��ֵ���������ڣ�ͼ����
		threshold(midImage2,midImage2, 120, 256, THRESH_BINARY);
#ifdef DEBUG
		//��ȡ��ֵ����Ƶ
		namedWindow("midImage2", 0);
		//cvResizeWindow("midImage2", 500, 500);
		imshow("midImage2", midImage2);
#endif // DEBUG
		int structElementSize = 1;
		Mat element = 
		getStructuringElement(MORPH_RECT, 
		Size( structElementSize + 1, 
		      structElementSize + 1), 
		Point(structElementSize, structElementSize));
		//Size ����Ϊ�˻���������ȵĽṹԪ��
		//Point �����õ��ṹԪ�ص�����
		dilate(midImage2, midImage2, element, Point(structElementSize, structElementSize),1);
		//�������㣬��������Ϊ�ṹԪ��
		structElementSize = 1;
		element = 
		getStructuringElement(MORPH_RECT,
		Size(structElementSize + 1,
			 structElementSize + 1),
		Point(structElementSize, structElementSize));
		morphologyEx(midImage2, midImage2, MORPH_CLOSE, element, Point(structElementSize, structElementSize), 1);

#ifdef DEBUG
		namedWindow("dilate", 0);
		//cvResizeWindow("dilate", 500, 500);
		imshow("dilate", midImage2);
#endif // DEBUG
		//��Ե���

#ifdef SHOW_RESULT
		imshow("����������", frame);
		if (waitKey(1000/24) >= 0)
			break;
#endif // SHOW_RESULT
	}
}

