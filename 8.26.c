#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i))
		printf(">\n");
	else
		printf("<\n");
	return 0;
}

//int main()
//{
//	int a = 0x11223344;//����x����Ϊ��λ�ֽ�
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//===============�����齻��=================
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//
//===============�������ã���ӡÿһԪ�أ���ʼ������=================
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;//�򵥶��������±�Ĳ��ࡣ
//	while (left < right)
//		//�û������±�������±꣬��ִ��һ�κ��±�������
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*init(arr,sz);*///��ʼ������
//	print(arr,sz);//��ӡԭʼ����
//	reverse(arr, sz);//���ú���
//	print(arr, sz);//��ӡ��������
//	return 0;
//}