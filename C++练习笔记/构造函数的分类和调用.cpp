//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
////���캯���ķ���͵���
////���� �޲ι��죨Ĭ�Ϲ��죩���вι���
////     ��ͨ���캯�����������캯��
//class Person {
//public:
//	int age;
//	Person() {
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person() {
//		cout << "Person��������������" << endl;
//	}
//	Person(int a) {
//		age = a;
//	}
//	//����
//	Person(const Person& p) {
//		age = p.age;
//	}
//};
////����
//void test()
//{
//	//1.���ŷ�
//	Person p;//Ĭ�Ϲ��캯������
//	Person p1(10);//�вι��캯��
//	Person p2(p1);//�������캯��
//
//	//ע������
//	//����Ĭ�Ϲ��캯������Ҫ�ӣ������ᱻ��������
//	Person p();
//
//	cout << "p1 �������ǣ�" << p1.age << endl;
//	cout << "p2 �������ǣ�" << p2.age << endl;
//	//2.��ʾ��
//	Person p1;
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//
//	//Person(10);//���������ص㣬��ǰ��ִ�н�����ϵͳ���������յ���������
//
//	//��Ҫ���ÿ������캯������ʼ��һ����������Person(p3)==Person p3
//
//	//3.��ʽת����
//	//Person p4 = 10;
//	//Person p4 = 10 == Person p4 = Person (10);
//}
//int main()
//{
//	test();
//}