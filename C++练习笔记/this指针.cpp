//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//
//class Person {
//public:
//	Person(int age) {
//		this->age = age;
//	}
//	//Person& PersonAddAge(Person& p) {
//	//	this->age += p.age;
//	//	return *this;//��ʱthisָ�����p2����
//	//}//ͨ�����÷��ص��Ǳ�����󣬶��������þͻᴴ����һ���µĶ���
//	Person PersonAddAge(Person& p) {
//		this->age += p.age;
//		return *this;//��ʱthisָ�����p2����
//	}
//	int age;
//};
//
////1.������Ƴ�ͻ
//void test() {
//	Person p(18);
//	cout << "p������Ϊ��" << p.age << endl;
//}
//
////2.���ض�������*this
//void test2() {
//	Person p1(10);
//	Person p2(10);
//	//p2.PersonAddAge(p1);//�������캯����ʼ��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2������Ϊ��" << p2.age << endl;
//}
//
//int main()
//{
//	//test();
//	test2();
//}