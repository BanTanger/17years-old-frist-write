//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Cube {
//public:
//	//����
//	void setH(int H) {
//		m_H = H;
//	}
//	void setL(int L) {
//		m_L = L;
//	}
//	void setW(int W) {
//		m_W = W;
//	}
//
//	int getH() {
//		return m_H;
//	}
//	int getL() {
//		return m_L;
//	}
//	int getW() {
//		return m_W;
//	}
//	//��Ϊ
//	//��ȡ���
//	int calculateS() {
//		return (m_L * m_W + m_H * m_L + m_H * m_W) * 2;
//	}
//	//��ȡ���
//	int calculateV() {
//		return (m_L * m_W * m_H);
//	}
//
//	//���ó�Ա�����ж������������Ƿ����
//	bool isSameByClass(Cube c) {
//		if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW())
//			return true;
//		else return false;
//	}
//private:
//	int m_L;
//	int m_H;
//	int m_W;
//};
//
//bool isSame(Cube& c1, Cube& c2) {
//	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
//		return true;
//	return false;
//}
//int main()
//{
//	//����һ�����������
//	Cube c1;
//	c1.setH(10);
//	c1.setW(10);
//	c1.setL(10);
//
//	//cout << "�����" << c1.calculateS() << endl;
//	//cout << "�����" << c1.calculateV() << endl;
//	Cube c2;
//	c2.setH(10);
//	c2.setW(10);
//	c2.setL(12);
//
//	bool ret = isSame(c1,c2);
//	if (ret)
//		cout << "���" << endl;
//	else
//		cout << "�����" << endl;
//}