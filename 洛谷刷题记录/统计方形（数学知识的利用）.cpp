//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n, m;
//	cin >> n >> m;
//	//���еķ�����
//	int SquarenessAll = n * m * (n + 1) * (m + 1) / 4;
//	//����������
//	int SquareAll = 0;
//	//�����εĸ�������С�߽�min��n,m�������߽�max��n,m����ͨ��forѭ��ȥ�ݼ��߳�
//	//�����α߳�һ��ʼ�������С�߽磬Ȼ�󲻶ϵݼ���1.
//	for (int i = 0; i < n; i++) 
//		SquareAll += (min(n, m) - i) * (max(n, m) - i);
//	//���г�����
//	int RectangleAll = SquarenessAll - SquareAll;
//
//	cout << SquareAll << " " << RectangleAll << endl;
//}