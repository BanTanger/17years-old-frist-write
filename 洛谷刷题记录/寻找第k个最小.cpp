//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
////void merget(int arr[], int left, int mid, int right);
////void mergetSort(int arr[], int left, int right);
////int main() {
////	//归并排序
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
////	int queue[123456] = { 0 };//定义一个临时数组用来存放元素。
////	//寻找左半区第一个的下标
////	int L_pos = left;
////	//寻找右半区第一个的下标
////	int R_pos = mid + 1;
////	//标记临时数组的下标。
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
////STL库，nth——element函数——头文件algorithm。
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
////快排
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
//	//快排后数组被划分为三块： l<=j<=i<=r
//	if (k <= j) qsort(l, j);//在左区间只需要搜左区间
//	else if (i <= k) qsort(i, r);//在右区间只需要搜右区间
//	else //如果在中间区间直接输出
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