#define _CRT_SECURE_NO_WARNINGS 1
#include<stdbool.h>
#ifndef LIST_H
#define LIST_H

//�ض��ڱ�����Ķ���
#define TSIZE 45
#define CLP const List* plist
#define LP List* plist
struct film
{
	char title[TSIZE];
	int rating;
};
//���ṹ��һ�㶨������
typedef struct film Item;

//�ṹ��Ƕ��
typedef struct node
{
	Item item;
	struct node* next;
}Node;

typedef Node* List;
void InitalizeList(LP);//��ʼ������
bool ListIsEmpty(CLP);//ȷ�������Ƿ�Ϊ�գ�plistָ��һ���ѳ�ʼ��������
bool ListIsFull(CLP);//ȷ�������Ƿ�����
unsigned int ListItemCount(CLP);//ȷ��������Ŀ����
bool AddItem(Item item, LP);//��������Ŀ



