//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define MAX 20
///*��дһ��C����ʵ�����¹��ܣ�
//��дһ������jugde(int b[],int n)��
//�ú����ܽ�һ��һά�����������Ϊ�������ߣ�
//��������������ߣ�����ż���������ұߡ�
//(ע���桢ż���ĸ�����һ����ȣ���
//*/
//
//void jugde(int b[],int n) {
//	int a[MAX];//a������������b�����������������ż����
//	int j = 1;
//	for (int i = 1; i < n + 1; i++) {
//		if (b[i] % 2 != 0) {
//			a[j] = b[i];
//			j++;
//		}
//	}
//	for (int i = 1; i < n + 1; i++) {
//		if (b[i] % 2 == 0) {
//			a[j] = b[i];
//			j++;
//		}
//	}
//	for (int i = 1; i < n + 1; i++) {
//		printf("%d ", a[i]);
//	}
//}
//int main() {
//	int b[MAX];
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &b[i]);
//	}
//	jugde(b,n);
//}