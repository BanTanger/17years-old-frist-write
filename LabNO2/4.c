//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int compare(char* a, char* b)
//{
//	int count = 0;
//	char* temp = b;
//	while (*a != '\0')
//	{
//		if ((*a == *b) && (*(a+1) == *(b+1)))//�ж��ַ��Ƿ���ȡ�����
//		{
//			//�Ƿ������ж�����������ȥ���������ַ�����Ϊ�漰��������
//			a++;b++;
//			if (*(b+1) == '\0') return count;
//			/*if (*(a++) != *(b++))
//				count++;*/
//		}
//		else
//		{//�������ȣ�tagָ���һ��needָ�벻��ȥ�������ַ��Ƿ����
//			a++;
//			b = temp;
//			count++;
//		}
//	}
//	if (count == 0||((*a == *b)||(*(a+1) != *(b+1))))//�쳣�׳�
//		//1.������û��λ��˵����������������ͬ�ַ�
//		//2.��������λ����֮���ָ��Ƚϲ�ͬ��˵�������и��ַ���
//		count = -1;
//	return count;
//}
//int main()
//{
//	char tag[20] = "abca456abcd";
//	char need[20] = "ab56";
//	//int sz = sizeof(need) / sizeof(need[0]);
//	int tmp = compare(tag, need);
//	printf("%d\n", tmp);
//}