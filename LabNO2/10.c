#define _CRT_SECURE_NO_WARNINGS 1
//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBXS 5//5����
#include<stdio.h>
//struct book {
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	int num;
//	int date;
//};
//int main()
//{
//	struct book library[MAXBXS];//book���͵�����
//	int count = 0;
//	int index;//�±�
//
//	//�����鱾
//	while (count < MAXBXS && gets(library[count++].title) != NULL 
//						  &&library[count].title[0]!='\0')
//	{
//		scanf("%5s", &library[count].author);
//		scanf("%5f", &library[count].num);
//		scanf("%5f", &library[count].date);
//		while (getchar() != '\n')
//			continue;//���������
//	}
//	//�����鱾
//	if (count > 0)
//	{
//		printf("here is the list of your books :\n");
//		for (index = 0; index < count; index++)
//			printf("%s %5s %5d %3d\n",
//				library[index].title,
//				library[index].author,
//				library[index].num,
//				library[index].date);
//	}
//	else
//		printf("�޴���\n");
//	return 0;
//}

//======================�ṹ������=======================
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBXS 2//һ�ٱ���
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
int main()
{
	struct book library[MAXBXS];//book���͵�����
	int count = 0;

	//�����鱾
	printf("please enter thet book title.\n");
	printf("press [enter] at the start of a line to stop.\n");
	printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
	for (int i = 0; i < ps->size; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
	//�����鱾
	if (count > 0)
	{
		printf("here is the list of your books :\n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n",
				library[index].title,
				library[index].author,
				library[index].value);
	}
	else
		printf("no book? too bad.\n");
	return 0;
}
