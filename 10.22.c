#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 50

//void game();
//int main()
//{
//	game();
//}
//void game()
//{
//	
//}
//ð�ݺ��������ûص�������
//void compare(int a, int b)
//{
//	//return a - b;
//	//���a>b������������a<b�����ظ�����a=b����0
//	return abs(a) - abs(b);//����ֵ����
//	//abs��������ֵ������
//}
//void Bubble(int* A, int sz,int(*compare)(int,int))
//{
//	int i, j, temp;
//	for (i = 0; i < sz - 1; i++)
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (compare(A[j], A[j + 1]) > 0)
//			{
//				temp = A[j];
//				A[j] = A[j+1];
//				A[j + 1] = temp;
//			}
//		}
//}
////ð�ݺ����������ûص�������
///*void Bubble(int* A, int sz)
//{
//	int i, j, temp;
//	for (i = 0; i < sz - 1; i++)
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (A[j] > A[j + 1])
//			{
//				temp = A[j];
//				A[j] = A[j+1];
//				A[j + 1] = temp;
//			}
//		}
//}*/
//int main()
//{
//	int A[MAX] = { 1,2,48,61,3,4,5,6,78,-5,-15,-846 };
//	Bubble(A, 12,compare);//compare�Ǻ���ָ��
//	for (int i = 0; i < 12; i++)
//		printf("%d ", A[i]);
//}

//��������
//void compare(int a, int b)
//{
//	return abs(a) - abs(b);
//}

//�������򣬾���ֵ�Ƚϡ�
//int compare(const void* a, const void* b)
//{
//	int A = *((int*)a);
//	int B = *((int*)b);
//	return abs(A) - abs(B);
//}
//int main()
//{
//	int A[MAX] = { 1,2,48,61,3,4,5,6,78,-5,-15,-846 };
//	qsort(A, 12, sizeof(int), compare);//compare�Ǻ���ָ��
//		//�⺯����stdilb.h
//	for (int i = 0; i < 12; i++)
//		printf("%d ", A[i]);
//}

typedef struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
}n;
struct Node* head;
struct Node* GetNewNode(int x)
{
	n* newNode = (n*)malloc(sizeof(n));
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}
void InsertAtHead(int x)
{
	n* newNode = GetNewNode(x);//�õ�һ���½ڵ�
	if (head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;//�����½ڵ�ǰһ���ڵ�
	newNode->next = head;
	head = newNode;//����head��ָ����󣬽���ͷ�ڵ�Ծɽڵ������
	//�ﵽ��ǰ�����Ŀ��
}
//void InsertAtTail(int x)
//{
//	n* newNode = GetNewNode(x);
//	if (head == NULL)
//	{
//		head = newNode;
//		return;
//	}
//	n* temp = newNode->next;
//	temp->prev = newNode;
//	newNode = temp;
//}
void Print()
{
	n* temp = head;
	if (temp == NULL)return;
	printf("Print:");
	while (temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void ReversePrint()
{
	n* temp = head;
	if (temp == NULL)return;
	while (temp->next != NULL)
		temp = temp->next;
	printf("Reverse:");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}
int main()
{
	head = NULL;
	InsertAtHead(2); Print(); ReversePrint();
	InsertAtHead(4); Print(); ReversePrint();
	InsertAtHead(6); Print(); ReversePrint();
	InsertAtHead(8); Print(); ReversePrint();
	/*InsertAtTail(10); Print();
	InsertAtTail(12); Print();
	InsertAtTail(14); Print();*/
}

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
	if (top == MAX_SIZE - 1)//��һ����Ϊ���һ������Ҫ��\0��
	{
		printf("Error:stack overflow\n");
		return;//ջ�������
	}
	A[++top] = x;
}
void Pop()
{
	if (top == -1) {
		printf("Error: No element to pop\n");
		return;//�쳣����׳���
	}
	top--;
}
int Top(int x)
{
	return A[top];//����top������ֵ
}
int main()
{
	int a = 0;
	while (1)
	{
		scanf("%d", &a);
		Push(a);
		Print();
	}
}