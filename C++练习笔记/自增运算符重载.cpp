#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//���ص��������

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger& myint);
public:
	MyInteger() {
		m_Num = 0;
	}
	//����ǰ��++
	MyInteger& operator++() {
		m_Num++;
		//�����������һ�������Ĳ�����ʹ�÷���ֵ��һ
		
		return *this;//������Ϊ����
		//��������&��Ϊ��ȷ��һֱ��һ�����ݽ��е���������
	}
	//���غ���++
	MyInteger operator++(int) {//int����ռλ������������������ǰ�úͺ��õ���
		//�� ��¼��ʱ�ṹ��
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼�ṹ�����ء�
		return temp;
		//���ﲻ�ܷ�������&����Ϊ*this�Ƿ��ھֲ�����temp��ġ�
		//���˺���֮��ջ���ᱻ���գ��޷�Ѱַ�ٷ��ʻ�ȥ��
	}

	//���õ���һ��Ҫ����ֵ��ǰ�õ���һ��Ҫ���ص�ַ
private:
	int m_Num;
};
//�����������������ʹ��ȫ�ֺ���
ostream& operator<<(ostream& cout, MyInteger& myint) {
	cout << myint.m_Num;
	return cout;
}
void test() {
	MyInteger myint;

	cout << ++myint << endl;
	cout << ++(++myint) << endl;
}
void test02() {
	MyInteger myInt;

	cout << myInt++ << endl;
}
int main() {
	//test();
	test02();

}