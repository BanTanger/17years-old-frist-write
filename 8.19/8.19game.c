#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
void game()
{
	//�׵���Ϣ�洢
	//1.���úõ�
	char board[ROWS][COLS] = { 0 };
	//2.�Ų�����ģ�Ҫչʾ�ģ�
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	initboard(board,ROWS,COLS,'0');
	initboard(show,ROWS,COLS,'*');
	//��ӡ����
	//Displayboard(board, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	setboard(board, ROW, COL);
	/*Displayboard(board, ROW, COL)*/;
	//ɨ��
	find(board,show,ROW,COL);//��board.show,row,col���ݹ�ȥ
}
void menu()
{
	printf("****************************\n");
	printf("********   1.play   ********\n");
	printf("********   0.exit   ********\n");
	printf("****************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����Ƿ�\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
