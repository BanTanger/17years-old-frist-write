//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
//struct BstNode {
//	int data;
//	BstNode* left;
//	BstNode* right;
//};
//
//BstNode* GetNewNode(int data)
//{
//	BstNode* newNode = new BstNode();
//	newNode->left = newNode->right = NULL;
//	newNode->data = data;
//	return newNode;
//}
//BstNode* Insert(BstNode* root,int data)
//{
//	if (root == NULL) root = GetNewNode(data);
//	else if (data <= root->data) return Insert(root->left, data);
//	else  return Insert(root->right, data);
//	return root;
//}
//int MinFind(BstNode* root)
//{
//	if (root == NULL) {
//		cout << "��Ϊ��";
//		return -1;
//	}
//	//����
//	/*BstNode* current = root;
//	while (current->left != NULL)
//		current = current->left;
//	return current->data;*/
//	//�ݹ�
//	else if (root->left == NULL)
//		return root->data;
//	return MinFind(root->left);
//}
//int main()
//{
//	BstNode* root = NULL;
//	root = Insert(root, 15); root = Insert(root, 45); root = Insert(root, 13);
//	root = Insert(root, 18); root = Insert(root, 4); root = Insert(root, 9);
//	int Min = MinFind(root);
//	cout << Min;
//}