//#define _CRT_SECURE_NO_WARNINGS 1
//#include<opencv2/opencv.hpp>
//using namespace cv;
//
//int main() {
//	VideoCapture capture(0);
//	Mat edges;
//
//	//��ѭ����ʾÿһ֡
//	while (1) {
//		//1.����ͼ��
//		Mat frame;
//		capture >> frame;
//
//		//2.��ԭͼ��ת���ɻҶ�ͼ��
//		cvtColor(frame, edges, CV_BGR2GRAY);//ת����ͼΪ�Ҷ�ͼ
//
//		//3.ʹ��3*3�ں˽���(2*3+1 = 7)
//		blur(edges, edges, Size(7, 7));
//
//		//4.����canny��Ե��Ⲣ��ʾ
//		Canny(edges, edges, 0, 30, 3);
//		imshow("��canny�����Ƶ", edges);//��ʾ��������ĵ�ǰ֡��
//		if (waitKey(30) >= 0)break;
//	}
//	return 0;
//}