//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	static void func() {
//		m_A = 100;//��̬��Ա�������Է��ʾ�̬�ĳ�Ա����
//		m_B = 100;//��̬��Ա���������Է��ʷǾ�̬��Ա����
//		cout << "static void func�ĵ���" << endl;
//	}
//	static int m_A;//��̬��Ա�������������������ʼ��
//	int m_B;
//
//	//��̬��Ա�����з���Ȩ�ޣ�
//private:
//	static void func2() {
//		cout << "static void func2�ĵ���" << endl;
//	}
//};
//int Person::m_A = 0;//��ʼ������
////���ַ��ʷ�ʽ
//void test() {
//	//1.ͨ������������
//	Person p;
//	p.func();
//	//2.ͨ������������
//	Person::func();
//
//	//
//	Person::func2();//������ʲ���˽�о�̬������Ա��
//}
//int main() {
//	test();
//}