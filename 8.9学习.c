#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int day = 0;
//	(void)scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	return 0;
//}

/*int main()
{
	int day = 0;
	(void)scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}

	return 0;
}*/

//============��ϰ======����һ======
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		printf("%d\n",num);
//		num++;
//	}
//	if (num % 2 == 0)
//		printf("�����ֵΪż��:%d\n",num);
//	else
//		printf("�����ֵΪ����:%d\n",num);
//	return 0;

//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		/*if (num % 2 == 1)*/
//			printf("%d  ", num);
//		num+=2;
//	}
//	return 0;
//}
/*int main()
{
	int num = 1;
	while (num <= 100)
	{
		if (num % 2 == 1)
			printf("%d  ", num);
		num++;
	}
	return 0;
}*/
//}int main()
//{
//	int num = 0;
//	while (num < 100)
//	{
//		/*printf("%d\n", num);*/
//		num++;
//
//		if (num % 2 == 0)
//			/*printf("�����ֵΪż��:%d\n", num);*/
//			printf("\n");
//		else
//			printf("�����ֵΪ����:%d\n", num);
//	}
//	return 0;
//}



//int main()
//{
//	int num = 4;
//	if (num = 5)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	if (condition)
//	{
//		return x;
//	}
//	return y
//}
//
//int main()
//{
//	if (conditon)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//    else
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	if (age < 18)
//		printf("δ����\n");
//	//else if(18 <= age < 28)
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else if (age >= 90 && age < 100)
//		printf("�ϲ���\n");

	//else
	//	printf("����\n");
	/*return 0;*/
	
//int main()
//{
//	int age = 0;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	//else if(18 <= age < 28)
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//	}
//	//else
//	//	printf("����\n");
//	return 0;
//}
//}int main()
//{
//	int age = 0;
//	if (age < 18)
//		printf("δ����\n");
//	//else if(18 <= age < 28)
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//	}
//	//else
//	//	printf("����\n");
//	return 0;
//}

//int main()
//{
//	double b = 3.14;
//	double* pd = &b;
//	*pd = 5.5;
//	printf("%lf\n", b);
//	return 0;
//}


//==============================�ṹ�����=============================
//struct BOOK
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct BOOK bl = { "C���Գ������",55 };
//	struct BOOK* pb = &bl;
//	printf("����:%s\n",bl.name);
//	printf("�۸�:%d\n",bl.price);
//	//printf("%d\n", (*pb).price);
//	//printf("%s\n", (*pb).name);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	return 0;
//
//}
