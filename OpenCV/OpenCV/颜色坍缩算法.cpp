//#define _CRT_SECURE_NO_WARNINGS 1
//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace std;
//using namespace cv;
//
//void colorReduce(Mat& inputImage, Mat& outputImage, int div);
//int main() {
//	Mat srcImage = imread("1.jpg");
//	imshow("ԭʼͼ��", srcImage);
//
//	//2.��ԭʼͼ�Ĳ�����С������Ч��ͼ
//	Mat dstImage;
//	dstImage.create(srcImage.rows, srcImage.cols, srcImage.type());
//	//create()��ʼ������
//
//	//3.��¼��ʼʱ��
//	double time0 = static_cast<double>(getTickCount());
//	//getTickCount()����������
//
//	//4.������ɫ̮���㷨
//	colorReduce(srcImage, dstImage, 32);
//
//	//5.��������ʱ�䲢���
//	time0 = ((double)getTickCount() - time0) / getTickFrequency();
//	cout << "�˷�������ʱ��Ϊ��" << time0 << "��" << endl;
//
//	//6.��ʾ
//	imshow("Ч��ͼ", dstImage);
//	waitKey(0);
//}
//
////ָ�뷨����������ڴ�й¶��ָ��Խ��
////void colorReduce(Mat& inputImage, Mat& outputImage, int div) {
////	outputImage = inputImage.clone();//����
////	int rowNumber = outputImage.rows;//����
////	int colNumber = outputImage.cols * outputImage.channels();
////	//ÿһ��Ԫ�صĸ���Ϊ�ܵ�����������
////
////	//˫��forѭ������������Ԫ��
////	for (int i = 0; i < rowNumber; i++) {
////		uchar* data = outputImage.ptr<uchar>(i);
////		//��ȡ��i�е���������Ϊ�׵�ַ��������Ҫָ�롣
////		for (int j = 0; j < colNumber; j++) {
////			data[j] = data[j] / div * div + div / 2;
////		}
////	}
////}
//
////������
////void colorReduce(Mat& inputImage, Mat& outputImage, int div) {
////	outputImage = inputImage.clone();//����
////	Mat_<Vec3b>::iterator it = outputImage.begin<Vec3b>();
////	Mat_<Vec3b>::iterator itend = outputImage.end<Vec3b>();
////
////	//��ȡ��ɫͼ������
////	for (; it != itend; ++it) {
////		(*it)[0] = (*it)[0] / div * div + div / 2;
////		(*it)[1] = (*it)[1] / div * div + div / 2;
////		(*it)[2] = (*it)[2] / div * div + div / 2;
////	}
////}
//
////��̬��ַ
//void colorReduce(Mat& inputImage, Mat& outputImage, int div) {
//	outputImage = inputImage.clone();//����
//	int rowNumber = outputImage.rows;//����
//	int colNumber = outputImage.cols;//������
//
//	//��ȡ��ɫͼ������
//	for (int i = 0; i < rowNumber; i++) {
//
//		//Vec3b��ͨ����������������CVͨ��BGR���洢���أ�����<Vec3b>(i,j)[0]����ɫͨ����
//		for (int j = 0; j < colNumber; j++) {
//			//��ɫͨ����B
//			outputImage.at<Vec3b>(i, j)[0] =
//				outputImage.at<Vec3b>(i, j)[0] / div * div + div / 2;
//			//��ɫͨ����G
//			outputImage.at<Vec3b>(i, j)[1] =
//				outputImage.at<Vec3b>(i, j)[1] / div * div + div / 2;
//			//��ɫͨ����R
//			outputImage.at<Vec3b>(i, j)[2] =
//				outputImage.at<Vec3b>(i, j)[2] / div * div + div / 2;
//		}
//	}
//	
//}