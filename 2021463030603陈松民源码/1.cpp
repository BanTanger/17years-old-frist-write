//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
///*��дC���Դ��룬ʵ�����¹��ܣ�
//��дһ������isPrime(int n),�����Ĺ������ж�����n�Ƿ���һ��������
//��nΪ����ʱ������ֵΪ1�����򷵻�0��
//��������������������a��b,���a��b֮�䣨����a��b��������������
//*/
//
//int isPrime(int n) {
//	int i = 0;
//	for (i = 2; i <= n / 2; i++) {
//		if (n % i == 0)
//			break;
//	}
//	if (i > n / 2 && i != 2) return 1;
//	else return 0;
//}
//int main() {
//	int a, b;
//	scanf("%d%d",&a,&b);
//	for (int i = a; i < b; i++) {
//		int flag = isPrime(i);
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}