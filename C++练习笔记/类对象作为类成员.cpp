#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//�������Ϊ���Ա��ʱ�����ȵ��ó�Ա���
class Phone {
public:
	Phone(string pName) {
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}
	string  m_PName;

};
class Person {
public:
	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
		cout << "Person�Ĺ��캯������" << endl;
	}
	string m_Name;
	Phone m_Phone;
};
void test() {
	Person p("����","ƻ��MAX");
	cout << p.m_Name << "����" << p.m_Phone.m_PName<<endl;
	Person p1("����", "��Ϊ");
	cout << p1.m_Name << "����" << p1.m_Phone.m_PName << endl;
}
int main()
{
	test();
}