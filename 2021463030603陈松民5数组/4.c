//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////#include<stdbool.h>
////#define MAX 20
////#define MAXi 2
////#define MAXj 2
////int main()
////{
////	int max,maxj,maxi,i,j,count = 0;//ͨ��һ��������������¼if��ִ�����
////	/*int arr[MAX][MAX];*/
////	int arr[MAXi][MAXj] = { 1,7,4,1 };
////	bool flag;
////	
////	/*scanf("%d%d", &n, &m);
////	for (i = 0; i < n; i++) {
////		for (j = 0; j < m; j++) {
////			scanf("%d", &arr[i][j]);
////		}
////	}*/
////	for (i = 0; i < MAXi; i++) {
////		max = arr[i][0]; maxj = 0; maxi = 0; count = 0;//��ʼ����
////		for (j = 0; j < MAXj; j++) {
////			if (arr[i][j] > max) {
////				max = arr[i][j];
////				maxj = j;
////				maxi = i;
////				//�����ź��кű��棻
////			}
////		}
////		flag = true;
////		for (int k = 0; k < MAXi; k++) {
////			if (max > arr[k][maxj]) {
////				flag = false;
////				count++;
////				//ͨ��һ��������������¼if��ִ�����
////			}
////		}
////		if (count == 0)//ifִ����Σ��ʹ�������������С�ġ�
////			break;
////	}
////	if (flag) {
////		printf("%d %d\n", maxi+1, maxj+1);
////	}
////	else
////		printf("�����ڸ�������Ԫ��\n");
////}
//
//#include<stdio.h>
//#include<stdbool.h>
//#define MAX 20
//#define MAXi 4
//#define MAXj 4
//int main()
//{
//	int max, maxj, i, j;
//	/*int arr[MAX][MAX];*/
//	int arr[MAXi][MAXj] = { 1 ,7 ,4 ,1 ,4, 8, 3, 6,1, 6, 1, 2,0, 7, 8, 9 };
//	bool flag;
//
//	/*scanf("%d%d", &n, &m);
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}*/
//	for (i = 0; i < MAXi; i++) {
//		max = arr[i][0]; maxj = 0; //��ʼ����
//		for (j = 0; j < MAXj; j++) {
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//				maxj = j;
//				//�����ź��кű��棻
//			}
//		}
//		flag = true;
//		for (int k = 0; k < MAXi; k++) {
//			if (max > arr[k][maxj]) {
//				flag = false;
//			}
//		}
//		if (flag) {
//			printf("%d %d\n",i + 1, maxj + 1);
//			break;
//		}
//	}
//	if(!flag)
//		printf("�����ڸ�������Ԫ��\n");
//}