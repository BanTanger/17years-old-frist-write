//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building {
//	friend void goodGay(Building* building);//��Ԫ
//public:
//	Building() {
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//public:
//	string m_SittingRoom;//����
//private:
//	string m_BedRoom;//����
//};
////ȫ�ֺ���
//void goodGay(Building* building) {
//	//*����&����˼�Ǵ���һ������ȥ������������
//	//��ʵ�����Ͼ���ָ�룬���Ե��ú���Ӧ�ô��ݵ�ַ
//	cout<<"�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout<<"�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//int main() { test01(); }