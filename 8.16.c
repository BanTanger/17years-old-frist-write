#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//===============================��ŵ��===================================
int hnt(int n, char A, char B, char C)
{
    int count = 0;
    count++;
    /*
    �����1������
        ֱ�ӽ�A�����ϵ����Ӵ�A�Ƶ�C
    ����
        �Ƚ�A�����ϵ�n-1�����ӽ���C�Ƶ�B
        ֱ�ӽ�A�����ϵ����Ӵ�A�Ƶ�C
        ���B�����ϵ�n-1�����ӽ���A�Ƶ�C
    */
    if (1 == n)
    {
        printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", n, A, C); //�����A C���������ĳ������
        return 1;
    }
    else
    {
        hnt(n - 1, A, C, B);
        printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", n, A, C);
        hnt(n - 1, B, A, C);
        return count;
    }
}
int main()
{
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';//������������
    int n;
    printf("������Ҫ�ƶ����ӵĸ�����");
    scanf("%d", &n);
   int count= hnt(n, 'A', 'B', 'C');
    printf("�ܲ���:>%d", count);
    return 0;
}

//int A(int n)
//{
//	if (n == 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//���ٲ�
//	//�ٶ���������
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	a = n;
//	int ret = A(n);
//	printf("%d", ret);
//	return 0;
//}

//===============================쳲���������=============================
//======��Ч=====
//int main()
//{
//	int n = 0;
//	int i = 0;
//	unsigned int a = 1; 
//	unsigned int b = 1;
//	unsigned int c = 0;
//	scanf("%d", &n);
//	for (i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//======��Ч=====
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("���������ѯ��쳲�������:>");
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("��%d����Ϊ%d\n", n,ret);
//	return 0;
//}


//===============================�ݹ���׳�======================
//fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac1(n - 1);
//}
//
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	scanf("%d\n", &n);
//	 int ret = fac1(n);
//	 printf("%d\n", ret);
//	 return 0;
//
//}


//=====================ģ��strlen===========================
//���ܴ�����ʱ����count 
//�ݹ�-���»�С
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len =my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



/*int my_strlen(char* str)
{
	int count = 0;
while (*str != '\0')
	{	
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "bit";
	int len =my_strlen(arr);
	printf("%d\n", len);
	return 0;
}*/