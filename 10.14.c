#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TSIZE 45

//struct film {
//	char title[TSIZE];
//	int razing;
//	struct film* next;
//};
//int main()
//{
//	struct film* head = NULL;
//	struct film* prev = 0,*current = 0;
//	char input[TSIZE];
//	//�ռ���Ϣ
//	puts("Enter first name title:");
//	while (gets(input) != NULL && input[0] != '\0')
//	{
//		current = (struct film*)malloc(sizeof(struct film));
//		if (head == NULL)
//			head = current;
//		else
//			prev->next = current;
//		current->next = NULL;
//		strcpy(current->title, input);
//		puts("Enter your rating <0-10>:");
//		scanf("%d", &current->razing);
//		while (getchar() != '\n')
//			continue;//��\n���ߡ������ܽ�����һ��ѭ����
//		puts("Enter next movie title(empty line to stop):");
//		prev = current;
//	}
//	if (head == NULL)
//		printf("No data entered.");
//	else
//		printf("Here is the movie list:\n");
//	current = head;
//	while (current != NULL)
//	{
//		printf("Movie:%s Rating:%d\n", current->title, current->razing);
//		current = current->next;
//		//˫ָ��
//	}
//	//�ڴ��ͷ�
//	current = head;
//	while (current != NULL)
//	{
//		free(current);
//		current = current->next;
//	}
//	printf("Bye!\n");
//
//	return 0;
//}

