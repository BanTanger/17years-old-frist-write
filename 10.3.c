#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[20];
//	printf("����������:>");
//	scanf("%s", &arr);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	float a;
//	printf("\a����:");
//	printf(" Ҫ______\b\b\b\b\b\b");
//	scanf("%f", &a);
//	printf("\n\t%.2f һ����нˮ �� һ��֮�����нˮ%.2f", a, a * 12);
//	printf("\r���ͣ�\n");
//	return 0;
//}

//#define SCORE 10
//void print(int index, int score[SCORE])
//{
//	
//}
//int main()
//{
//	int index = 0;
//	int score[SCORE] = {0};
//	int sum = 0;
//	float average = 0;
//
//	//ʹ�ú�������װ
//	// 	   ���õĺ�����ʲô�����ء�Ϊʲô�޷���װ���ò�����Ҫ�Ľ��
//	//print(index,score[SCORE]);
//	printf("������%d�θ߶�����÷����:\n", SCORE);
//	for (index = 0; index < SCORE; index++)
//	{
//		scanf("%d", &score[index]);
//		//���ﲻ̫��⣬Ϊʲô�ܶ�ȡ��һ������֮������Ԫ��
//		//�Ƿ�������⣬һ��ʼ�����±�Ϊ�㣬����scanf����һ��ֵ���±������飬Ȼ���±��������
//		//��Ϊ�����˱�����forѭ����һ��ִ��scanf��������\0������֮ǰ�ڻ������ڵ�ʣ��9����ֵ��Ȼ����
//		//���Բ�����Ҫ���룬���Ǽ�����ȡ��ֵ��
//		//����enter��ҲҪ��10��ֵȫ������
//	}
//	printf("�÷����:\n");
//	for (index = 0; index < SCORE; index++)
//	{
//		printf("%5d", score[index]);
//	}
//	printf("\n");
//	for (index = 0; index < SCORE; index++)
//	{
//		sum += score[index];
//	}
//	average = (float)sum / SCORE;
//	printf("sum=%d,average=%.2f\n", sum, average);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("������\n");
//	scanf("%d", &n);
//	for (i = 0; i < n-2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	printf("����������\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	char ch[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for(;i<6;)
//		{
//			printf("%s", ch[i]);
//		}
//		printf("\n");
//	}
//}
// 
// int main()
//{
//	int n = 0;
//	char ch;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (ch = ('F' + i); ch < ('F'-i); ch++)//ԭ�����ҵı�������֧��
//			//ֻ��ʹ�����鲢����Ԫ�ء�
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//}

//int main(void)
//{
//    char let = 'F';
//    char start;
//    char end;
//    //˫ָ��
//    for (end = let; end >= 'A'; end--)
//    {
//        for (start = let; start >= end; start--)
//            printf("%c", start);
//        printf("\n");
//    }
//    return 0;
//}

int main()
{
	int index = 0;
	char ch[26] = "ABCDEFGHIJKLMNOPQRSTUVWSYZ";
	int n = 0;
	//=============��������===========
	/*for (int i = 0; i <= n;i++)
	{
		for (index = n; index >= i; index--)
		{
			printf("%c", ch[index]);
		}
		printf("\n");
	}	*/

	//==============��������===========
	/*for (int i = 0; i <= n; i++)
	{
		for (index = 0; index <= i; index++)
		{
			printf("%c", ch[index]);
		}
		printf("\n");
	}*/

	//===========������===========
	//for (int i = 1; i < n; i++)
	//{
	//	//��ӡ�ո�
	//	int j = 0;
	//	for (j = 1; j<=(n - i)-1; j++)
	//	{
	//		printf(" ");
	//	}
	//	//��ӡ�Ǻ�
	//	for (index = 0; index <2*i-1; index++)
	//	{
	//		printf("%c",ch[index]);
	//	}
	//	printf("\n");
	//}

	//============�����ǣ��Ѷ�������Ҫ��������룩=============
	/*printf("������һ����д��ĸ���Դ�Ϊ�������µݼ���ֱ����A��\n:>");
	scanf("%c", &ch[index]);
	for (n = 0; n < index; n++)
	{
		for()
	}*/

		int m, i, z, q;
		char x;
		scanf("%c", &x);

		n = x - 'A';

		for (m = 0; m < n + 1; m++)
		{
			for (i = 0; m < n - i; i++)
				printf(" ");
			for (z = 0; z <= m; z++)//ִ��������֮��ͻ���£������Ƿ��ٽ���ѭ��
				printf("%c", 'A' + z);
			for (q = 2; 'A' + z - q >= 'A'; q++)
				printf("%c", 'A' + z - q);
			printf("\n");
		}
	return 0;
}