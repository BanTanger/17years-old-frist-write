#define _CRT_SECURE_NO_WARNINGS 1
//void main() 
//{
//	printf("This is a c program.\n");
//}


//void main()
//{
//	printf("***************************************************\n");
//	printf("                     Very good!                    \n");
//	printf("***************************************************\n");
//}

//=============��ӡ������==============
//int main()
//{
//	int n;
//	int i, a, b;
//	printf("����������>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (a = 1; a <= 2 * i - 1; a++)
//		{
//			printf("*");
//		}
//		for (b = 1; b <= i; b++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//==========��ӡ������==========
//int main()
//{
//	int line=0;
//	printf("����������");
//	scanf("%d", &line);
//	int i=0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�1
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//============��ֵ============
//int Del(int x, int y)
//{
//    int z =0;
//    if (x < y)
//    {
//        z = y - x;
//    }
//    else
//    {
//        z = x - y;
//    }
//    return z;
//}
//
//void main() 
//{
//    int a, b;
//    //double cc;
//
//    a = 123; b = 456;
//    int del = Del(a, b);
//    
//    printf("del = %d",del);
//}
// 
// ====================��===================
//void main() 
//{
//    int a, b, sum;
//    //double cc;
//
//    a = 123; b = 456;
//    sum = a + b;
//    printf("sum = %d", sum);
//}


#include <stdio.h>
//void main() {
//    int max(int x, int y);
//    int a, b, c;
//
//    printf("input a & b:");
//    scanf(" %d%d", &a, &b);
//
//    c = max(a, b);
//
//    printf("max = %d\n",c);
//}
//
//int max(int x, int y) {
//    int z;
//
//    if (x > y)  			//��4��
//        z = x;    	//��5��
//    else 			//��6��
//        z = y;     	//��7��
//
//    return (z);
//}
