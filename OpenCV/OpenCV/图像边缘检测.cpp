//#include<opencv2/opencv.hpp>
//#include<opencv2/imgproc/imgproc.hpp>
//#include<opencv2\core\core.hpp>
//#include<opencv2\highgui\highgui.hpp>//��������ģ��ͷ�ļ�
//using namespace cv;
//
//int main() {
//	//0.����ԭʼͼ
//	Mat srcImage = imread("1.jpg");//����Ŀ¼�����һ��1.jpg��ͼƬ
//	imshow("��ԭʼͼ��Canny��Ե���",srcImage);
//	Mat dstImage, edge, grayImage;
//
//	//1.������srcͬ���ͺʹ�С�ľ���dst��
//	dstImage.create(srcImage.size(), srcImage.type());
//
//	//2.��ԭͼ��װ���ɻҶ�ͼ��
//	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
//	
//	//3.ʹ��3*3�ں˽���
//	blur(grayImage, edge, Size(4, 4));
//
//	//4.����Canny����
//	Canny(edge, edge, 3, 9, 3);
//
//	//5.��ʾЧ��ͼ
//	imshow("��Ч��ͼ��Canny��Ե�����", edge);
//
//	waitKey(0);
//
//	return 0;
//}