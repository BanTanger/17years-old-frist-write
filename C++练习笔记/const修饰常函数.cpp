//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ����Ա��޸ĵģ�
//	//this == Person* const this ȷ��ָ��ָ��
//	//void showPerson() == const Person* const this ȷ��ָ��ָ����ֵҲ�������޸�
//	void showPerson()const
//	{
//		//this -> m_A = 100;
//		//this = NULL;//thisָ�벻�����޸�ָ��ָ��
//		this->m_B = 100;
//	}
//	void func() {
//		
//	}
//	int m_A;
//	mutable int m_B;//����������ڳ������У�ͨ��mutable�ؼ��ʡ�
//};
//void test() {
//	Person p;
//	p.showPerson();
//}
////������
//void test2() {
//	const Person p;
//	p.m_A = 100;
//	p.m_B = 100;
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	p.func();
//}
//int main()
//{
//	test();
//}