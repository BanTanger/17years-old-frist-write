#define _CRT_SECURE_NO_WARNINGS 1
/*��дһ��C����ʵ�����¹��ܣ�
��дһ��sort������ʵ�ֶ�5���ַ������Ӵ�С��������
��������������5�ַ���������sort(s,n)������n���ַ���s��������
Ȼ����������Ľ�������磺�����ַ���Li Xiao Wang Zhang Yu��
�����Zhang Yu Xiao Wang Li����ʾ��ʹ���ַ�ָ�����顣
*/
#include<stdio.h>
#define N 5
#define M 10
void sort(int* s[N],int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (strcmp(s[j], s[j + 1]) < 0) {
				int* tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
}
int main() {
	//����ַ���	
	char str[N][M];
	char* s[N];
	for (int i = 0; i < N; i++) {
		scanf("%s", *(str + i));
		s[i] = *(str+i);
	}
	sort(s,N);
	for (int i = 0; i < N; i++) {
		printf("%s ", s[i]);
	}
}