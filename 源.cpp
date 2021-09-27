#define _CRT_SECURE_NO_WARNINGS 1
#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define MAX_SNAKE 100  //�ߵ�������

#undef UNICODE
#undef _UNICODE

#include<graphics.h>
#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include<mmsyscom.h>
#pragma comment(lib,"winmm.lib")


enum DIR //��ʾ�ߵķ���
{
	UP,
	DOWN,
	LEFT,
	RIGHT,
};

struct Snake//��
{
	int num;//����
	int dir;//����
	int score;//����
	int size;//����
	int speed;//�ٶ�
	POINT coor[MAX_SNAKE];
}snake;

struct Food//ʳ��
{
	POINT fd;
	int flag;
	DWORD color;//��ɫ[0-255]

}food;

void GameInit()//��ʼ��
{
	srand((unsigned int)time(NULL));

	//������
	snake.num = 3;
	snake.dir = RIGHT;
	snake.score = 0;
	snake.size = 10;
	snake.speed = 10;
	snake.coor[2].x = 0;//������β��
	snake.coor[2].y = 0;//��ʼ�������Ͻǵĳ���
	snake.coor[1].x = 0 + snake.size;
	snake.coor[1].y = 0;
	snake.coor[0].x = 0 + 2 * snake.size;//��ͷ
	snake.coor[0].y = 0;

	//����ʳ��
	food.fd.x = rand() % (WIN_WIDTH / 10) * 10;
	food.fd.x = rand() % (WIN_HEIGHT / 10) * 10;
	food.flag = 1;//��ʼ��ʳ�����
	food.color = RGB(rand() % 256, rand() % 256, rand() % 256);
}

void GameDraw()
{
	setbkcolor(RGB(105, 160, 141));
	cleardevice();//���Ԫ��

	//����
	setfillcolor(YELLOW);//��亯��
	//�����Σ�һ������
	int i = 0;
	for (i = 0; i < snake.num; i++)
	{
		setlinecolor(BLACK);
		fillrectangle(snake.coor[i].x,snake.coor[i].y,snake.coor[i].x + snake.size,snake.coor[i].y + snake.size);
		/*�� easyx �У�solidrectangle ����������ڻ��ޱ߿��������,��fillrectangle���ڻ��б߿��������
	void solidrectangle(int left,int top,int right,int bottom);
	void solidrectangle(������ x ����,	���ζ��� y ����,	�����Ҳ� x ����,	���εײ� y ����);
		*/
	}
	//��ʳ��
	if (food.flag == 1)//ͨ�������ɫ�ķ�ʽ��ʵ��ʳ�ﱻ�������ʧ���Ե���flag==0������䣩
	{
		setfillcolor(food.color);
		fillellipse(food.fd.x, food.fd.y, food.fd.x + 10, food.fd.y + 10);
	}
	//��ʾ����
	char tmp[20] = "";
	sprintf(tmp, "������%d", snake.score);
	//sprintf,ͨ�������������ϴ�ӡ��ֵ
	outtextxy(20, 20, tmp);
	//void outtextxy(int x, int y, LPCTSTR str);	// ��ָ��λ������ַ���

}

void KeyControl()
{
	if (GetAsyncKeyState(VK_UP) && snake.dir != DOWN)//���������ȷ���˲����Խ��з������
	{
		snake.dir = UP;
	}
	if (GetAsyncKeyState(VK_DOWN) && snake.dir != UP)
	{
		snake.dir = DOWN;
	}
	if (GetAsyncKeyState(VK_LEFT) && snake.dir != RIGHT)
	{
		snake.dir = LEFT;
	}
	if (GetAsyncKeyState(VK_RIGHT) && snake.dir != LEFT)
	{
		snake.dir = RIGHT;
	}

}


void GameInit();  //��ʼ����ϷԪ��
void GameDraw();  //����̰����
void SnakeMove();  // �����ߵ��ƶ�
void KeyControl();  //���Ʒ�����
void EatFood();  //��ʳ��
void DontEatSelf();  //��Ϸ�����ж�
void Pause();  //��Ϸ��ͣ

