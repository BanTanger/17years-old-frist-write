//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//class Preson {
//public:
//	Preson() {
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Preson(int a) {
//		cout << "Person���вι��캯������" << endl;
//		m_age = a;
//	}
//	Preson(const Preson& p) {
//		cout << "Person�Ŀ������캯������" << endl;
//		m_age = p.m_age;
//	}
//	~Preson() {
//		cout << "Person��������������" << endl;
//	}
//	
//	int m_age;
//};
////1.ʹ��һ���Ѿ������Ķ�������ʼ��һ���¶���
//void test() {
//	Preson p1(20);
//	Preson p2(p1);
//	cout<<"P2�������� " << p2.m_age << endl;
//}
//
////2.ֵ���ݷ�ʽ������������ֵ
//void doWork(Preson p) {
//
//}
//void test02() {
//	Preson p;
//	doWork(p);
//}
//
////3.ֵ��ʽ���ؾֲ�����
//Preson doWork2() {
//	Preson p1;
//	return p1;
//}
//void test03() {
//	Preson p = doWork2();
//}
//int main()
//{
//	//test02();
//	test03();
//}