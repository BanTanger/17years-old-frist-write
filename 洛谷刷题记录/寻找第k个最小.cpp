//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
////void merget(int arr[], int left, int mid, int right);
////void mergetSort(int arr[], int left, int right);
////int main() {
////	//�鲢����
////	int* arr; 
////	int n, m;
////	cin >> n >> m;
////	arr = new int[n + 1];
////	for (int i = 0; i < n; i++) 
////		cin >> arr[i];
////	mergetSort(arr, 0, n - 1);
////	/*for (int i = 0; i < n; i++)
////		cout << arr[i]<<" ";*/
////	cout << arr[m] << endl;
////}
////void merget(int arr[], int left, int mid, int right) {
////	int queue[123456] = { 0 };//����һ����ʱ�����������Ԫ�ء�
////	//Ѱ���������һ�����±�
////	int L_pos = left;
////	//Ѱ���Ұ�����һ�����±�
////	int R_pos = mid + 1;
////	//�����ʱ������±ꡣ
////	int pos = left;
////
////	while (L_pos<=mid&&R_pos<=right) {
////		if (arr[L_pos] < arr[R_pos])
////			queue[pos++] = arr[L_pos++];
////		else
////			queue[pos++] = arr[R_pos++];
////	}
////	while(L_pos <= mid)
////			queue[pos++] = arr[L_pos++];
////	while(R_pos <= right)
////			queue[pos++] = arr[R_pos++];
////	while (left <= right)
////	{
////		arr[left] = queue[left];
////		left++;
////	}
////}
////void mergetSort(int arr[], int left, int right) {
////	if (left >= right)
////		return;
////	int mid = (left + right) / 2;
////	mergetSort(arr, left, mid);
////	mergetSort(arr, mid + 1, right);
////	merget(arr, left, mid, right);
////}
//
////STL�⣬nth����element��������ͷ�ļ�algorithm��
////#include<algorithm>
////#define MAX 50000
////int arr[MAX];
////int main() {
////	int n, m;
////	cin >> n >> m;
////	for (int i = 0; i < n; i++)
////		cin >> arr[i];
////	nth_element(arr, arr + m, arr + n);
////	//for (int i = 0; i < n; i++)
////		cout << arr[m] << " ";
////}
//
//
////����
//int x[5000005], k;
//void qsort(int l, int r)
//{
//	int i = l, j = r, mid = x[(l + r) / 2];
//	do
//	{
//		while (x[j] > mid)
//			j--;
//		while (x[i] < mid)
//			i++;
//		if (i <= j)
//		{
//			swap(x[i], x[j]);
//			i++;
//			j--;
//		}
//	} while (i <= j);
//	//���ź����鱻����Ϊ���飺 l<=j<=i<=r
//	if (k <= j) qsort(l, j);//��������ֻ��Ҫ��������
//	else if (i <= k) qsort(i, r);//��������ֻ��Ҫ��������
//	else //������м�����ֱ�����
//	{
//		printf("%d", x[j + 1]);
//		exit(0);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d%d", &n, &k);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &x[i]);
//	qsort(0, n - 1);
//}