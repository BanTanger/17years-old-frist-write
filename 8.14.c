#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int get_max(int x, int y)
{//����д��󣬺����в����ô�ӡ����ʾ
	if (x > y)
		return x;
	else
		return y;
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("%d\n", max);
	return 0;
}
// 
// int get_max(int x, int y)
//{//����д��󣬺����в����ô�ӡ����ʾ
//	if (x > y)
//	{
//		printf("%d\n", x);
//	}
//	else
//		printf("%d\n", y);
//	if (x == y)
//	{
//		printf("�����������ֵ��ȣ��޷��Ƚ�\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	get_max(a, b);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, '*', 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//=======================strcpy==============================
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//=======================��ͺ���=============================
//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//==========================�Զ��ػ�����==============================
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	system("shutdown -s -t 60");
//  again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	printf("�ػ�������ȡ���������������˸��㷢�ĳ���Ӧ��\n");
//		return 0;
//}

//=======================gotoѭ��=========================
//int main()
//{
//again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}

//=======================������Ϸ=========================
//void menu()
//{
//	printf("******************************************\n");
//	printf("** To Choose:>  1.play  0.exit     *******\n");
//	printf("******************************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100+1;//����1��100֮����������ȡģ��
//	//printf("%d\n",ret);
//	//�����֣�ѭ���²⣩
//	while (1)
//	{
//		printf("�������(��1��100֮��):>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));//NULL��ָ�룬����Ҫ�����κ�һ��ֵʱʹ��
//	//ʱ���
//	//�����Ҫ�������������棬���ŵ��Զ���game�������򲻹����
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��0/1>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (b=1; b <= 9; b++){
//		//��1��ʼ����ӡ9��
//		for (a = 1; a <= b; a++){
//	printf("%d*%d=%d\t", a, b, a * b);
//		}
//		printf("\n");
//    }
//	return 0;
//}

//int main()//===================�д���==================
//{
//	int i = 0; int j = 0;
//	for (i = 1, j = 1; i <= 9&& j <= 9; i++, j++)
//	{	
//		if (i == j)
//		{
//			printf("%d*%d", i, j);
//			j++;
//		}
//		 if (i < j)
//		{	
//			printf("\n%d*%d ",i,j);
//			i++;
//		}
//	}
//	return 0;
//}

//==================Ѱ�����ֵ(������)=====================
//int main()
//{
//	int i = 0;
//	int arr[] = { -1,-5,6,-2,-7,10,8 };
//	int sz = strlen(arr);
//	int max = arr[0];//���������һ���±�Ϊ���
//	//������ͨ����ֵ���ϸ�����ѭ���Ƚ�max��������ÿһ��Ԫ�صĴ�С
//	for (i = 1; i <= sz; i++)
//	{	
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//==================�������=======================
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}

//==================Ѱ�ҳ���9������=======================
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (; i <= 100; i++)
//	{
//		//if ((i % 10 == 9) || (i / 10 == 9))
//			//����������⣬���ʽ��ʾΪif  - else if
//			//99�У�����������9���֣�����Ҫ�ظ�����
//			//9,19,29,39....89,99 - 10��
//			//90,91,92.....98,99 - 10��
//			//�õ��Ľ��Ӧ����10+10.
//			//��ȷ���Ӧ��д�������е�if
//		if(i%10==9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//		//����ż����i=101;i<=200;i+=2
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//			//������j<=i/2   sqrt(i)<i/2
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{	
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}