#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("����ɵ��\n");
//	}
//		return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i = 5)
//			printf("wdnmd\n");
//		printf("%d ", i);
//	}
//	return 0;
//}

/*int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i = 5)
			printf("wdnmd\n");
		printf("%d ", i);
	}
	return 0;
}*/


/*int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;
		printf("%d ", i);
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			break;
		printf("%d ", i);
	}
}*/

/*int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{

		printf("%d ", i);
	}
}*/

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < 'a' || ch>'z')
//		   continue;
//		ch = ch - 32;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		 continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	char password[20] = { 0 };
	printf("����������:>\n");
	scanf("%s", password);//�������룬�������password��������
	while ((ch = getchar()) != '\n');
	printf("��ȷ�ϣ�Y/N��:>");
	ch = getchar();
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
		return 0;
}

// int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>\n");
//	scanf("%s", password);//�������룬�������password��������
//	getchar();
//	printf("��ȷ�ϣ�Y/N��:>");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//		return 0;
//}