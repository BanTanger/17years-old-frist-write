//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////��������������
////void Swap(int& a, int& b) {
////	int tmp = a;
////	a = b;
////	b = tmp;
////}
////
////int main()
////{
////	int a = 10, b = 20;
////	Swap(a, b);//���ô��ݣ��βλ�����ʵ��
////	cout << "a = " << a << endl;
////	cout << "b = " << b << endl;
////}
//
//
////�����������ķ���ֵ
////1.��Ҫ���ؾֲ�������
////int& test01() {
////	int a = 10;//�ֲ�������ֵ������ջ������������֮��ͻᱻ�ͷţ�
////	return a;
////}
////
//////2.�����ĵ��ÿ�����Ϊ��ֵ
////int& test02()
////{
////	static int a = 10;//staticʹ�ֲ��������ȫ�ֱ�����
////	return a;
////}
////int main() {
////	int& ref1 = test01();//����һ�����ñ���ȥ���պ�����ֵ��
////	cout << "ref1 = " << ref1 << endl;
////	cout << "ref1 = " << ref1 << endl;
////
////	int& ref2 = test02();
////	cout << "ref2 = " << ref2 << endl;
////	cout << "ref2 = " << ref2 << endl;
////
////	//��Ϊ��ֵ
////	test02() = 1000;
////	cout << "ref2 = " << ref2 << endl;
////	cout << "test02 = " << test02() << endl;
////}
//
////��ӡ���ݺ�����ֻ�Ǵ�ӡ����ϣ��ȥ�ı�ʵ��ֵ��
//void showValue(const int &a)
//{
//	//a = 1000;
//	cout << a;
//}
//
////�������� ���������βη�ֹ�������
//int main()
//{
//	//int a = 10;
//	//�﷨�� int temp = 10��const int& ref = temp;
//	//const int& ref = 10;
//	//int& ref = 10;//���ñ���Ҫ��һ��Ϸ��ڴ棻
//	//ref = 20;
//	
//
//	int a = 100;
//	showValue(a);
//}