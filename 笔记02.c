#include<stdio.h>

int main()
{
	//����Ԫ�ظ���
	//����������ռ�ֽ�/����Ԫ����ռ�ֽڡ�
	int arr[10] = { 0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(int);
	printf("%d\n",sz);
}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof int);
//
//
//}

//int main()
//{
//	//(2����)λ����
//	//& ��λ��
//	//| ��λ��
//	//^ ��λ���
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a << 1;//<<���Ʋ�������>>���Ʋ�������
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;//ȡģ ��ӡ����Ϊ����  5/2  ��ӡ����Ϊ��
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);//���±����Ԫ��
//	//arr[�±�]
//	//char ch[20];
//	int i=0;
//	while (i < 10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//
//	return 0;

//}


//#define _CRT_SECURE_NO_WARNINGS //

//=================================������===============================
//int main()
//{
//	int num = 0;
//	{
//		
//		printf("%d\n", num);
//	}
//	
//}
//==============================�ⲿ������==============================
//int main()
//{
//	//extern int g_val;
//	printf("g_val = %d/n", g_val);
//	return 0;

//}





//=================================�����������ĺ�=======================================
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum ;
//	//�������� ʹ�����뺯��
//	//scanf_s("%d%d", &num1, &num2);//&ȡ��ַ����
// sum = ADD(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int a = 10;
//
//int main()
//{
//	/*{
//		int a = 10;
//	}*/
//	printf("%d\n", a);
//	return 0;
//}
//
////����ԭ���ֲ�����ֻ���ھֲ���Χ��ʹ��


//int a = 100;
//
//int main()
//{
//	int a = 10;//������ͬ���ֲ����ȡ�
//	//�ֲ�������ȫ�ֱ��������ֲ�Ҫ��ͬ�����׳�bug
//	printf("%d\n", a);
//
//}
//




//int num = 20;//ȫ�ֱ��� �����ڴ����{}֮��ı���
//
//int main()//���������������ڣ�main'��������ֻ��һ��
//{
//
//	int num1 = 10;//�ֲ������������ڴ����֮��


	//short age = 20;
	//float weigth = 95.6f;//ϵͳĬ��Ϊ˫����ֵ���������ֺ����f
	
	//printf("%d\n", sizeof(char));//�ַ���������		
	//printf("%d\n", sizeof(short));//������	
	//printf("%d\n", sizeof(int));//����
	//printf("%d\n", sizeof(long));//������  �п�����4/8  C���Թ涨long���ڵ���int
	//printf("%d\n", sizeof(long long));//����������
	//printf("%d\n", sizeof(float));//�����ȸ�����
	//printf("%d\n", sizeof(double));//˫���ȸ����� 


	
	//�ֽ�  ������еĵ�λ  bit ����λ(��С��λ)  byte �ֽ� 
	//kb  mb  gb  tb  pb  ����Ϊ1024
	
//	return 0;
//
//}







//ԭ����д����
/*  #include<stdio.h>
   int main(void)
{
	return 0
}*/

//int������
//printf  �⺯����c������Դ�����Ҫ���ã������Ҫ#include<stdio.h>
//#include<stdio.h>   <>����Ҫ�У����á����� std��׼��standard��i��input �� o��output

//%d,��ӡ����
//%c,��ӡ�ַ�
//%f,��ӡ�����ͣ�С��
//%p,�Ե�ַΪ��ʽ��ӡ
//%x����ӡ16���ƴ�ӡ

//{
// float f = 5.0;
// printf("%f\n", f);
// 
//
//
// return 0;
//}


//===========================================================
