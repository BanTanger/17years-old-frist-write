#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




////=======�ṹ��======
//int main()
//{
//	//��ַ���迪�ٿռ䡣���ܲ����½���
//	return 0;
//}


//==============a��b�η�=============
//double pow(int a, int b)
//{
//	if (b < 0)
//		return (1.0 / pow(a, -b));
//	else if (b == 0)
//		return 1;
//	else
//		return a * pow(a, b - 1);
//}
//
//int main()
//{
//	int a = 0.0;
//	int b = 0.0;
//	scanf("%d%d", &a,&b);
//	double ret = pow(a,b);
//	printf("ret = %lf\n ", ret);
//	return 0;
//}

//==========ÿλ�����==========
//int DigitSum(unsigned int a)
//{
//	if (a > 9)
//		return DigitSum(a / 10) + a % 10;
//	else
//		return a;
//}
//
//int main()
//{
//	 unsigned int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n ", ret);
//	return 0;
//}

//======�Զ���˷��ھ�====
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			printf("%d*%d=%d\t", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//
//}