#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;
//int a[100], b[100];
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> a[i];
//	nth_element(a, a, a + N);
//	int j = 0;
//	for (int i = 0; i < N; i++)
//		if (a[i] != a[i + 1]) {
//			b[j] = a[i];
//			j++;
//		}
//	cout << j << endl;
//	for (int i = 0; i < j; i++)
//		cout << b[i]<<" ";
//}

//set��������
//set������˼�壬������ѧ�ϵļ��ϡ���ÿ��Ԫ�����ֻ����һ�Σ�����set�е�Ԫ���Ѿ���С�����ź���
//ͷ�ļ���#include < set >
//#include<set>
//set<int>s;
//int a[105];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		s.insert(a[i]);
//	}
//	cout << s.size() << endl;
//	while (!s.empty())
//	{
//		cout << *s.begin() << " ";           //ע��˴����÷�
//		s.erase(s.begin());
//	}
//	return 0;
//}

//sort�����bool�����ж�

bool b[100]; int a[100];
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int N, M = 0,tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (b[tmp] == 1) continue;
		b[tmp] = 1;
		a[M++] = tmp;
	}
	sort(a, a + M);
	cout << M << endl;
	for (int i = 0; i < M; i++)
		cout << a[i]<<" ";
}