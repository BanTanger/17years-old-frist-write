//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int v) :val(v), next(NULL) {}
//};
//class Solution {
//public:
//    //�����汾
//    ListNode* reverseList(ListNode* head) {
//        ListNode* cur = head;
//        ListNode* pre = NULL;
//        while (cur) {
//            ListNode* tmp = cur->next;//�����ڵ㣬֮��Ҫ���ǡ�
//            cur->next = pre;
//            pre = cur;//pre����ƶ�һ��
//            cur = tmp;//�õ�֮ǰ�����cur.next
//        }
//        return pre;//��ʱpreλ��ǰ��������λ�ã��������ͷλ�á�
//    }
//    //�ݹ�汾
//    ListNode* reverse(ListNode* prev, ListNode* cur) {
//        if (cur == NULL)return prev;//��
//        ListNode* tmp = cur->next;
//        cur->next = prev;
//        // ���Ժ�˫ָ�뷨�Ĵ�����жԱȣ����µݹ��д������ʵ��������������
//        // prev = cur;
//        // cur = tmp;
//        return reverse(cur, tmp);
//    }
//    ListNode* reverseList(ListNode* head) {
//        // ��˫ָ�뷨��ʼ����һ�����߼�
//        // ListNode* cur = head;
//        // ListNode* pre = NULL;
//        return reverse(NULL,head);
//    }
//};