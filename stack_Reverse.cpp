#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
#include<string.h>
#include<stdio.h>
using namespace std;
//=========��ת����============
//void Reverse(char C[], int n)
//{
//	stack<char> S;//<>д�������ͣ�����д����
//	for (int i = 0; i < n; i++)
//	{//loop for push
//		S.push(C[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{//loop for pop
//		C[i] = S.top();
//		S.pop();
//	}
//}
//int main()
//{
//	char C[51];
//	printf("Enter a string:");
//	gets_s(C);
//	Reverse(C,strlen(C));
//	printf("Output = %s", C);
//	printf("\n");
//}

//struct Node {
//	int data;
//	Node* next;
//};
//struct Node* head;
//void Reverse()
//{
//	if (head == NULL)return;
//	stack<struct Node*> S;
//	Node* temp = head;
//	while (temp != NULL)
//	{
//		S.push(temp);
//		temp = temp->next;
//	}
//	temp = S.top(); head = temp;
//	S.pop();
//	while (!S.empty()) {
//		temp->next = S.top();
//		S.pop();
//		temp = temp->next;
//	}
//	temp->next = NULL;
//	//���һ��ѭ����Ϊ�ڴ��ͷ�ʵ����û��ָ��ͷ�ڵ㣬
//	//����ָ���˵����ڶ����ڵ�
//}
//int main()
//{
//	head = NULL;
//}