#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"ͨѶ¼.h"
#include<string.h>
void menu()
{
	printf("******************************\n");
	printf("***** 1.add      2.del   *****\n");
	printf("***** 3.search   4.modify*****\n");
	printf("***** 5.show     6.sort  *****\n");
	printf("***** 0.exit             *****\n");
	printf("******************************\n");
}

int main()
{
	int input = 0;
	struct Contact con;//con����ͨѶ¼���������1000��Ԫ�ص����͵�ǰ��ŵ�ֵ
	
	//ͨ��һ���ṹ������װ�������Ʊ���
	//int size = 0;
	//struct PeoInfo con[MAX];//���һǧ�˵ĸ�����Ϣ
	
    InitContact(&con);//����ַЧ�ʸߣ����Һ�����ֵ��Ҫͨ������ַ��Ӱ����������
	
//����ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);//&con����ͨѶ¼�ĵ�ַ
			break;
		case DEL:
			DelContact(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n"); 
			break;
		}
	} while (input);
	return 0;
}