#define _CRT_SECURE_NO_WARNINGS 1
#include<opencv2/opencv.hpp>
using namespace cv;

int main() {
	double alphaValue = 0.5;
	double betaValue;
	betaValue = (1.0) - alphaValue;//��ϼ�Ȩ����Ȩ��Ϊ1��������һ��δ֪��֮����һ��δ֪��Ϊ1-ǰδ֪����
	Mat srcImage1, srcImage2, dstImage;

	srcImage1 = imread("mogu.jpg");
	srcImage2 = imread("rain.jpg");

	if (!srcImage1.data) { return -1; }
	if (!srcImage2.data) { return -1; }

	//����ͼƬ�ĳߴ����һ�¡�
	addWeighted(srcImage1, alphaValue, srcImage2, betaValue, 0.0, dstImage);
	//�������ͣ�ͼƬһ��ͼһȨ�أ�ͼ����ͼ��Ȩ�أ�����ֵ����ʱ������ʲô��˼������0.0��,���ͼ

	imshow("<2>���Ի��ʾ�����ڡ�ԭͼ��", srcImage2);

	imshow("<3>���Ի��ʾ�����ڡ�Ч��ͼ��", dstImage);
	
	waitKey(0);
	return true;
}
