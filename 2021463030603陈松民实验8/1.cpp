//#define _CRT_SECURE_NO_WARNINGS 1
///*��дC���Դ��룬ʵ�����¹��ܣ�
//����ƽ����������P1(x1,y1)��P2(x2,y2)�����꣬
//����������Ϊ���ϽǺ����½ǿ���ȷ��һ�����Σ�
//���������ε��ܳ���Ҫ��ƽ���ϵ������;��ζ��ýṹ������ʾ��
//*/
//
//#include<stdio.h>
//#include<cmath>
//struct Point {
//	int x;
//	int y;
//};
//struct Rectangle {
//	int width;
//	int length;
//};
//int main() {
//	struct Point P1;
//	struct Point P2;//�ṹ�������������
//	printf("����P1,P2��X,Y����\n");
//	scanf("%d%d%d%d", &P1.x, &P1.y, &P2.x, &P2.y);
//	struct Rectangle p;//���ζ���
//	p.length = abs(P1.x - P2.x);
//	p.width = abs(P1.y - P2.y);
//	int Perimeter = 2 * (p.width + p.length);
//	printf("%d\n", Perimeter);
//}