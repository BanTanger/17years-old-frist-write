#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	printf("��������������:>\n");
//	printf("ps:n,m��ֵ����Ҫ����λ�����ϣ�\n");
//	scanf("%d%d", &m, &n);
//	//��10��ʮλ��
//	if (n > m)
//	{
//		 tmp = n;
//		 n = m;
//		 m = tmp;
//	}
//	int i = 0;
//	for (i = n; i < m; i++)
//	{
//		if (i / 10 == 3 || i / 10 == 7)
//		{
//			printf("%d ", i);
//		}
//	}
//	/*else if (n < m)
//	{
//		int i = 0;
//		for (i = n; i < m; i++)
//		{
//			if (i / 10 == 3 && i / 10 == 7)
//			{
//				printf("%d ", i);
//			}
//		}
//	}*/
//	return 0;
//}

//int Count(int x)
//{
//	int count = 1;
//	while (x / 10)
//	{
//		x = x / 10;
//		count++;
//	}
//	return count;
//}
//
//void print(int input)
//{
//	int i = 0;
//	for (i = 1; i <= input; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= (i / 2); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > (i / 2))
//		{
//			printf("%d ", i);
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	printf("������һ��ֵ:>");
//	scanf("%d", &input);
//	int len = Count(input);
//	printf("һ����%dλ��\n", len);
//	//printf("����:>\n%d ",i);
//	print(input);
//	return 0;
//}

#include<string.h>
#include<errno.h>
#include<stdlib.h>
//int main()
//{
//	//���ڴ�����10�����Ϳռ�
//	int* p = malloc(10 * sizeof(int));//�ɼ��ϣ�int*��ǿ������ת����
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��strerror����ͷ�ļ���string��errnoͷ�ļ���errno��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//�������ٿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;//ָ�������ߣ��������ҵ�ָ��Ԫ�أ�����ֵ��i��������
//			printf("%d ", i);
//		}
//	}
//	free(p);//�����黹�ڴ棬���ⲻ��Ҫ���ڴ��˷ѡ�
//	p = NULL;//�黹�ڴ��p�ĵ�ַ��Ȼû�䣬Ҫ�Ͽ���ϵ��Ҫ�ı�ָ��ĵ�ַ����ָ���ָ�롣
//	return 0;
//}

//int main()
//{
//	//realloc,����malloc�����ٵ��ڴ档
//	
//	int* p = malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//ͨ��һ���µ�ָ���������¿��ٵĵ�ַ
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//			//��̬�ڴ濪�ٵ������ֵ��
//			//��Ҫ���ģ���ͨ��ָ���ƶ�������i�����ķ�ʽ����ӡ������
//		}
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//��̬�ڴ���䳣������
//int main()
//{
	//1.NULLָ����н�����
	//int* p = (int*)malloc(10);
	//*p = 40;//��malloc����ʧ�ܣ���Կ�ָ����н�����

	//2.��̬�ڴ濪�ٵ�Խ����ʣ�
	//int* p = (int*)molloc(40);//10��int
	////�±�Ϊ0����9
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i <= 10; i++)
	//	//һ��С�ľͿ���д��i<=10������ʮ�Σ���ʮһ�����Խ�����
	//	//
	//	{
	//		*(p + i) = i;
	//	}
	//}

	//3.�ԷǶ�̬�ڴ��free�ͷ�
	/*int a = 0;
	int* p = &a;
	free(p);
	p = NULL;*/

	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;
	//	//ͨ����ʼ��ַ���±�ķ�ʽȥ����
	//	//*��p+i��=i�򲻻�ı�p�ĵ�ַ��
	//}
	//free(p);
	////freeֻ�ܴӶ�̬�����ڴ����ʼλ�ÿ�ʼ�ͷſռ䣬
	////��Ȼpָ��仯���ᵼ�µ�ַ�����ı䣬�����ֻᵼ��free�ͷŵĿռ䲻���������Խ�����
	//
	//p = NULL;

	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//free(p);
	////��������������
	//free(p);//����û��ע�⵽freeд��һ�Ρ�

	//���ɺ�ϰ�ߣ�free��p�ĳɿ�ָ��
	//p = NULL;

	//6.�Զ�̬�����ڴ������ͷţ������ڴ�й¶
	//while (1)
	//{
	//	malloc(1);
	//	//��ѭ��������ʵ�ֶ�ο��ٲ��ͷš�
	//	//�����ڴ汻ռ��
	//}
//	return 0;
//}


//int* test()
//{
//	static int a = 10;//ǰ���static���ӳ��������ڡ�
//	//��ʵ�������ǽ�a������ջ��ת�Ƶ���̬����
//	return &a;//����ַ����ָ��*t�����ա�
//}
//int main()
//{
//	int* t = test();
//	return 0;
//}

//���������ʹ�á�
//�����ʹ��realloc�������µĿռ䣬�ȽϷ���
//struct S
//{
//	int n;
//	int arr[];//����δ֪��С��-���������Ա����С�ɱ�
//	//���� int arr[0]
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//�����ֽ�ʱ��û�а����������顣
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * (sizeof(int)));
//	//�����Լ���Ϊ��������Ӧ�þ��еĴ�С
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//��ָ�������ĵ�ַȫ����ʼ����0 1 2 3 4
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* str = realloc(ps, 44);//�ýṹ��ָ���������¿��ٵ��ڴ�ռ�
//	if (str != NULL)
//	{
//		ps = str;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//		return 0;
//}

