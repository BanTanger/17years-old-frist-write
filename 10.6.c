#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define SPACE ' '
//int main()
//{
//	//ʹ��getchar��ʵ�ִ�ӡ�ո�������ǿո��ת����һ���ַ���
//	char ch;
//	printf("������һ����ĸ���ɴ��С��");
//	ch = getchar();
//	while(ch != '\n')//�����԰���ɵ��sb
//	{
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();//��ȡ��һ���ַ�
//	}
//	putchar(ch);//��ӡ�����ַ���
//	
//	return 0;
//}

//int main()
//{
//	int ch;
//	while ((ch = getchar()) != '\n')
//	{
// //while(ch = getchar() != '\n')����
//		;
//	}
//}

//������
#include<ctype.h>   //�ṩisalpha�����������˺���ֻ���ȡ��ĸ������ĸ�ַ��Զ�����
int main()
{
	int ch;
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))//==if(isalpha(ch)==0)//�������ĸ
			//putchar(ch + 1);//�ı���
			//��д��Сд����tolower����
			//Сд����д����toupper����
		{
			ch = tolower(ch);
			//ch = toupper(ch);
			putchar(ch);
		}
		else
			putchar(ch);//ԭ�����
	}
	putchar(ch);//���в�����
	return 0;
}