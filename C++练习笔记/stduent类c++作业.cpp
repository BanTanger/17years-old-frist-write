//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////Ҫ�󣺶���һ��student�࣬�������ݳ�Ա����score��
////��������̬���ݳ�Ա�ܷ�total��ѧ������count��
////��Ա����scoretotalcount��double s���������÷�����
////���ֺܷ��ۼƵ�ѧ����������̬��Ա����sum�������ڷ����ܷ�
////��̬��Ա����average����������ƽ��ֵ��
//class Student {
//public://�ⲿ���ʽӿ�
//	Student(int score) :score(score) { count++; }//���캯����
//	Student(const Student& p) :score(p.score) { count++; }//�������캯��
//	~Student() { count--; }
//	int Score() { return score; }
//	double scoretotalcount(double s);
//	static void getofnum() {
//		cout << "�ܹ��� " << count << "��ѧ��" << endl;
//	}
//	static double sum(Student stu[]) {
//		double sumScore = 0;
//		for (int i = 0; i < count; i++)
//			sumScore += stu[i].Score();
//		return static_cast<double>(sumScore);
//	}
//	static double average(Student stu[]) {
//		double averageScore = 0;
//		for (int i = 0; i < count; i++)
//			averageScore += stu[i].Score() / count;
//		return static_cast<double>(averageScore);//���������ת���������ﲢ����Ҫ��ֻ������һ��
//	}
//private:
//	double score;
//	static int total;
//	static int count;
//};
//double Student::scoretotalcount(double s) {
//	//���÷���
//	return s;
//}
//int Student::count = 0;
//int Student::total = 0;//��̬��Ա���ݳ�ʼ������ʵ�֡�������Ϊ�޶���
//int main() {
//	Student s[3] = { Student(92),Student(92),Student(65) };
//	Student::getofnum();
//	cout << Student::average(s) << endl;
//	cout << Student::sum(s) << endl;
//}