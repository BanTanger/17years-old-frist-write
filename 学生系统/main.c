#define _CRT_SECURE_NO_WARNINGS 1
#include "func.h"

//ϵͳ�������ܣ����ӡ��޸ġ�ɾ������������ҡ�����ͳ�Ƶȡ�

inline void menu() {
	printf("1.����\t2.�޸�\t3.ɾ��\t4.���\t5.����\t6.����\t7.ͳ��\n");
}
int main() {
	do {
		int input;
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:addfunc(); break;
		case 2:changefunc(); break;
		case 3:deletefunc(); break;
		case 4:lookfunc(); break;
		//case 5:findfunc(); break;
		case 6:sortfunc(); break;
		//case 7:statisticsfunc(); break;
		default:printf("�������");
			break;
		}
	} while (1);
}