#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

//int main()//�㷨�����⣬�߼�����
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if ((i % 1 == 0) || (i % i == 0))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\nһ����%d������\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++){
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1.�Գ�����13  ��2-12��������������������=0��ɹ�
//		int j = 0;
//		for (j = 2; j < i; j++){
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i){
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n��100��200�У����е�������%d��\n", count);
//	return 0;
//}

//int main(void)
//{
//    printf("��ǰ���¹⣬\n");
//    printf("���ǵ���˪��\n");
//    printf("��ͷ�����£�\n");
//    printf("��ͷ˼���硣\n");
//
//}

//===============================��ӡ����==================================
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++){
		//�ж�����
		//1.�ܱ�4���������ܱ�100����������
		//2.�ܱ�400����������
		/*if (year%4==0 && year%100!= 0){	
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0){
			count++;
			printf("%d ", year);
		}*/
		//============================��һ���Ż�д��=============================
		/*if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 400 == 0)))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n��1000�굽2000�깲�е��������Ϊ��%d\n", count);
	return 0;
}*/

//===============================�����Լ��===============================
//int main()
//{
//	int i = 0; 
//	int m = 0; int n = 0;
//	scanf("%d %d", &m, &n);
//	for (; i == 0;)
//	{
//		i = m % n;
//	    m = n;  n = i;
//	}
//	printf("���Լ��Ϊ��%d\n", n);
//	return 0;
//}

//=======================��ӡ���ı���===============================
//int main()
//{
//	int i = 0;
//	for (; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//=======================�Ƚ��������Ĵ�С===========================
//int main(void)
//{
//	int a; int b; int c;
//	a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int min= a < b && a < c ? a : (b < a && b < c ? b : c);
//	int max= a > b && a > c ? a : (b > a && b > c ? b : c);
//	int mid = (a + b + c )- (max + min);
//	printf("%d %d %d\n",max,mid,min);
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if(a < b)
//	{
//		int tmp = a;
//		 a = b;
//		 b = tmp;
//	}
//    if(a<c)
//	{
//		int tmp = a;
//		 a = c;
//		 c = tmp;
//	}
//	if(b < c)
//	{
//		int tmp = b;
//		 b = c;
//		 c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 3;
//	if (a > b)
//	{
//		printf("a\n");
//	}
//}

//int main(){
//	printf("������3���������\n");
//	int i = 1;
//	char password[20] = { 0 };
//	for (; i <= 3; i++){
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "1290288968") == 0){
//			printf("��¼�ɹ�\n");
//				break;
//		}
//		else{
//			printf("�������\n");
//			if (i <= 3){
//				int j = 3 - i;
//				printf("����ʣ��%d�λ���\n", j);
//			}
//			if (i == 3)
//				printf("��������������˳�����\n");
//		}
//	}
//	return 0;
//}
// 
// int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (; i <= 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//scanf����ȡֵ��Ҫ�õ�ȡ��ַ&����password������ǵ�ַ�����Բ���
//		if (strcmp(password, "1290288968") == 0)
//			//�ȺŲ��������ж������ַ�����ԣ�Ӧ��ʹ�ÿ⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//				break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//		return 0;
//}

//int main()
//{
//	char arr1[] = "My Name Is BanTanger!!!!";
//	char arr2[] = "########################";
//	int n = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = n - 2;//�ַ����Դ�'\0',������Ҫ'\0'�������±�Ҫ��ȥ2.
//	//int right = strlen(arr1) - 1;//strlenר�ż����ַ�����
//	//while (left <= right)
//	//{
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	printf("%s\n", arr2);
//	//	Sleep(1000);//��Ϣһ�룬��λΪ���롣����ͷ�ļ�windows
//	//	left++;
//	//	right--;
//	//}
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ�룬��λΪ���롣����ͷ�ļ�windows
//		system("cls");//clean sceen
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ѱ��7
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ع��ж��ٸ�
//	int left = 0;//���±�
//	int right = sz-1;//���±ꡣszΪԪ�ظ�����sz-1��Ϊ���ҵ��±�
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("�Ҳ���\n");
//	}
//	return 0;
//}

//====================�޷����Ĵ���=======================�����==========
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//дһ�����룬��arr�����������ҵ�7���±�
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//
//	}
//	if (i == sz)
//	{
//		printf("�ܱ�Ǹ���������ֵ����\n");
//	}
//	return 0;
//}
// 
// int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//дһ�����룬��arr�����������ҵ�7���±�
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i]);
//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//		break;
//	}
//	if (i == sz)
//	{
//		printf("�ܱ�Ǹ���������ֵ����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for(j=0; j < 10;j++ )
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i)
//	{
//		i++;
//	}
//}
//
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int n = 1;
//	while (n)
//	{
//		i = n++;
//		j = i * n;
//		printf("%d \n", j);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//    scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("�׳�Ϊ = %d\n", ret);
//	return 0;
//}

//int main()//�Ż�
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n = 1;n <= 3;n++)
//	{
//		ret = ret * n;
//		sum = ret+ sum;	
//	}
//	printf("�ۼӵĺ�Ϊ��%d\n", sum);
//	return 0;
//}
//// 
//// int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n = 1;n <= 3;n++)
//	{
//		ret = 1;
//	 for (i = 1; i <= n; i++)
//	 {
//		ret = ret * i;//forѭ���ظ���һ��������Ҫ��ʼ����ret��ֵ��
//	 }
//		sum = ret+ sum;
//		
//	}
//	printf("�ۼӵĺ�Ϊ��%d\n", sum);
//	return 0;
//}