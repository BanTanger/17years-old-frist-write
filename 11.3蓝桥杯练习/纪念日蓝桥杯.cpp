//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	int days = 0;
//	cout << "������ݵĸ�ʽ��20030914\n";
//	cin >> n >> m;
//	int year1 = n / 10000, year2 = m / 10000;
//	//�ȼ�����Щ���ж����죬���������ƽ�ꡣ
//	for (int i = year1+1; i <= year2; i++) {
//		//�����ж�
//		if (((i % 100 != 0) && (i % 4 == 0)) || (i % 400 == 0))
//			days += 366;
//		else days += 365;
//	}
//	//���������
//	int day1 = n % 10000, day2 = m % 10000;
//	//��λ���жϣ�����λ����ͻ��Զ����ԣ�����Ϊ�˱�����10�����ϳ���
//	int Sub = day1 > day2 ? (day1 - day2) : (day2 - day1);
//	days -= Sub;
//	int time = days * 24 * 60;
//	cout << time;
//}