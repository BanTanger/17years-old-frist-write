#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//======ָ��ʵ���жϴ�С��===
//int cleck()
//{
//	int a = 1;
//   return *(char*)&a;
//   //ȡ��a�ĵ�ַ��Ȼ����ǿ������ת����char
//   //����4���ֽڱ��1���ֽڣ��Ϳ����жϴ�С�ˡ�
//}
//int main()
//{
//	int a;
//	int ret = cleck();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else if (ret == 0)
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//======������ʵ���жϴ�С��=====
//int cleck()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a;
//	int ret = cleck();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else if (ret == 0)
//	{
//		printf("���\n");
//	}
//	return 0;
//}