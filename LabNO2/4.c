//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int compare(char* a, char* b)
//{
//	int count = 0;
//	char* temp = b;
//	while (*a != '\0')
//	{
//		if ((*a == *b) && (*(a+1) == *(b+1)))//判断字符是否相等。迭代
//		{
//			//是否进入的判断条件，必须去检索两个字符。因为涉及到计数器
//			a++;b++;
//			if (*(b+1) == '\0') return count;
//			/*if (*(a++) != *(b++))
//				count++;*/
//		}
//		else
//		{//如果不相等，tag指针进一，need指针不变去检索新字符是否相等
//			a++;
//			b = temp;
//			count++;
//		}
//	}
//	if (count == 0||((*a == *b)||(*(a+1) != *(b+1))))//异常抛出
//		//1.计数器没进位，说明根本检索不到相同字符
//		//2.计数器进位，但之后的指针比较不同，说明不含有该字符。
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