#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//=======ָ������==========
//int main()
//{
//	//���ָ�������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int arr[10];
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//
//	return 0;
//}

//========����ָ��==========
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i=0; i < 10; i++)
//	{
//		printf("%p =============== %p\n",p+i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//1.&arr��&����������ʱ��ʾ��������ĵ�ַ��
//	//2.sizeof(arr),sizeof(������)����ʱ��ʾ���������С��
//	return 0;
//}

//===========ָ��ʵ�ֹ������============
//int main()
//{
//	float values[5];
//	float* vp;
//	for (vp = &values[5]; vp > &values[5];)
//	{
//		*--vp = 0;
//	}
//
//	for (vp = &values[5]; vp >= &values[5]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}

//=========My strlen=============
//int My_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		(end++);
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = My_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",* p);
//		p = p + 1;
//	}
//	return 0;
//}

//==========================Ұָ��===============================
//int main()
//{
//	int* p;//�ֲ�����û�г�ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;//�ֲ�ָ���������ʼ�����ֵ
//	return 0;
//}

//==============ָ��Խ��===================

//int main()
//{
//	int a[10] = { 0 };
//	int* p = a;
//	int i = 0;
//	for (; i < 12; i++)
//	{
//		*(p + i) = 1;
//	}
//}

//================ָ��ָ��Ŀռ��ͷ�================
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	pa = NULL;//NULL������ʼ��ָ�룬��ָ�븳ֵ��
//	pa = 20;
//	if (pa != NULL)
//	{
//
//	}
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}