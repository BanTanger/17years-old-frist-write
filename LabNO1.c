#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double H = 0.00;
	int n = 0;
	double ret = 0.00;
	int d = 0;//����ѭ�������ı���
	printf("the initial height is ");
	scanf("%lf", &H);
	scanf("%d", &n);//�����ٴ�

	while (H > 0)
	{
		ret += H;
		H /= 2;
		d++;
		if (n == d)//�ﵽѭ��������
			break;
	}
	/*if (H == 0 || n != d)
		printf("Hֵ��С��n����\n");
	else
	{ */
		printf("the tatal of road is %.6lf\n", ret);
		printf("the tenth is %.6lf\n", H);
	/*}*/
	return 0;
}
#include<stdio.h>
int main()
{
    int T = 0;
    int s2 = 0, s1 = 0;
    scanf("%d", &T);
    T -= 1;
    int t = 0;
    while (t <= T)
    {
        t++;
        s2 += 9;
        s1 += 3;
        //��ʮ���һ��
        if (t % 10 == 0 && s2 > s1)
        {
            //Ӣ����
            int i = t;
            while (t <= T && t < 30 + i)
            {
					t++;
                s1 += 3;
            }
        }
    }
    if (s1 > s2)
        printf("hero %d", s1);
    else if (s2 > s1)
        printf("infantry %d", s2);
    else 
        printf("ƽ�� ", s2);
    return 0;
}

