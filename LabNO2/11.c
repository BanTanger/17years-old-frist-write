//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdbool.h>
//#define ROW 20
//#define COL 20
//char s[100], num = 0;
////void InitBoard(char Board[ROW][COL],int a,int b)
////{
////	//��һȦ
////	for (int i = 0; i < a+2; i++)
////	{
////		for (int j = 0; j < b+2; j++)
////		{
////			Board[i][j] = 0;//��ʼ����
////		}
////	}
////	for (int i = 1; i <= a; i++)
////	{
////		for (int j = 1; j <= b; j++)
////		{
////			scanf("%d", &Board[i][j]);
////		}
////	}
////
////	//========���÷�=======
////	//for (int i = 0; i < a; ++i)
////	//{
////	//	for (int j = 0; j < b; ++j)
////	//	{
////	//		//��ʼ��
////	//		Board[i][j] = 1;
////	//	}
////	//}
////	//for (int i = 0; i < a; ++i)
////	//{
////	//	gets(s);
////	//	for (int j = 0; j < b; ++j)
////	//	{
////	//		if (s[j] == '0')
////	//			Board[i][j] = 0;
////	//	}
////	//}
////
////	//����
////	printf("\n");
////	for (int i = 1; i <= a; i++)
////	{
////		for (int j = 1; j <= b; j++)
////		{
////			/*scanf("%d", &Board[i][j]);*/
////			printf("%d ", Board[i][j]);
////		}
////		printf("\n");
////	}
////}
//char Board[ROW][COL];
//int a, b;
//int ans = 0;
//int i, j;
//bool newBoard[ROW][COL];
//int Bool_CheckBoard(int x,int y,int tmp)
//{
//	if (x > a || x < 1 || y > b || y < 1 || (Board[x][y] == '0'))return;//�쳣����׳�
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			newBoard[i][j] = '0';//��ʼ����
//		}
//	}
//	if (Board[x][y] != tmp)
//		newBoard[x][y] = 0;
//	else
//		newBoard[x][y] = 1;
//	Board[x][y] = '0';//�Ѿ��ں�������ǰ�����ϸ����
//	Bool_CheckBoard(x + 1, y,tmp);
//	Bool_CheckBoard(x, y + 1,tmp);
//	Bool_CheckBoard(x - 1, y,tmp);
//	Bool_CheckBoard(x, y - 1,tmp);
//	if (newBoard[x][y] == 1)
//		ans++;
//}
//int main()
//{
//	scanf("%d%d", &a, &b);
//	char Board[ROW][COL] = { 0 };
//	//InitBoard(Board,a,b);
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= b; j++)
//			scanf("%s", &Board[i][j]);
//	}
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= b; j++)
//		{
//			if (Board[i][j] != '0')
//			{
//				int tmp = Board[i][j];//��ʱ����ȥ�洢�����ֵ
//				Bool_CheckBoard(i,j,tmp);
//			}
//		}
//	}
//	printf("%d", ans);
//	/*PrintBoard();*/
//}