//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int n = 1000;
//float x,S = 0.0;
//float func(float A,float B,float (*fun)(float x))
//{
//	float SumS = 0.0;
//	float num = (B - A) / n;//���䶨�������
//	x = A;//����x��
//	A = (*fun)(x);//�ϵ׳���
//	for (int i = 1; i <= n; i++)
//	{
//		x += num;//������
//		B = (*fun)(x);
//		S = (A + B)*num / 2;
//		A = B;//ѭ��ʵ�ֵױ�ת����������һ�����
//		SumS += S;
//	}
//	return (SumS);
//}
//float fun(float x)
//{
//	float y = x * x * x + x * x + x + 1;
//	return y;
//}
//int main()
//{
//	float A, B ;
//	scanf("%f%f", &A, &B);
//	float SumS = func(A,B,fun);
//	printf("%f", SumS);
//	return 0;
//}