#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define SIZE 30
#define BUGSIZE 13

//==========strcat ���������ַ���============
//int main()
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes";
//
//	puts("what is you favorite flower?");
//	int gets(flower);
//	strcat(flower, addon);
//	puts(flower);
//	puts(addon);
//
//	return 0;
//}
//
// ================strncat �������÷�================= 
// int main()
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes";
//	char bug[BUGSIZE];
//	int available;
//
//	puts("what is you favorite flower?");
//	gets(flower);
//	if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
//		strcat(flower, addon);
//	puts(flower);
//	puts("what is you favorite bug");
//	gets(bug);
//	available = BUGSIZE - strlen(bug) - 1;
//	//���崫�ݲ����Ĵ�С��Ҳ���Ƕ����ַ��ܱ���ʾ
//	strncat(bug, addon, available);
//	puts(bug);
//
//	return 0;
//}

//================strcmp===============
//#define ANSWER "grant"
//#define MAX 40
//int main()
//{
//	char try[MAX];
//
//	puts("who is buried in grant's tomb");
//	gets(try);
//	while (!strcmp(try, ANSWER))
//	{
//		puts("no,that's wrong. try again");
//		gets(try);
//	}
//	puts("that's right!");
//	return 0;
//}

//===========strncmp ������"astro"��ͷ���ַ���============
//#define LIMIT 5
//int main()
//{
//	char* list[LIMIT] = {
//		"astronomy","astounding",
//		"astrophysics","ostracise",
//		"asterism"};
//   //======ָ�����飬��Ҫ�����ڲ˵��Ĳ��ң���Ŷ���ַ�����====
//	int count = 0;
//	int i = 0;
//
//	for (i = 0; i < LIMIT; i++)
//	{
//		if (strncmp(list[i], "astro", 5))
//		{
//			printf("found:%s\n", list[i]);
//				count++;
//		}
//	}
//	printf("the list contained %d words beginning"
//		"with astro.\n", count);
//	return 0;
//}

//int main()
//{
//	char note[] = "see you at the snack bar";
//	char* ptr;
//
//	ptr = note;
//	puts(ptr);
//	puts(++ptr);
//	note[7] = '\0';
//	puts(note);
//	puts(++ptr);//�ϴ�ָ���һ��û�б����������ָ���˵ڶ���e
//}

//==============ָ��������ӡ�ַ���===========
//int main()
//{
//	char food[] = "yummy";
//	char* ptr;
//
//	ptr = food + strlen(food);
//	while (--ptr >= food)
//		puts(ptr);
//	return 0;
//}

//==========static��̬�����������ӳ��ֲ��������������ڣ����м�����==========
void trystat(void);
int main()
{
	int count = 0;
	for (count = 1; count <= 3; count++)
	{
		printf("here comes iteration %d:\n", count);
		trystat();
	}
}
void trystat(void)
{
	int a = 1;
	static int b = 1;
	printf("a = %d,b = %d\n", a++, b++);
}