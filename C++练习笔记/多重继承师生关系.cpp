//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Data {
//	//����
//public:
//	Data(string name):name(name) {}//���ݳ�Ա��ʼ��
//	string Name() { return name; }//˽�г�Ա���ⲿ�ӿ�
//	void Print() {
//		cout << "name = " << Name() << endl;//�ⲿ�ӿ���Ϊ��ӡֵ������Ҳ������name˽�г�Ա
//	}
//private:
//	string name;
//};
//class Teacher :virtual public Data{//����࣬�������������﹫�еģ�����ֻ��Ҫ�̳�һ��
//public:
//	//����Ĺ��캯�����������л�����Ϣ��
//	Teacher(string name, float sal = 0) :Data(name),sal(sal) {}
//	//�����������Ĭ�Ϻ��������ڼ̳е�������Ĺ��캯��ҲҪ��������ĳ�ʼ��
//	float Sal() { return sal; }
//	void Print() {
//		cout << " name = " << Name() << " sal = " << Sal() << endl;
//	}
//private:
//	float sal;
//};
//class Student :virtual public Data{
//public://ͬteacher���ע��
//	Student(string name, int id = 0) :Data(name),id(id) {}
//	int Id() { return id; }
//	void Print() {
//		cout << " name = " << Name() << " id = " << Id() << endl;
//	}
//private:
//	int id;
//};
//class Postgrad :virtual public Student {
//public://���캯����������̳и�������������Ϣ
//	Postgrad(string name, int id, string dn) :Data(name), Student(name, id),dn(dn) {}
//	string Dn() { return dn; }
//	void Print() {
//		cout << " name = " << Name() << " dn = " << Dn() << endl;
//	}
//private:
//	string dn;
//};
//class Tpost :virtual public Teacher, virtual public Postgrad {
//public:
//	Tpost(string name, int id, string dn, float sal) :Data(name), Postgrad(name,id,dn), Teacher(name, sal) ,Student(name,id){}
//	void Print() {
//		//��ӡ�̳еĸ��ຯ������Ҫ���������ռ����޶�����һ����ӡ������
//		//�������������ִ�ӡ���ε����Σ���֪����ô����
//		Postgrad::Print();
//		Teacher::Print();
//	}
//};
//void test() {
//	/*Data* sp;
//	sp = new Teacher ("�", 60000);
//	//����������ʹ��new����Ҫ�ú�ȥ��ϰ��
//	sp->Print();
//	delete sp;
//	sp = new Tpost("����", 2021463030603,"�����", 50000);
//	sp->Print();
//	delete sp;*/
//
//	Tpost t1("zhangsan", 2021463030603, "jisuanji", 50000);
//	t1.Print();
//	Teacher t2("lisi", 60000);
//	t2.Print();
//}
//int main() {
//	test();
//}