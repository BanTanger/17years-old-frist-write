#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Building;
class GoodGay {
public:
	GoodGay();
	void visit();//���Է���˽��
	void visit02();//���������˽��
	Building* building;
};
class Building{
	friend void GoodGay::visit();
	//��Ա������Ϊ��Ԫ��д��
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
Building::Building() {
	m_BedRoom = "����";
	m_SittingRoom = "����";
}
GoodGay::GoodGay() {
	building = new Building;
}
void GoodGay::visit() {
	cout << "visit���ڷ��� ��" << building->m_SittingRoom << endl;
	cout << "visit���ڷ��� ��" << building->m_BedRoom << endl;
}
void GoodGay::visit02() {
	cout << "visit���ڷ��� ��" << building->m_SittingRoom << endl;
	//cout << "visit���ڷ��� ��" << building->m_BedRoom << endl;
}
void test() {
	GoodGay gg;
	gg.visit();
	gg.visit02();
}
int main() {
	test();
}