//#define _crt_secure_no_warnings 1
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////����������k��x��������һЩ����������浽vector<int>�У�
////�����ҵ���x�Ĳ�Ϊ��С�ĵ�k�������Ұ������������
////�������������x�Ĳ�ֵ��ͬ������ѡ�����ݽ�С���Ǹ���
////k��ֵΪ��������������С�ڸ�����������ĳ���
//int main() {
//	int k, x,i;
//	vector<int> arr(10);//�����������
//	cin >> x >> k;
//	for (i = 0; i < 10; i++) {
//		cin >> arr[i];
//	}
//	nth_element(arr.begin(), arr.begin() + k, arr.end());
//	int min = arr[0];
//	int minposi = 0;
//	for (i = 0; i < 10; i++) {
//		if (arr[i] - x >= 0 && arr[i] - x <= min) {
//			min = arr[i] - x;
//			minposi = i;
//		}
//	}
//	cout << "��kС������" << k + minposi << endl;
//}