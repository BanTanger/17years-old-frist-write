//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	struct ListNode* Next;
//	ListNode(int v) :val(v), Next(NULL) {}//���캯�������
//};
//class Solution {
//public:
//	ListNode* removeElements(ListNode* head, int val) {
//		//ɾ��ͷ�ڵ�
//		while (head != NULL && head->val == val) { // ע�����ﲻ��if
//			//��Ϊ�����ж��ͷ�ڵ�ֵ��ͬ������������Ҫ��whileѭ���жϡ�
//			ListNode* tmp = head;//��һ����ʱ���������ͷ�ڵ㣬��ʱ���ͷ���ʱ�����ﵽɾ��ͷ�ڵ��Ч����
//			head = head->Next;
//			delete tmp;
//		}
//		//ɾ����ͷ�ڵ�
//		ListNode* current = head;
//		while (current->Next != NULL && current != NULL) {
//			//����������Ծ���ʣ���Ҫ�Ե�ǰ�ڵ����ͺ�����ָ����������жϡ�
//			if (current->Next->val == val) {
//				//��ǰ�ڵ����ڵ��ֵ����Ҫɾ����ֵ����
//				ListNode* tmp = current->Next;
//				current->Next = current->Next->Next;//�ı䵱ǰ�ڵ�ָ��ָ����ڵ㡣
//				delete tmp;//ɾ����ڵ㡣
//			}else {
//				current == current->Next;//����ǰ����
//			}
//		}
//		return head;//����ͷ�ڵ����ں����Ĵ�ӡ�����룬����ȵȲ�����
//	}
//};
////����ͷ�ڵ������
//class Solution {
//	ListNode* removeElements(ListNode* head, int val) {
//		ListNode* dummyHead = new ListNode(0);// ����һ������ͷ���
//		dummyHead->Next = head;// ������ͷ���ָ��head���������������ɾ������
//		ListNode* current = dummyHead;
//		while (current != NULL && current->Next != NULL) {
//			if (current->Next->val == val) {
//				ListNode* tmp = current->Next;
//				current->Next = current->Next->Next;
//				delete tmp;
//			}
//			else {
//				current = current->Next;
//			}
//		}
//		head = dummyHead->Next;
//		delete dummyHead;
//		return head;
//	}
//};
