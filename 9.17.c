#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//void test(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = len - 1 + str;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//	
//}
//int main()
//{
//	int arr[365] = { 0 };
//
//	gets( arr);//��ȡһ�У���scanf����
//	//��������ʵ��
//	test(arr);
//	printf("����֮����ַ���%s\n", arr);
//	return 0;
//
//}

//int main()
//{
//	//ʵ��Sn=a+aa+aaa+aaaa�Ĳ���
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//==========ˮ�ɻ�������======
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int n = 1;
//		int tmp = i;//������ʱ����������i��ֵ����������
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.ÿһλ����n�Ĵη�
//		tmp = i;
//		while (tmp)
//		{
//			sum +=(int) pow(tmp % 10, n);//Ĥ10��ÿһλ������ÿһλ��n�η�
//			tmp /= 10;//�������һλ��ǰһλ�������һλ��
//			//�����λ��ȥ�����ʮλ��
//		}
//		//ˮ�ɻ������ж�
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

int main()
{
	int a = 0;
	printf("��������:>");
	scanf("%d", &a);
	int i = 0;
	for (i = 0; i < a; i++)
	{
		//�Ͻ�
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < a - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < a - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2*(a- 1-i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}