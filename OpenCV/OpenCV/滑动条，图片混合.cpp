//#define _CRT_SECURE_NO_WARNINGS 1
//#include<opencv2/opencv.hpp>
//#include<opencv2/highgui/highgui.hpp>
//using namespace cv;
//
//#define WINDOW_NAME "���Ի��ʾ��"  //���ڶ����
//
//const int g_nMaxAlphaValue = 100;//Alpha ֵ�����ֵ
//int g_nAlphaValueSlider;//��������Ӧ�ı�����createTrack�����ĵ���������
//double g_dAlphaValue;
//double g_dBetaValue;
//
////�����洢ͼ��ı�����
//Mat g_srcImage1;
//Mat g_srcImage2;
//Mat g_dstImage;
//
////on_Trackbar()����
////��Ӧ�������Ļص�����
//void on_Trackbar(int ,void *) {
//	//��һ�������ǹ켣����λ�ã��ڶ����������û�����
//
//	g_dAlphaValue = (double)g_nAlphaValueSlider / g_nMaxAlphaValue;
//	//��õ�ǰalphaֵ������ֵ�ı�����
//	g_dBetaValue = (1.0 - g_dAlphaValue);
//	//betaֵΪ1-alphaֵ
//
//	//����alpha��betaֵ�������Ի��
//	addWeighted(g_srcImage1, g_dAlphaValue, g_srcImage2, g_dBetaValue, 0.0, g_dstImage);
//
//	//��ʾ
//	imshow(WINDOW_NAME, g_dstImage);
//	
//}
//
//int main(int argc,char** argv) {
//	//����ͼƬ������ͼƬ��СҪһ��
//	g_srcImage1 = imread("1.jpg");
//	g_srcImage2 = imread("2.jpg");
//	if (!g_srcImage1.data){
//		printf("��ȡ��һ��ͼƬʧ�ܣ���ȷ��Ŀ¼���Ƿ���imread����ָ����ͼƬ����!\n");
//		return -1;
//	}
//	if (!g_srcImage2.data) {
//		printf("��ȡ�ڶ���ͼƬʧ�ܣ���ȷ��Ŀ¼���Ƿ���imread����ָ����ͼƬ����!\n");
//		return -1;
//	}
//
//	//���û�������ʼֵΪ70
//	g_nAlphaValueSlider = 70;
//
//	//��������
//	namedWindow(WINDOW_NAME, 1);
//
//	//�ڴ����Ĵ����д���һ���������ؼ�
//	char TrackbarName[50];
//	sprintf(TrackbarName, "͸��ֵ %d", g_nMaxAlphaValue);
//
//	createTrackbar(TrackbarName, WINDOW_NAME, &g_nAlphaValueSlider, g_nMaxAlphaValue, on_Trackbar);
//	//��һ���켣�����֣������������֣�����int*���͵�ָ�룬��ʾ�����λ�ã���ǰ��ֵ
//	//�ģ���ʾ�������ֵ���壺�ص�����������λ�øı�ʱ�������лص���
//	//�����û������ص����������ݣ�������������ȫ�ֱ������������Բ������á�
//	
//	//�ص�������ʾ���
//	on_Trackbar(g_nAlphaValueSlider, 0);
//
//	waitKey(0);
//
//	return 0;
//}