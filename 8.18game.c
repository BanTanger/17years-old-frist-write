#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void game()
{
	int ret = 0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//���� ѭ��
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = iswin(board,ROW��COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = iswin(board, ROW��COL);
		if (ret != 'c')
		{
			printf("����Ӯ\n");
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret = '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n")��
	}
}

void menu()
{
	printf("*************�˵�************\n");
	printf("*****  1.play   0.exit  *****\n");
	printf("*****************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("������ѡ��1/0��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ��������\n");
			game();
			break;
		case 0:
			printf("�����˳���Ϸ\n");
			break;
		default:
			printf("�������ֵ�����ϲ˵����ṩ��������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}