//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#define MAX 100000000
//char arr[MAX], arr1[MAX];
//int num[MAX], num1[MAX], num2[MAX];
//
//int main()
//{
//	gets(arr);
//    gets(arr1);
//	int n = strlen(arr);
//	int m = strlen(arr1);
//	int i, k = 0;
//	for (i = n - 1; i >= 0; i--) {
//		num[k] = arr[i] - '0';//��char�ĳ�int
//		k++;
//	}
//	k = 0;
//	for (i = m - 1; i >= 0; i--) {
//		num1[k] = arr1[i] - '0';//��char�ĳ�int
//		k++;
//	}
//	int enter, tmp;
//	int j = 0;
//	memset(num2, 0, sizeof(num2));//��ʼ��
//	for (i = 0; i <= n ; i++) {
//		k = i;
//		enter = 0;//��λ���㣬�����Ǿֲ�������
//		for (j = 0; j <= m; j++) {
//			tmp = num2[k];
//			num2[k] = (num[i] * num1[j] + enter + tmp) % 10;
//			enter = (num[i] * num1[j] + enter + tmp) / 10;
//			k++;
//		}
//	}
//	tmp = 0;//���num2�����ǰ��λ��0���Ͳ������
//	for (; k >= 0; k--) {
//		if (num2[k] == 0 && tmp == 0)
//			continue;
//		else
//			tmp = 1;
//		printf("%d", num2[k]);
//	}
//
//}