#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	//����1��100֮����������ȡģ��
	//printf("%d\n",ret);
	//�����֣�ѭ���²⣩
	while (1)
	{
		printf("�������(��1��100֮��):>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			printf("GAmE OVER!!\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));//NULL��ָ�룬����Ҫ�����κ�һ��ֵʱʹ��
	int input = 0;
	game();
	return 0;
}

 
int main()
{
	int n = 0;
	int d = 0;
	printf("�����루1/0��(1��������):");
	scanf("%d", &n);
	int ch[20];
	int i = 0;
	int indem = 0;
	//��ֵ�������飬ѭ����ʵ��
	for (indem = 0; indem <= 10; indem++)
	{
		scanf("%d", &ch[indem]);
		printf("%d ", ch[i]);
	}
		//����forǶ��
		for (i = 0; i < 10 - 1; i++)//���ٴ�
		{
			int j = 0;
			for (j = 1; j < 10 - i - 1; j++)//���ٴ�
			{
				if (ch[j] > ch[j + 1])
				{
					int tmp = ch[j];
					ch[j] = ch[j + 1];
					ch[j + 1] = tmp;
				}
			}
		}
		for (i = 0; i < 10; i++)
			printf("%d ", ch[i]);
	
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void print1(int* arr, int m, int i);
void print2(int* arr, int m, int i);
int main()
{
	int arr[20], i, m, n = 0;//mΪ������,������Ϊ���������Ԫ�� 
	printf("�����루1/0��(1��������):");
	scanf("%d", &n);
	printf("����Ƚϵ����ݴ�С(ע��10<=m<=20)\n");
	scanf("%d", &m);
	while (m < 10 || m > 20)
	{
		printf("����Ƿ����������룡\n");
		scanf("%d", &m);
	}
	printf("���������ݣ�\n");
	for (i = 1; i <= m; i++)
		scanf("%d", &arr[i]);
	if (n == 1)
		print1(arr, m, i);
	else
		print2(arr, m, i);
}
void print1(int* arr,int m,int i)
{
	for (int j = 0; j < m; j++)
	{
		for (i = 0; i < m - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	for (i = 1; i <= m; i++)
		printf("%d ", arr[i]);
}
void print2(int* arr, int m, int i)
{
	for (int j = 0; j < m; j++)
	{
		for (i = 0; i < m - j; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	for (i = 1; i <= m; i++)
		printf("%d ", arr[i]);
}
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[5], b[5], c[5], d[5];
	gets(a);
	gets(b);
	gets(c);
	//d������������
	if (strcmp(a, b) > 0)
	{
		strcpy(d, a);
		strcpy(a, b);
		strcpy(b, d);
	}
	if (strcmp(a, c) > 0)
	{
		strcpy(d, a);
		strcpy(a, c);
		strcpy(c, d);
	}
	if (strcmp(b, c) > 0)
	{
		strcpy(d, b);
		strcpy(b, c);
		strcpy(c, d);
	}
	printf("�����Ľ��\n");
	printf("\n%s\n\n%s\n\n%s\n\n", a,b,c);
	return 0;
}

int main()
{
	int n = 0;
	printf("����һ��������");
	scanf("%d", &n);
	int arr[] = { 0 };
	for (int i = 0; n > 0; i++)
	{
		arr[i] = n % 10;
		n /= 10;
		printf("%d ", arr[i]);
	}
	return 0;
}

int main()
{
	int shour, m;
	int time, smin;
	scanf("%d%d", &time, &m);
	if (time % 100 > 60 || time > 2400)
		printf("�������\n");
	shour = m / 60;//��ʧ���ٸ�Сʱ
	int chour = (time / 100) * 100;
	smin = m % 60;//��ʧ���ٷ��ӣ�
	int cmin = time % 100;//ԭ�еķ���
	if ((smin + cmin) > 60)
	{
		shour += 1;
		cmin = (smin + cmin) % 60;
		chour += shour * 100 + cmin;
	}
	else if((smin + cmin) < 60&& (smin + cmin)>0)
	{
		cmin = (smin + cmin) % 60;
		chour += shour * 100 + cmin;
	}
	else
	{
		chour += shour * 100 + smin - 20;
	}
	int h, time, min, m,min_m,h_m;
	scanf("%d%d", &time, &m);
	h = (time / 100) * 100;
	min = time % 100;
	min_m = m % 60;
	h_m = m / 60;
	if (time > 2400 || time % 100 > 60)//�Ƿ��ж�
		printf("����Ƿ�������");
	
	printf("%d\n", );
	return 0;
}

int main()
{
	char a, b, c,tmp;//�����������������һ����������
	scanf("%c\n%c\n%c",&a,&b,&c);
	/*if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}*/
	//�Ż�����Ŀ
	char mam = (a > b && a > c) ? a : ((b > c && b > a) ? b : c);
	char min = (c < b && c < a) ? c : ((a < c && a < b) ? a : b);
	char mid = (a + b + c) - (min + mam);
	printf("\n%c\n\n%c\n\n%c\n\n",min,mid,mam);
	return 0;

}

�Ӽ���λ����
int	add(int a, int b)
{
	if (b == 0)
		return a;
	int Nsum = a ^ b;
	int Osum = (a & b) << 1;
	return add(Nsum,Osum);
}

int add2(int a,int b)
{
	int count = a;
	//printf("%p", &count);
	if (b < 2)
		return count;
	else
	{
		add(b, -1);
		//printf("%p", &count);
		return add(count, a);
	}
}
(*m) = ((*m) < 0) ? -(*m) : (*m);
(*y) = ((*y) < 0) ? -(*y) : (*y);
(*i) = ((*m) < 0) ? -(*i) : (*i);
(*i) = ((*y) < 0) ? -(*i) : (*i);
void menu()
{
	printf(" 1.add   2.sub   3.mul   4.div  0.emit\n");
}
void swap(int* m,int* y)
{//������Ŀ����Ϊ����yΪСֵ��
	//�ɴﵽ����ѭ����ģ������Ĳ���
	if (*m < *y)
	{
		int tmp = *m;
		*m = *y;
		*y = tmp;
	}
}
int	add(int a, int b)
{
	if (b == 0)
		return a;
	int Nsum = a ^ b;
	int Osum = (a & b) << 1;
	return add(Nsum, Osum);
}
void IfFun(int* m, int* y,int* i)
{
	//�Ƿ����Ż���
	if (*m < 0)
	{
		*m = -*m;
		*i = -*i;
	}
	if (*y < 0)
	{
		*y = -*y;
		*i = -*i;
	}
}
int multiply(int m, int y)
{
	int count = 0,i = 1;
	IfFun(&m, &y, &i);
	while ((y = add(y, -1))>=0)
		count = add(count,m);
	return (i < 0) ? -count : count;
}
int division(int m, int y)
{
	int count = 0, i = 1;
	IfFun(&m, &y, &i);
	swap(&m,&y);
	int d = -y;//����һ���̶��ĸ�ֵ��ģ�����
	while ((m = add(m, d))>=0)
		count = add(count, 1);
	return (i < 0) ? -count : count;
}
void print(int* a, int* b)
{
	printf("����������:");
	scanf("%d%d", a, b);
	swap(a, b);
}
int main()
{
	int a, b, input, end;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			print(&a, &b);
			end = add(a, b);
			printf("%d\n", end);
			break;
		case 2:
			print(&a, &b);
			end = add(a, b);
			printf("%d\n", end);
			break;
		case 3:
			print(&a, &b);
			end = multiply(a, b);
			printf("%d\n", end);
			break;
		case 4:
			print(&a, &b);
			end = division(a, b);
			printf("%d\n", end);
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("�Ƿ�����,�������룡\n");
		}
	} while (input);
	int count = multiply(a, b);
	/*int count = division(a, b);*/
	return 0;
}

#define SPACE ' '
int main()
{
	char ch;
	ch = getchar();
	while(ch != '\n')
	{
		if (ch == SPACE)
			putchar('\n');
		else
			putchar(ch);
		ch = getchar();//��ȡ��һ���ַ�
	}
	putchar(ch);//��ӡ�����ַ���
	return 0;
}

int main()
{
	int x = 0, n = 0;
	scanf("%d", &n);
	int temp = 0;
	while (n)
	{
		temp = temp * 10 + n % 2;
		n /= 2;
	}
	while (temp)
	{
		x = x * 10 + temp % 10;
		temp /= 10;
	}
	printf("%d", x);
	return 0;
}

int main()
{
	int temp = 0, x = 0;
	scanf("%d", &x);
	while (x)
	{
		temp = temp * 10 + x % 10;
		x /= 10;
	}
	printf("%d", temp);
}