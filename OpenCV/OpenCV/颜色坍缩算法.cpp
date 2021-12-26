#define _CRT_SECURE_NO_WARNINGS 1
#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;

void colorReduce(Mat& inputImage, Mat& outputImage, int div);
int main() {
	Mat srcImage = imread("1.jpg");
	imshow("ԭʼͼ��", srcImage);

	//2.��ԭʼͼ�Ĳ�����С������Ч��ͼ
	Mat dstImage;
	dstImage.create(srcImage.rows, srcImage.cols, srcImage.type());
	//create()��ʼ������

	//3.��¼��ʼʱ��
	double time0 = static_cast<double>(getTickCount());
	//getTickCount()����������

	//4.������ɫ̮���㷨
	colorReduce(srcImage, dstImage, 32);

	//5.��������ʱ�䲢���
	time0 = ((double)getTickCount() - time0) / getTickFrequency();
	cout << "�˷�������ʱ��Ϊ��" << time0 << "��" << endl;

	//6.��ʾ
	imshow("Ч��ͼ", dstImage);
	waitKey(0);
}