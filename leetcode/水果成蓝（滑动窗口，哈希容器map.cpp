//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int totalFruit(vector<int>& tree) {
//        unordered_map<int, int> basket;//�����ϣ������������Ų�ͬ��ֵ
//        //�洢��ֵ�� <key, value> ���͵�Ԫ�أ����и�����ֵ�Լ���ֵ�������ظ����Ҹ������д洢�ļ�ֵ��������ġ�
//        //�����map��˵��map���Զ�����������unordered_map���ᡣ
//        int result = 0, len = 0;
//        int left = 0;
//        for (int i = 0; i < tree.size(); i++) {
//            basket[tree[i]]++;//Ͱ˼�롣
//            len++;
//            while (basket.size() > 2) {//��������Ͱ��ʱ��ļ�Ͱ������
//                basket[tree[left]]--;
//                if (basket[tree[left]] == 0) basket.erase(tree[left]);//ɾͰ��
//                left++;//Ͱ�����ƶ�һ����
//                len--;//���ٳ��ȡ�
//            }
//            if (result < len) {
//                result = len;
//            }
//        }
//        return result;
//    }
//};
//int main() {
//    int a[] = { 3,3,3,1,2,1,1,2,3,3,4 };
//    vector<int> tree(a, a + sizeof(a) / sizeof(int));
//    Solution solution;
//    cout << solution.totalFruit(tree) << endl;
//}