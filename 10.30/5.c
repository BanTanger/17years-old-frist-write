//#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int H = 0;
//	int n = 0;
//	int ret = 0;
//	int count = 0;
//	printf("���屾��ʵ�������");
//	scanf("%d", &H);
//
//	printf("���屾��ʵ���ڶ��ٴ�ֹͣͳ��");
//
//	scanf("%d", &n);
//
//	while (H > 0)
//	{
//		H /= 2;
//		ret += H;
//		count++;
//		if (n == count)
//			break;
//	}
//	if (H == 0 || n != count)
//		printf("Hֵ��С��n����\n");
//	else
//		printf("��%d��ʱ�߹���·����%d,��%d�η����ĸ߶���%d", n, ret, n, H);
//	return 0;
//}