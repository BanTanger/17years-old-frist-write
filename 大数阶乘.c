#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 100000000
int main()
{
	int a[MAX];
	int temp, digit, n, j, i;
	//temp ÿ�ε�����digitÿ��λ��
	scanf("%d", &n);
	a[0] = 1;//��һ��ʼ;
	digit = 1;//λ����һ��ʼ;
	for (i = 2; i <= n; i++) {
		//λ��ѭ��
		int num = 0;
		for (j = 0; j < digit; j++) {
			temp = a[j] * i + num;
			a[j] = temp % 10;//����a[j]��֤ÿ�ζ��Ǹ�λ����λͨ��num�ӻأ�
			//��һ������ÿһλ��������ӻأ�
			num = temp / 10;
		}
		while (num) {
			a[digit] = num % 10;
			num /= 10;
			digit++;
		}
	}
	for (i = digit - 1; i >= 0; i--) {
		printf("%d", a[i]);
	}
	printf("\n");

}