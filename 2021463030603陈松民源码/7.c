#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#define MAX 20
/*��дһ��C����ʵ�����¹��ܣ�
��дһ���������ú������ж�һ��Ӣ�ľ���str(�����ո�)���Ƿ���ĳ������w,�硰Howoldareyou?�����С�old����
��main����������һ��Ӣ�ľ��ӣ�������һ�����ʣ����Ӣ�ľ����к����Ǹ����ʣ��������YES�������������NO����
*/

void Estimate(char *str,char* word,int n) {
	char p;
	p = str;
	bool flag;
	flag = false;
	int i = 0;
	for (int i = 0; i < n && p != '\0'; i++)
	{
		if (str[p] == word[i]) {
			p++;
			i++;
			flag = true;
		}
		else
			flag = false;
	}
	if (!flag)
		printf("Yes");
	else
		printf("No");
}
int main() {
	char str[MAX];
	char word[MAX];
	gets(str);
	gets(word);
	Estimate(str, word, strlen(word)-1);
}