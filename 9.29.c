#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//double check1(double x);
//int main()
//{
//	double input = 0.0;
//	printf("��������ֵ:>");
//	scanf("%lf", &input);
//	double ret = check1(input);
//	printf("ʵ�ʸ���w=%lf\n", ret);
//	return 0;
//}
//double check1(double x)
//{
//	double y = 0.00;
//	if (x < 1600)
//	{
//		y = 0.00;
//	}
//	else if (x < 3200)
//	{
//		y = 0.15;
//	}
//	return (x * (1 - y));
//}

/*int main()
{
	int input = 0;
	printf("��������ֵ:>");
	scanf("%d", &input);
	double ret = check((double)input);
	printf("ʵ�ʸ���w=%f\n", ret);
	return 0;
}
int check(double x)
{
	double y = 0.00;
	if (x < 1600)
	{
		y = 0.00;
	}
	else if (x < 3200)
	{
		y = 0.15;
	}
	return (double)(x * (1 - y));

}*/

//main()
//{
//	int x = 0;
//	int y = 0;
//	printf("������x��ֵ:>");
//	scanf("%d", &x);
//	if (x < 1)
//		y = x;
//	else if (1 <= x <= 10)
//		y = 2 * x - 1;
//	else if (x > 10)
//		y = 3 * x - 1;
//	printf("y=%d", y);
//}

//struct Peo
//{
//	char sex;
//	int tall;	
//	int age;
//	double weight;
//}s;
//
//void menu()
//{
//	printf("************************************************\n");
//	printf("******        1.��          2.Ů          ******\n");
//	printf("************************************************\n");
//}
//
//main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("�������Ա�:>");
//		scanf("%d", &s.sex);
//		printf("����������:>");
//		scanf("%d", &s.age);
//		printf("���������:>");
//		scanf("%d", &s.tall);
//		printf("����������:>");
//		scanf("%lf", &s.weight);
//	} while (input);
//	
//	//�ж���Ů
//	if (s.sex==1)
//	{
//		if (s.tall > 170 && s.weight > 60.0)
//		{
//			printf("��ϲ��������˾¼ȡ��\n");
//			if (18 < s.age < 24)
//			{
//				printf("������˾����Ϊ����ҵ��Ա��\n");
//			}
//			else if (s.age > 24)
//			{
//				printf("������˾����Ϊ�ۺ������Ա��\n");
//			}
//		}
//		else
//		{
//			printf("��û�б���ѡ��\n");
//		}
//	}
//	else if (s.sex == 2)
//	{
//		if (s.tall > 160 && s.weight > 45.0)
//		{
//			printf("��ϲ��������˾¼ȡ��\n");
//			if (18 < s.age < 24)
//			{
//				printf("������˾����Ϊ����ҵ��Ա��\n");
//			}
//			else if (s.age > 24)
//			{
//				printf("������˾����Ϊ�ۺ������Ա��\n");
//			}
//		}
//		else
//		{
//			printf("��û�б���ѡ��\n");
//		}
//	}
//	
//}

//void menu()
//{
//	printf("=========�����Զ�������=======\n");
//	printf("        1 - ƻ��֭   6Ԫ      \n");
//	printf("        2 - ����֭   5Ԫ      \n");
//	printf("        3 - ����֭   4Ԫ      \n");
//	printf("        4 - ����     3Ԫ      \n");
//	printf("        5 - ѩ��     2Ԫ      \n");
//	printf("        0 - �˳�              \n");
//	printf("==============================\n");
//}
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	do
//	{
//		menu();
//		printf("���������ϱ�ź�����:>");
//		scanf("%d%d", &input1, &input2);
//		switch (input1)
//		{
//			case 1:
//				printf("ѡ��ƻ��֭��\n");
//				printf("�㱾�ι���%d���ϣ���Ҫ֧��%dԪ\n", input2, 6 * input2);
//				break;
//			case 2:
//				printf("ѡ������֭��\n");
//				printf("�㱾�ι���%d���ϣ���Ҫ֧��%dԪ\n", input2, 5 * input2);
//				break;
//			case 3:
//				printf("ѡ������֭��\n");
//				printf("�㱾�ι���%d���ϣ���Ҫ֧��%dԪ\n", input2, 4 * input2);
//				break;
//			case 4:
//				printf("ѡ����֣�\n");
//				printf("�㱾�ι���%d���ϣ���Ҫ֧��%dԪ\n", input2, 3 * input2);
//				break;
//			case 5:
//				printf("ѡ��ѩ�̣�\n");
//				printf("�㱾�ι���%d���ϣ���Ҫ֧��%dԪ\n", input2, 2 * input2);
//				break;
//			case 0:
//				printf("ѡ�����\n");
//				break;
//			default:
//				printf("�����������������\n");
//				break;
//		}
//	} while (input1);
//	return 0;
//}

void menu()
{
	printf("===============================\n");
	printf("===          ֵ�ձ�         ===\n");
	printf("===============================\n");
}
int main()
{
	int input = 0;
	do
	{
		//menu();
		printf("����������1-7:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			printf("������һ������ֵ��\n");
			break;
		case 2:
			printf("�����ܶ���С��ֵ��\n");
			break;
		case 3:
			printf("��������������ֵ��\n");
			break;
		case 4:
			printf("�������ģ���Ǯֵ��\n");
			break;
		case 5:
			printf("�������壬С��ֵ��\n");
			break;
		case 6:
			printf("����������С��ֵ��\n");
			break;
		case 7:
			printf("�������գ�����ֵ��\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}