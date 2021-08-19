#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void initboard(char board[ROW][COL], int row, int col,int set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row;i++)//���ٳ�����������11*11��������Ҫ9*9�����±�1��ʼ��ӡ����row(�±�9)���ոպ���9*9
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setboard(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//'3'-'0'=3
int get(char board[ROWS][COLS], int x, int y)
{
	//ͳ��xy��Χ�˸���ӵĽ��
	return board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y - 1] - '0' * 8;
}
//void zk(char board[ROW][COL],int x,int y)
//{
//	if (board[x][y] == '0')
//	{
//		board[x][y] = ' ';
//		board[x - 1][y];
//		board[x - 1][y - 1];
//		board[x][y - 1];
//		board[x + 1][y - 1];
//		board[x + 1][y];
//		board[x + 1][y + 1];
//		board[x][y + 1];
//		board[x - 1][y - 1];
//	}
//
//}
void find(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//��ʤ����
	while (1)
	{
		printf("����������\n");
		scanf("%d%d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//�ж� 1.�ף�gameover.2.ͳ��
			if (board[x][y] == '1')
			{
				printf("GAMEOVER!\n");
				Displayboard(board, ROW, COL);
				break;
			}
			else
			{
				//���㣬xy������Χ�м����ף�
				int count = get(board,x,y);
				show[x][y] = count + '0';//������ת�����ַ�
				zk(board,x,y);
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�!\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		Displayboard(board, ROW, COL);
	}
}