//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//using namespace std;
//
////int main()
////{
////	string digits[10] = {"","","shi","bai","qian","wan","bai","qian","yi","shi"};
////	string number[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
////	string str ;//�±��Ӧ���С���һ������
////	cin >> str;
////	int l = str.length();
////	for (int i = 0; i < l; i++) {
////		int num = str[i] - '0';//�ַ�ת������ֵ
////		if (num == 0) {
////			if (i + 1 < l && str[i + 1] != '0')
////				cout << number[num] << " ";
////		}
////		else if ((l - i == 2 || l - i == 8 || l - i == 10)&& num == 1)
////			cout << digits[l - i] << " ";
////		else
////			cout << number[num] << " " << digits[l - i]<<" ";
////	}
////
////}
//
//int main()
//{
//	string digits[11] = { "","","ʮ","��","ǧ","��","ʮ","��","ǧ","��","ʮ" };
//	string number[10] = { "��","Ҽ","��","��","��","��","½","��","��","��" };
//	string str;//�±��Ӧ���С���һ������
//	cin >> str;
//	int len = str.length();
//	for (int i = 0; i < len; i++) {
//		int num = str[i] - '0';//�ַ�ת������ֵ
//		//int num = str[i] ;//�ַ�ת������ֵ
//		//num == 0�����⴦��
//		if (num == 0) {
//			//��λ����ֻ��һ�Ρ�
//			if (i + 1 < len && str[i + 1] != '0')
//				cout << number[num] << " ";
//		}
//		else if ((len - i == 2 || len - i == 6 || len - i == 10) && num == 1)
//			cout << digits[len - i] << " ";//len - i����λ��ָ���ƶ���
//		else
//			//���ּ�λ��.
//			cout << number[num] << " " << digits[len - i] << " ";
//	}
//
//}