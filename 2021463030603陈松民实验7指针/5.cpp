//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<algorithm>
//using namespace std;
///*��дһ��C����ʵ�����¹��ܣ�
//����n���˵���ߣ�Ȼ���n������ѡ����߲�ֵ��С����������Ϊ���ǣ������ֵ��ͬ�Ļ���ѡȡ������ߵ������ˣ���Ҫ������������ǵ���ߡ�
//*/
//#define MAX 500
//void func(int* arr, int n, int* a, int* b) {
//	int min = abs(a - b);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			//��ֵ��ͬ
//			if (abs(arr[i] - arr[j]) < min) {
//				min = abs(arr[i] - arr[j]);
//				*a = arr[i];
//				*b = arr[j];
//			}
//			//��ֵ��ͬ
//			else
//			{
//				*a = arr[n - 2];//��ס��\0���Ĵ���
//				*b = arr[n - 1];
//			}
//		}
//	}
//}
//int main() {
//	int n, arr[MAX];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int a, b;//����������ֵ��С���ˣ��ٶ�Ϊ�����0��1Ԫ��
//	a = arr[0], b = arr[1];
//	sort(arr, arr + n);
//	func(arr, n,&a,&b);
//	printf("%d %d", a, b);
//}