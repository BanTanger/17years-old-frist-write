#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
struct Node* head;

//void Insert(int x,int n);
struct Node* Insert(struct Node* head, int data);
void Print(struct Node* p);
void ReversePrint(struct Node* p);
void Delect(int n);
void Reverse();
int main()
{
	//int a, b, c;

	head = NULL;
	/*struct Node* head = NULL;*///�ֲ�����д��

	//printf("Please input want to change figure and position\n");
	//scanf("%d%d", &a, &b);
	//Insert(a,b);
	/*Insert(3,1);
	Insert(5,2);
	Insert(5,3);*/
	/*head = Insert(head, 2);
	head = Insert(head, 4);
	head = Insert(head, 6);
	head = Insert(head, 8);*/

	/*Print(head);
	ReversePrint(head);*/

	//scanf("%d", &c);
	//Delect(c);
	
	//Reverse();
	//Print();
	return 0;
}
//void Insert(int x,int n)
//{
//	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
//	temp1->data = x;
//	temp1->next = NULL;
//	if (n == 1)//�ձ����ã�headΪNULL
//	{
//		temp1->next = head;
//		head = temp1;
//		return;
//	}
//	struct Node* temp2 = head;//�����ڶ����ṹ�����������λ�ͱ�������
//	for (int i = 0; i < n - 2; i++)//��λ����Ҫ�����λ�õ�ǰһ����
//		temp2 = temp2->next;//ָ��ǰ��������
//	temp1->next = temp2->next;//temp1��Ҫ�����Ԫ�أ�
//	temp2->next = temp1;
//}
//void Print()
//{
//	struct Node* temp1 = head;
//	while (temp1 != NULL)
//	{
//		printf("%d ", temp1->data);
//		temp1 = temp1->next;
//	}
//	printf("\n");
//}

//=============�ݹ�============
void Print(struct Node* p)//���δ����ǵ�ַ
{
	if (p == NULL) //�˳�����
	{
		printf("\n");
		return;
	}
	printf("%d ",p->data);
	Print(p->next);//�ݹ鴫��ַ
}
void Reverse(struct Node* p)
{
	if (p->next = NULL)//�˳�����
	{
		head = p;
		return;
	}
	Reverse(p->next);
	//ͨ���ͷŵݹ鲻�ϸ���NULL��ָ�������λ�á�
	struct Node* q = p->next;
	q->next = p;
	//���ٱ�����һ���Ѷ�д����
	p->next->next = p;
	p->next = NULL;
}

//void ReversePrint(struct Node* p)
//{
//	if (p == NULL)
//	{
//		printf("\n");
//		return;
//	}
//	ReversePrint(p->next);
//	printf("%d ", p->data);
//}
//struct Node* Insert(struct Node* head, int data)
//	//�ֲ�������Ҫ����head�ĵ�ַ��ָ�뺯��д��
//{
//	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
//	temp->data = data;
//	temp->next = NULL;
//	if (head == NULL)head = temp;
//	else {
//		struct Node* temp1 = head;
//		while (temp1->next != NULL)
//			temp1 = temp1->next;
//		temp1->next = temp;
//	}
//	return head;
//}
//void Delect(int n)
//{
//	struct Node* temp1 = head;
//	if (n == 1)
//	{
//		head = temp1->next;
//		free(temp1);
//	}
//	for (int i = 0; i < n - 2; i++)
//		temp1 = temp1->next;
//	struct Node* temp2 = temp1->next;//����λ��һ������ѭ�����棬
//	temp1->next = temp2->next;
//	free(temp2);
//}
//void Reverse()
//{
//	struct Node* current, * next, * prev;
//	prev = NULL;
//	current = head;
//	while (current != NULL)
//	{
//		next = current->next;
//		current->next = prev;
//		prev = current;
//		current = next;
//	}
//	head = prev;
//}