//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int result = INT_MAX;//��ֹsubLength����int�����Χ10�ľŴη���
//        int sum = 0;
//        int i = 0; int j = 0;
//        int subLength = 0;
//        for (j = 0; j < nums.size(); j++) {
//            sum += nums[j];
//            while (sum >= target) {
//                subLength = j - i + 1;
//                result = result < subLength ? result : subLength;
//                //ͨ����Ŀ���ʽ������result�����subLength����������ͳ��ȣ�����result����INT_MAX;
//                sum -= nums[i++];//ͨ��whileѭ��ȥ����i��subLength
//            }
//        }
//        return result == INT_MAX ? 0 : result;
//        //�����жϣ�result == INTMAX����û�и��¡�˵��û���ҵ����ֵ��������
//    }
//};
