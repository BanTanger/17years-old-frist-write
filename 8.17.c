#include<stdio.h>

//================����ð������====================
void bubble_sort(int arr[],int sz)
{//�ַ������ļ����޷��ں����ڲ�ʵ�֣�����д�����������ٴ��εķ�ʽ���Ŀ�ġ�
	int i = 0;
	int flag = 1;//������һ��Ҫ����������Ѿ�������.
	for (; i < sz - 1; i++)//ÿһ��ð������
	{	
		int j = 0;
		for (; j < sz - i - 1; j++)//ÿ����ҪУ��ĸ���
		{
			if (arr[j] > arr[j + 1]);//��ֵ
			{int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp; 
			flag = 0;}//������������ݲ�����ȫ����
		}
		if (flag == 1)//ͨ���ı�flag��ֵ��ѡ�����
		{	
			break;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	//��arr���������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	for (; i < (int)strlen(arr); i++)
//		printf("%c ", arr[i]);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (; i < sz; i++)
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	return 0;
//}

//============================��ά����==============================
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		int j = 0;
//		for (; j < 4; j++)
//		{	
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*int main()
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };
	int i = 0;
	for (; i < 3; i++)
	{
		int j = 0;
		for (; j < 4; j++)
		{	
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/