//#define _CRT_SECURE_NO_WARNINGS 1
//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBXS 2//5����
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	int A = *(int*)a;
//	int B = *(int*)b;
//	return A - B;
//}
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
//	for (count = 0; count < MAXBXS && library[count].title[0] != '\0'; count++)
//	{
//		scanf("%s%s%d%d"
//			, library[count].title
//			, library[count].author
//			, &library[count].num
//			, &library[count].date);
//		while (getchar() != '\n')
//			continue;//���������
//	}
//	//�����鱾
//		printf("\n\nAfter Order\n");
//		//������Ч����֪Ϊ��
//		/*qsort(library->title, MAXBXS, sizeof(char), compare);*/
//		char temp[10] = { 0 };
//		for (index = 0; index < count; index++)
//		{
//			if (strcmp(library[index].title, library[index + 1].title) > 0)
//			{
//				strcpy(temp, library[index].title);
//				strcpy(library[index].title, library[index + 1].title);
//				strcpy(library[index + 1].title, temp);
//			}
//		}
//		for (index = 0; index < count; index++)
//		{
//			printf("%-4s %5s %8d %6d\n",
//				library[index].title,
//				library[index].author,
//				library[index].num,
//				library[index].date);
//		}
//		char title[20];
//		int tmp = 0;//�������������֪�������ѭ���ڱ�������������
//		scanf("%s", title);
//		for (index = 0; index < count; index++)
//		{
//			if (strcmp(title, library[index].title) == 0)
//			{
//				printf("%-4s %5s %8d %6d\n",
//					library[index].title,
//					library[index].author,
//					library[index].num,
//					library[index].date);
//				break;
//			}
//			tmp++;
//		}
//		if (tmp == MAXBXS)
//			printf("�Ҳ�����\n");
//	return 0;
//}
//
//