void main(void)
{
	initgraph(WIN_WIDTH, WIN_HEIGHT, SHOWCONSOLE);//��ʼ��һ��ͼ�δ���
	printf("\tWelcome! \n");
	printf("\tPlay Game Right Now��\n");
	GameInit();  //��ʼ����ϷԪ��

	mciSendString("open Carnival_De_Brazil.mp3 alias a", 0, 0, 0);
	mciSendString("play a repeat", 0, 0, 0);

	while (1)  //ʹ����ѭ������֤����һֱ����
	{
		SnakeMove();  //���ƶ�
		GameDraw();  //�ٻ���
		EatFood();
		KeyControl();
		DontEatSelf();
		Sleep(50);  //ÿ�ζ�Ҫ��������ӣ��ſ���ʵʱ�Ŀ��������������ٶ�̫���ˣ�û������
		//ͬ���������Ҳ���Գ�Ϊ������Ϸ�Ѷȵ�ѡ��
		//Pause();

	}

	getchar();//������ֹ ��Ϸ����һ������
	closegraph();  //�ر���Ϸͼ�δ���
}

void SnakeMove()
{
	/*Ҫ������ͷ���ƶ����ߵ�����������ͷһ���˶�������
	Ҫ�����һ�ڿ�ʼ�����ߵ�ÿһ�����嶼�����ƶ�����ǰһ�������λ����
	*/
	int i;
	for (i = snake.num - 1; i > 0; i--)  //��Ϊ�Ƕ�������в�������������Ҫ -1,����������i-- 
	{
		snake.coor[i].x = snake.coor[i - 1].x;
		snake.coor[i].y = snake.coor[i - 1].y;

	}
	switch (snake.dir)
	{
	case UP:snake.coor[0].y -= 10;
		/*
		����Ҫʵ�ֵ��ǿ����ڴ��ڴ����ɽ���
		��Ϊ��¼������ͷ������ߵ����꣬����������Ҫʹ��ͷ�ڽӴ�������(����ͷ���ұߣ��ͽ�������ı߽�
		��������Ҫ�и�+10������Ϊ��ȥ����ͷ����ĳ���
		*/
		if (snake.coor[0].y + 10 <= 0)
		{
			snake.coor[0].y = WIN_HEIGHT;
		}
		break;
	case DOWN:snake.coor[0].y += 10;
		if (snake.coor[0].y >= WIN_HEIGHT)
		{
			snake.coor[0].y = 0;
		}
		break;
	case LEFT:snake.coor[0].x -= 10;
		if (snake.coor[0].x + 10 <= 0)
		{
			snake.coor[0].x = WIN_WIDTH;
		}
		break;
	case RIGHT:snake.coor[0].x += 10;
		if (snake.coor[0].x >= WIN_WIDTH)
		{
			snake.coor[0].x = 0;
		}
		break;

	default:printf("��������������²�����");
		break;
	}
	//snake.coor[0].x += 10;

}
void EatFood()
{
	if (snake.coor[0].x == food.fd.x && snake.coor[0].y == food.fd.y && food.flag == 1)
	{
		snake.num++;
		snake.score += 10;
		food.flag = 0;
	}
	if (food.flag == 0)
	{
		food.fd.x = rand() % (WIN_WIDTH / 10) * 10;
		food.fd.y = rand() % (WIN_HEIGHT / 10) * 10;
		food.flag = 1;
		food.color = RGB(rand() % 256, rand() % 256, rand() % 256);
	}
}

void DontEatSelf()
{
	for (int i = 4; i < snake.num; i++)
	{
		if (snake.coor[0].x == snake.coor[i].x && snake.coor[0].y == snake.coor[i].y)
		{
			outtextxy(200, 200, "Game over!");
			_getch();  //����ͣ��
			exit(666);
		}

	}
}

void Pause()
{
	if (_getch() == 32)  //32��ʾ�ո�
	{
		//while (_getch() != ' ');
		while (1)
		{
			_getch();
		}
	}
}
