#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//��װ��ӡ�����Ľӿ�
//�������õ�ԭ���漰�����ñ��ʣ���constָ�룬���Է�ֹ��ָ����޸�
//��������֮�����д�ж�����==�������дһ��=�ͻᱨ��
//ʹ������Ҳ����ִ���ٶȡ���ʡ�ռ�
void printVector(vector<int>&v1) {
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
}
void test() {
	vector<int>v1;//Ĭ�Ϲ��� �޲ι���

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	//ͨ�����䷽ʽ���й���
	vector<int>v2(v1.begin(), v1.end());
	//��������������������м��ֵ
	printVector(v2);

	//n��elem��ʽ����
	vector<int>v3(10, 100);//pos1 = ������pos2 = ��ֵ
	//10��100�ĳ�ʼ����
	printVector(v3);

	//��������
	vector<int>v4(v3);
	printVector(v4);
}

//��ֵ����assign
void test2() {
	vector<int>v5;
	for (int i = 0; i < 10; i++) {
		v5.push_back(i);
	}
	printVector(v5);

	vector<int>v6;
	v6.assign(10, 100);
	printVector(v6);

	v6.assign(v5.begin(),v5.end());
	printVector(v6);
}

//capacity����������vector����
//size������vector��С
//resize������ָ��vector�Ĵ�С
//empty���ж������Ƿ�Ϊ��
void test3() {
	vector<int>v7;
	for (int i = 0; i < 10; i++) {
		v7.push_back(i);
	}
	printVector(v7);

	if (v7.empty())//Ϊ�� ��������Ϊ��
		cout << "v7Ϊ��" << endl;
	else
	{
		cout << "v7��Ϊ��" << endl;
		cout << "v7������Ϊ��" << v7.capacity() << endl;
		cout << "v7�Ĵ�СΪ��" << v7.size() << endl;
	}

	//����ָ����С��
	v7.resize(15,100);//�������ذ汾������ָ��Ĭ�����ֵ�������������ǳ��������Ǳ���
	printVector(v7);//�������ָ���ı�ԭ�����ˣ�Ĭ����0�����
}

//�����ɾ��
//push_back().β��
//pop_back().βɾ
//insert.����
//erase.ɾ��
//clear.���
void test4() {
	vector<int>v8;
	for (int i = 0; i < 10; i++) {
		v8.push_back(i);
	}
	printVector(v8);

	//βɾ
	v8.pop_back();
	v8.pop_back();
	printVector(v8);

	//���� ����1�ǵ�����������2�ǲ���Ԫ��
	//����в���3���������ذ汾����ʱ����2�ǲ���Ԫ�صĸ���������3�ǲ���Ԫ��ֵ
	v8.insert(v8.begin(), 100);
	printVector(v8);

	v8.insert(v8.begin(), 2, 1000);
	printVector(v8);

	//ɾ��
	v8.erase(v8.begin());
	printVector(v8);

	v8.erase(v8.begin(), v8.end());
	printVector(v8);//�������Ԫ�� == v8.clear����
}

void test5() {
	vector<int>v9;
	for (int i = 0; i < 10; i++) {
		v9.push_back(i);
	}
	printVector(v9);
	vector<int>v10;
	for (int i = 10; i > 0; i--) {
		v10.push_back(i);
	}
	printVector(v10);

	cout << "����" << endl;

	v9.swap(v10);
	printVector(v9);
	printVector(v10);
}

void test6() {
	//swap��ʵ����;�����������ռ�
	
	vector<int>v11;
	for (int i = 0; i < 1000000; i++) {
		v11.push_back(i);
	}
	cout << v11.capacity() << endl;
	cout << v11.size() << endl;

	//��ʽ
	vector<int>(v11).swap(v11);//ʹ�������ʹ�Сһ������������
	cout << v11.capacity() << endl;
	cout << v11.size() << endl;
}

void test7() {
	vector<int>v12;

	//����reserveԤ���ռ�
	v12.reserve(1000000);
	int num = 0, * p = NULL;
	for (int i = 0; i < 1000000; i++) {
		v12.push_back(i);

		if (p != &v12[0]) {
			p = &v12[0];
			num++;
		}
	}
	cout << num << endl;

}
int main() {
	//test();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	//test7();
}
