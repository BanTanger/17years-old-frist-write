//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<assert.h>
//using namespace std;
//
////�����ʵ��
//class Point {
//public:
//	Point() :m_x(0), m_y(0) { count++; }
//	Point(int x, int y) :m_x(x), m_y(y) { count++; }//���캯��������ʼ����
//	~Point() { count--; }//���������ĵ��á�
//	static void getcount() {
//		cout << count << endl;
//	}
//	int move(int newX, int newY) {
//		m_x = newX;
//		m_y = newY;
//	}
//private:
//	int m_x;
//	int m_y;
//	static int count;
//};
////��̬�����ʵ��
//class ArrayOfPoint {
//public:
//	ArrayOfPoint(int size) :size(size) {
//		points = new Point[size];
//	}
//	~ArrayOfPoint() {
//		cout << "Delect...." << endl;
//		delete[]points;
//	}
//	Point& element(int index) {
//		assert(index >= 0 && index <= size);
//		return points[index];
//	}
//private:
//	int size;
//	Point* points;//ָ��Point����׵�ַ����public��ʵ��Point�������ʵ�֣���̬�����ڴ�
//};
//int Point::count = 0;//����ʵ�־�̬��Ա�����ĳ�ʼ����
//int main() {
//	int n = 0;
//	Point a(4, 3);
//	//cout << "input" << endl;
//	//cin >> n;//�����ĸ���
//	/*for (int i = 0; i < n; i++) {
//		int x, y;
//		cin >> x >> y;
//		Point(x, y);
//	}
//	Point b(a);
//	Point::getcount();*/
//	cout << "input";
//	cin >> n;//�����ĸ���
//	ArrayOfPoint points(n);//�����������
//	points.element(0).move(5, 0);//���������±�Ϊ0��Ԫ�ء�
//	points.element(1).move(10, 5);//���������±�Ϊ1��Ԫ�ء�
//	
//}
