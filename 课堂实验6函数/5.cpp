#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 20
/*��дһ��C����ʵ�����¹��ܣ�
��дһ������ĺ�����һ���ݹ麯���������������ܽ������һ���ַ����԰�������ʽ���ַ�����Ϊ����ֵ��
��main����������һ���ַ������ֱ������������������������ַ�����
*/
void funcRecursion(char* str, int n) {

}
void func(char *str,int n) {
	int p, q;
	p = 0, q = n - 1;
	while (p <= q) {
		char tmp = str[p];
		str[p] = str[q];
		str[q] = tmp;
		p++; q--;
	}
	for (int i = 0; i < n; i++) {
		printf("%s", str[i]);
	}
}
int main() {
	char str[MAX];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%c", &str[i]);
	}
	func(str,n);
	//funcRecursion(str,n);
}