#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 81
//=============gets�������÷�============

//int main()
//{
//	char name[MAX];
//	char* ptr;
//
//	printf("���������֣�");
//	ptr = gets(name);//ָ�����get��ֵ����������
//	printf("%s? ah! %s", name, ptr);
//	return 0;
//}

//=============fgets�������÷�============
int main()
{
	char name[MAX];
	char* ptr;

	printf("���������֣�");
	ptr = fgets(name,MAX,stdin);//ָ�����fget��ֵ��
	//�ڶ������������С�����������������ȡ�ĸ��ļ�
	printf("%s? ah! %s", name, ptr);
	return 0;
}

