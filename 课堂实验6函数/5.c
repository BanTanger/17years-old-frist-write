//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define MAX 20
///*��дһ��C����ʵ�����¹��ܣ�
//��дһ������ĺ�����һ���ݹ麯���������������ܽ������һ���ַ����԰�������ʽ���ַ�����Ϊ����ֵ��
//��main����������һ���ַ������ֱ������������������������ַ�����
//*/
//void funcRecursion(char* str, int n) {
//	int i = 0;
//	i++;
//	int strTmp[MAX];
//	if (n == 1)
//		return printf("%s",str);
//	else {
//		strTmp[i] = str[n];
//		return funcRecursion(str, n - 1);
//	}
//}
//void func(char* str, int n) {
//	int p, q;
//	p = 0, q = n;
//	while (p <= q) {
//		char tmp = str[p];
//		str[p] = str[q];
//		str[q] = tmp;
//		p++; q--;
//	}
//	printf("%s", str);
//}
//int main() {
//	char str[MAX];
//	gets(str);
//	strlen(str);
//	func(str, strlen(str) - 1);
//	printf("\n");
//	funcRecursion(str, strlen(str) - 1);
//}