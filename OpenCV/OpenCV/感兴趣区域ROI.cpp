#define _CRT_SECURE_NO_WARNINGS 1
#include<opencv2/opencv.hpp>
using namespace cv;

int main() {
	//1.��ȡͼ��
	Mat srcImage1 = imread("dota_pa.jpg");
	Mat logoImage = imread("dota_logo.jpg");
	if (!srcImage1.data) { return -1; }
	if (!logoImage.data) { return -1; }
	//�쳣����׳�

	//2.����Mat���Ͳ������趨ROI����
	Mat imageROI = srcImage1(Rect(200, 250, logoImage.cols, logoImage.rows));
	//Rect������ǰ�������������Ͻǵ����꣬�����������Ǿ��γ���ͨ���ڸ���ͼ���еĳ���ѡ��
	
	//3.������Ĥ�������ǻҶ�ͼ��
	Mat mask = imread("dota_logo.jpg", 0);//�Ҷ�ͼ�����Ϊ0
	
	//4.��Ĥ���Ƶ�ROI
	logoImage.copyTo(imageROI, mask);
	
	//5.��ʾ���
	namedWindow("<1>ͼ�����ʾ������");
	imshow("<1>����ROIʵ��ͼ�����ʾ������", srcImage1);
	imshow("<2>", logoImage);

	waitKey(0);
	return true;
}