//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> result;
//        sort(nums.begin(), nums.end());//��������
//        for (int i = 0; i < nums.size(); i++) {
//            if (nums[i] > 0) return result;//����0 0 0���
//
//            if (i > 0 && nums[i] == nums[i - 1]) { continue; }//ȥ�ش���
//            //Ϊ�˱�֤ -1 -1 2 ����������ԣ�������nums[i] == nums[i-1];
//            //�����ܱ�֤nums�г��ֶ��һ����ֵ������һ�ε������
//            //�����nums[i] == nums[i+1] ��һ�ζ��㲻��
//
//            //����˫ָ�롣
//            int left = i + 1;
//            int right = nums.size() - 1;
//            while (left < right) {
//                if (nums[left] + nums[right] + nums[i] > 0) {
//                    //����ֵ���ˣ��ƶ�rightָ��
//                    right--;
//                }
//                else if (nums[left] + nums[right] + nums[i] < 0) {
//                    //����ֵС�ˣ��ƶ�leftָ��
//                    left++;
//                }
//                //�ҵ�ֵ
//                else {
//                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
//                    // ȥ���߼�Ӧ�÷����ҵ�һ����Ԫ��֮��
//                    while (right > left && nums[right] == nums[right - 1]) right--;
//                    while (right > left && nums[left] == nums[left + 1]) left++;
//
//                    // �ҵ���ʱ��˫ָ��ͬʱ����
//                    right--;
//                    left++;
//                }
//            }
//        }
//        return result;
//    }
//
//};
//int main() {
//	
//}

#include<iostream>
using namespace std;

int main() {
	int a[][3] = { 1,2,3,4,5,6,7 };
	static int b[][3] = { 1,2,3,4,5,6,7 };
	cout << a[2][2] << b[2][2];
}