//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	for (int i = a; i <= b; i++){
//		printf("%ld=", i);
//		int m = i, n = 2;
//		while (n <= sqrt(i)){
//			if (m % n == 0) {
//				m /= n;
//				if (m > 1) {
//					printf("%ld*", n);
//					//continue;
//				}
//				if (m == 1)printf("%ld\n", n);
//				//���m���������ʹ�ӡ���һ�ε�n�սᡣ
//			}
//			n++;
//		}
//		if (m > 1 && m <= i)printf("%ld\n", m);//��������ӡ��������ӡ���ܾ���
//		if (m == 1)printf("%d\n", i);//1�������������
//	}
//}