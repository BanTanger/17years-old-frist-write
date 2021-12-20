//#include<iostream>
//using namespace std;
//
//class MyListNode {
//public:
//	struct ListNode {
//		int val;
//		ListNode* Next;
//		ListNode(int v) :val(v), Next(NULL) {}
//	};
//	//����ĳ�ʼ��
//	MyListNode(){
//		_dummyHead = new ListNode(0);
//		_size = 0;
//	}
//	//��ȡ����index���ڵ���ֵ�����index�ǷǷ���ֱֵ�ӷ���-1�� ע��index�Ǵ�0��ʼ�ģ���0���ڵ����ͷ���
//	int get(int index) {
//		if (index > (_size - 1) || index < 0) {
//			return -1;
//		}
//		ListNode* cur = _dummyHead->Next;
//		while (index--) { // ���--index �ͻ�������ѭ��
//			cur = cur->Next;
//		}
//		return cur->val;
//	}
//	//ͷ�ڵ����Ԫ��
//	void AddOfHead(int val) {
//		ListNode* newNode = new ListNode(val);
//		newNode->Next = _dummyHead->Next;
//		_dummyHead->Next = newNode;
//		_size++;
//	}
//	//β�ڵ����Ԫ��
//	void AddOfTail(int val) {
//		ListNode* newNode = new ListNode(val);
//		ListNode* current = _dummyHead;
//		while (current->Next != NULL) {
//			current = current->Next;
//		}
//		current->Next = newNode;
//		//������Ϊ�ڹ��캯�����Ѿ�������ڵ�Ĭ��ָ����NULL,���Կ��Բ�����C����д��ָ��NULL
//		_size++;
//	}
//	//�������Ԫ��
//	void AddOfIndex(int index, int val) { 
//		//index�Ϸ��Լ���
//		if (index > _size) {
//			return;
//		}
//		ListNode* newNode = new ListNode(val);
//		ListNode* current = _dummyHead;
//		//��current�ڵ�ָ������ͷ�ڵ㣬�ﵽindex==0ʱ�����Ԫ����ͷ�ڵ�֮��
//		while (index--) {
//			current = current->Next;
//		}
//		newNode->Next = current->Next;
//		current->Next = newNode;
//		_size++;
//	}
//	//ɾ������
//	void deleteIndex(int index) {
//		//��ɾ����λ���ж�
//		if (index > _size || index < 0) {
//			return;
//		}
//		ListNode* current = _dummyHead;
//		while (index--) {
//			current = current->Next;
//		}
//		ListNode* tmp = current->Next;
//		current->Next = current->Next->Next;
//		delete tmp;
//		_size--;
//	}
//	//��ӡ����
//	void PrintListNode() {
//		ListNode* current = _dummyHead;
//		while (current->Next != NULL) {
//			cout << current->val << " ";
//			current = current->Next;
//		}
//		cout << endl;
//	}
//private:
//	int _size;
//	ListNode* _dummyHead;
//};