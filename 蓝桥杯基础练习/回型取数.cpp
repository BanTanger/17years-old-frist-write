//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//#define MAX 20
//int main()
//{
//	int arr[MAX][MAX];
//	int i, j,n,m,ans = 0,x = 0,y = 0;//ans�ǲ���
//	cin >> n >> m;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	while (ans < n * m) {
//		while (x < n && arr[x][y] != -1) {//����
//			cout << arr[x][y] << " ";
//			arr[x][y] = -1;
//			ans++;
//			x++;
//		}
//		x--; y++;//x�����ص���y����������
//		while (y < m && arr[x][y] != -1) {//����
//			cout << arr[x][y] << " ";
//			arr[x][y] = -1;
//			ans++;
//			y++;
//		}
//		y--; x--;//x--������
//		while (x >= 0 && arr[x][y] != -1) {//����
//			cout << arr[x][y] << " ";
//			arr[x][y] = -1;
//			ans++;
//			x--;
//		}
//		x++; y--;//x�ص�
//		while (y >=0 && arr[x][y] != -1) {//����
//			cout << arr[x][y] << " ";
//			arr[x][y] = -1;
//			ans++;
//			y--;
//		}
//		x++; y++;
//	}
//}