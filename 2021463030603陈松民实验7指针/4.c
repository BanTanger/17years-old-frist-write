//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#define MAX 500
///*��дһ��C����ʵ�����¹��ܣ�
//��һ������ʵ�������ַ����ıȽϣ����Լ�дһ��strcmp����������ԭ��Ϊ��
//int strcmp(char *p1,char *p2);
//��p1ָ���ַ���s1��p2ָ���ַ���s2��Ҫ��s1=s2ʱ����������ֵΪ0�����s1��s2���������Ƕ��ߵ�һ������ͬ�ַ���ASCII���ֵ���硰BOY���롰BAD�����ڶ�����ĸ����ͬ����O���롰A��֮��Ϊ79-65=14�������s1>S2���������ֵ����s1<s2�������ֵ��
//*/
//
//int strcmp(char* p1, char* p2) {
//	int max = strlen(p1) > strlen(p2) ? strlen(p1) : strlen(p2);
//	int min = strlen(p1) + strlen(p2) - max;
//	int p;
//	p = 0;
//	//����
//	if (strlen(p1) == strlen(p2))
//	{
//		for (int i = 0; i < max; i++) {//������max����min����strlen��һ��
//			//��ĸ��ascii
//			if (p1[p] != p2[p])
//				return abs(p1[p] - p2[p]);
//			else {
//				p++;
//			}
//		}
//		return 0;
//	}
//	else
//	{
//		while (p != min) {
//			if (p1[p] != p2[p])
//				return abs(p1[p] - p2[p]);
//			p++;
//		}
//	}
//}
//int main() {
//	char str01[MAX], str02[MAX];
//	gets(str01);
//	gets(str02);
//	char tmp = strcmp(str01,str02);
//	printf("%d", tmp);
//}