#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//typedef struct Node {
//	int data;
//	struct Node* next;
//	struct Node* prev;
//}n;
//struct Node* head;
//struct Node* GetNewNode(int x)
//{
//	n* newNode = (n*)malloc(sizeof(n));
//	newNode->data = x;
//	newNode->next = NULL;
//	newNode->prev = NULL;
//	return newNode;
//}
//void InsertAtHead(int x)
//{
//	n* newNode = GetNewNode(x);
//	if (head == NULL) {
//		head = newNode;
//		return;
//	}
//}
//int main()
//{
//	head = NULL;
//}

//void print(char* C)
//{//����C�������飬ֻ��һ��ָ���������ַ��һ��ָ�룬
//	//��ͨ��ָ����������ƶ�ָ��ʵ�ֱ�������
//	//������ȴ����ʹ�����㷨��
//	while (*C != '\0')
//	{
//		printf("%c", *C);
//		C++;
//	}
//	printf("\n");
//}
//int main()
//{
//	/*char C[20] = "HELLO";*/
//	char* C = "HELLO";//Ҳ�ܵõ����
//	print(C);
//	return 0;
//}


//int main()
//{
//	int n;
//	printf("Enter size of array\n");
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//		//printf("%d ", arr[i]);
//	}
//	int* B = (int*)realloc(arr, 2 * n * sizeof(int));
//	for (int i = 0; i < n * 2; i++)
//	{
//		printf("%d\n", B[i]);
//	}
//	
//	printf("\n");
//	free(arr);
//	free(B);
//}

//int* Add(int* a, int* b)
//{
//	int* c = (int*)malloc(sizeof(int));
//	//malloc�⺯���᷵��һ��ָ�룬����ַ��
//	*c = (*a) + (*b);
//	return c;
//}
//
//int main()
//{
//	int a = 4, b = 2;
//	int* c = Add(&a,&b);
//	printf("%d\n", *c);
//}

//����ָ��
//void PrintHello(char* name)
//{
//	printf("Hello %s", name);
//}
//int main()
//{
//	void(*ptr)(char*);
//	ptr = PrintHello;
//	ptr("TMD\n");
//}
//void A()
//{
//	printf("hello\n");
//}
//void B(void (*ptr)())
//{
//	ptr();
//}
//int main()
//{
//	B(A);
//}