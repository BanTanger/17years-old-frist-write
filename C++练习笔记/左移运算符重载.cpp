//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
////Ŀ�ģ�ͨ��cout<<pʵ�ִ�ӡp�����������Ե�ֵ��
//
//	//ͨ������������Ϊ˽�У�ͨ����Ԫ�����ʡ�
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	/*void operator<<(Person& p) {
//		
//	}*/
//
//	/*int m_A;
//	int m_B;*/
//	Person(int a, int b) {
//		m_A = a;
//		m_B = b;
//	}
//private:
//	int m_A;
//	int m_B;
//};
//
//ostream& operator<<(ostream &cout,Person& p) {
//	cout << "m_A = " << p.m_A << "m_B = " << p.m_B ;
//	return cout;//��ʽ���ص�˼��
//}
//void test() {
//	Person p(10,10);
//	/*p.m_A = 10;
//	p.m_B = 10;*/
//
//	cout << p << endl;
//}
//int main() {
//	test();
//}