//#include<iostream>
//#include<string>
//using namespace std;
//
//class Date {
//public:
//	Date(int x = 0, int y = 0, int z = 0) :year (x),month (y),day (z) {}//��ʼ���б�
//	Date(Date& d);//��������
//	void setdate();
//	void showdate();
//private:
//	int year, month, day;
//};
//Date::Date(Date& d) {
//	year = d.year;
//	month = d.month;
//	day = d.day;
//}
//void Date::setdate() {
//	int a, b, c;
//	cout << "�������� ";
//	cin >> a >> b >> c;
//	year = a;
//	month = b;
//	day = c;
//}
//void Date::showdate() { cout << year << " ��" << month << " ��" << day << " ��" << endl; }
//
//class People {
//public:
//	People(Date bd,long int nb,long int idnb,string sx);
//	People(People& p);
//	void setpeople();
//	void showpeople();
//private:
//	int m_number;
//	string m_sex;
//	Date birthday;
//	int m_id;
//};
//People::People(Date bd, long int nb = 0, long int idnb = 0,string sx = "��") : birthday(bd) {//�̳�
//	birthday = bd;
//	m_number = nb;
//	m_sex = sx;
//	m_id = idnb;
//}
//People::People(People& p) :birthday(p.birthday) {
//	m_id = p.m_id;
//	m_number = p.m_number;
//	m_sex = p.m_sex;
//	birthday = p.birthday;
//}
//void People::setpeople() {
//	Date a;
//	long int b, c;
//	string d;
//	a.setdate(); 
//	cout << "���� :";cin >> b;
//	cout << "id:";cin >> c;
//	cout << "�Ա� :";cin >> d;
//	cout << endl;
//	birthday = a;m_number = b;m_id = c;m_sex = d;
//}
//void People::showpeople()
//{
//	cout << "number" << m_number << endl;
//	cout << "idnumber" << m_id << endl;
//	cout << "sex" << m_sex << endl;
//	cout << "birthday";
//	birthday.showdate();
//}
//void test() {
//	Date b;
//	b.setdate();
//	People p1(b);
//	p1.setpeople();
//	People p2(p1);
//	p1.showpeople();
//}
//int main() {
//	test();
//}