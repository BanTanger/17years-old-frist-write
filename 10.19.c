#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//===============ͷ�ڵ������ֵ==============
//struct Node
//{
//	int data;//��ֵ
//	struct Node* next;//�����һ���ڵ�ĵ�ַ
//};
//struct Node* head;//ȫ�ֱ��������к������ɼ����ȽϷ���
//
//void Insert(int x);
//void Print();
//int main()
//{
//	head = NULL;//����������
//	printf("how many numbers?\n");
//	int n, i, x;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("Enter the number\n");
//		scanf("%d", &x);
//		Insert(x);
//		Print();
//	}
//}
//void Insert(int x)
//{
//	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
//	//����һ���ڵ㡣��malloc��������һ���ṹ��ָ��Ĵ�С��sizeof(struct Node).
//	temp->data = x;//��ֵ���ģ�Ҳ����Ҫ�������ֵ
//	//temp->next = NULL;//��һ���ڵ�ָ��յ�ַ��Ϊ����ĩ�ˡ�
//		//ֻ������Ϊ�յ�ʱ��Ż�ʵ�ֵ���䡣
//		//��Ϊhead�ǲ��ϸ��µģ�����temp.next= head��ʵ������������䡣
//	 
//		//head = temp;//ͷ�ļ�ȥָ���һ���ڵ㣬�����������Ϊ�ա�
//	//if (head != NULL)
//	temp->next = head;//����Ϊ��ʱ�������á���ʵ�����������
//	//���½��Ľڵ�Node���ӵ�ͷ�ڵ�/
//	head = temp;
//}
//void Insert(int x)
//{
//	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
//	temp->data = x;
//	temp->next = head;
//	//head��main�������Ѿ�����ʼ����null�ˣ��������￪ʼ�ǿ�����
//	head = temp;//head���¡�
//}
//void Print()
//{
//	struct Node* temp = head;
//	//����һ����ʱ����������һ��ָ��ͷ�ļ��ĵ�ַ��
//	//֮��ѭ��ʹ��temp��ʵ�֣�����ı�ͷ�ļ���ֵ�����޷�Ѱַ
//	printf("List is:");
//	while (temp != NULL)
//	{
//		printf(" %d", temp->data);//��ӡֵ��
//		temp = temp->next;//���½ڵ㡣
//	}
//	printf("\n");
//}

//struct Node {
//	int data;
//	struct Node* next;
//};
//struct Node* head;
//
//void Insert(int data,int n);
//void Print();
//int main()
//{
//	head = NULL;
//	Insert(3,1);
//	Insert(1,2);
//	Insert(8,3);
//	Print();
//	return 0;
//}
//void Insert(int data, int n)
//{
//	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
//	temp1->data = data;
//	temp1->next = NULL;
//	if (n == 1)
//	{
//		temp1->next = head;
//		head = temp1;
//		return;
//	}
//	struct Node* temp2 = head;
//	for (int i = 0; i < n - 2; i++)
//		temp2 = temp2->next;//�����ǿ�����㸳�ģ��ɶ����
//	temp1->next = temp2->next;
//	temp2->next = temp1;//��һ���ڵ�洢temp1�����ַ��
//	//�ڵ��ַ�����ڽڵ�ָ���ַ��
//}
//void Print()
//{
//	struct Node* temp = head;
//	while (temp != NULL)
//	{
//		printf("%d ", temp->data);
//		temp = temp->next;
//	}
//	printf("\n");
//}

