#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//=====��ӡ�����Ԫ��====
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//==============������������λ��ż��λ��ͳ��=============
//void print(int a)
//{
//	int i = 0;
//	printf("����λ��>\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��>\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//==============����Ѱ�Ҷ����Ʋ�ͬ��λ==============
//======��^�������������======
//int Count2(int m, int n)
//{
//	int tmp = m ^ n;
//	return Count(tmp);
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = Count2(m,n);
//	printf("%d\n", count);
//	return 0;
//}
//
//int Count(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a &(a - 1);
//		count++;
//	}
//	return count;
//}
// 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = Count(a);
//	printf("%d\n", count);
//	return 0;
//}
