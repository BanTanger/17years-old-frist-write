//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
//assign��ֵ����
//void test() {
//	string str1;
//	str1.assign("wdnmd");
//
//	string str2;
//	str2.assign("hello C++", 5);
//	cout << str1 << str2 << endl;
//}
//�ַ�ƴ��append������
//void test2() {
//	string str3 = "��";
//	str3 += "������Ϸ";
//	cout << str3 << endl;
//
//	string str4 = "I";
//	str4.append(" love ");
//	cout << str4 << endl;
//
//	str4.append("game ajdkwn", 4);
//	cout << str4 << endl;
//
//	str4.append(str3);
//	cout << str4 << endl;
//
//	string str2 = "LOL DNF";
//	str4.append(str2, 0, 3);//��str3�ĵ�0��Ԫ�ؿ�ʼ����ȡ����Ԫ��
//	cout << str4 << endl;
//
//	str4.append(str2, 4, 3);
//	cout << str4 << endl;
//	�൱��python�����Ԫ���÷�
//}
//
//����find
//void test3() {
//	string str5 = "abcdefgde";
//	int position = str5.find("de");
//	if (position == -1)
//		cout << "û���ҵ�";
//	cout << position << endl;
//
//	rfind�����������
//	find�������ұ���
//	position = str5.rfind("de");
//	cout << position << endl;
//}
//
//�滻
//void test4() {
//	string str6 = "abcdefg";
//
//	��1��λ����3���ַ����滻��12345
//	str6.replace(1, 3, "12345");
//	cout << str6 << endl;
//}
//
//�ȽϺ���compare����
//void test5() {
//	string str7 = "hello";
//	string str8 = "hello";
//
//	if (str7.compare(str8) == 0)
//		cout << "����" << endl;
//	else if(str7.compare(str8)>0)
//		cout << "����" << endl;
//
//	�ص��ж��ַ����Ƿ���ȡ�
//	strcmp���ܱȽ�string
//}
//
//at���ʵ���Ԫ��
//void test6() {
//	string str8 = "hello";
//	ͨ��[]�����ʵ���Ԫ��
//	for (int i = 0; i < 5; i++) {
//		cout << str8[i] << " ";
//	}
//	cout << endl;
//	ͨ��at������
//	for (int i = 0; i < 5; i++) {
//		cout << str8.at(i) << " ";
//	}
//	cout << endl;
//	�޸ĵ����ַ�
//	str8[0] = 'X';
//	cout << str8 << endl;
//
//	str8.at(1) = 'X';
//	cout << str8 << endl;
//}
//
//�ַ����Ĳ����ɾ��
//void test7() {
//	string str9 = "hello";
//
//	����
//	str9.insert(1, "111");
//	cout << str9 << endl;
//
//	ɾ��
//	str9.erase(1, 3);
//	cout << str9 << endl;
//}
//
//substr������ȡ�ַ����ִ�����Ƭ������
//void test8() {
//	string str10 = "abcdef";
//
//	string subStr = str10.substr(1, 3);
//
//	cout << subStr << endl;
//}
//
//ʵ��ʹ��substr��Ƭ�����ĳ�����
//void test9() {
//	string email = "zhangsanlisi@qq.com";
//
//	int pos = email.find("@");
//	cout << pos << endl;
//
//	string usrName = email.substr(0, pos);
//	cout << usrName << endl;
//}
//int main() {
//	test();
//	test2();
//	test3();
//	test4();
//	test5();
//	test6();
//	test7();
//	test8();
//	test9();
//}