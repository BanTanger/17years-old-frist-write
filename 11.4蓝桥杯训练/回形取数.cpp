#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, i = 0, j = 0, L = 0;
//	cout << "�����к���";
//	cin >> n >> m;
//	int arr[3][3];
//	//int barr[200];
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	while (L < m * n) {//L��Ϊ����������
//		//���£� 
//		for (i = 0; arr[i][j] > 0 && i < m;) {
//			//barr[n] = arr[i][j];
//			cout << arr[i][j] << " ";
//			arr[i][j] = 0;//ÿ�δ�ӡ��������
//			L++; i++;
//		}
//		j++;
//		//���ң� 
//		for (j = 0; arr[i][j] > 0 && j < n;) {
//			//barr[n] = arr[i][j];
//			cout << arr[i][j] << " ";
//			arr[i][j] = 0;//ÿ�δ�ӡ��������
//			L++; j++;
//		}
//		i++;
//		for (i = n; arr[i][j] > 0 && i >= 0;) {
//			//���ϣ� 
//			//barr[n] = arr[i][j];
//			cout << arr[i][j] << " ";
//			arr[i][j] = 0;//ÿ�δ�ӡ��������
//			L++; i--;
//		}
//		j--;
//		for (j = m; arr[i][j] > 0 && j >= 0;) {
//			//����
//			//barr[n] = arr[i][j];
//			cout << arr[i][j] << " ";
//			arr[i][j] = 0;//ÿ�δ�ӡ��������
//			L++; j--;
//		}
//		i++;
//	}
//	return 0;
//}

/*
������ϰ ����ȡ��
��������
��������ȡ�������ؾ���ı�ȡ��������ǰ������������ȡ���Ѿ�ȡ��������ת90�ȡ�һ��ʼλ�ھ������Ͻǣ��������¡�
�����ʽ
���������һ��������������200��������m, n����ʾ������к��С�������m��ÿ��n����������ʾ�������
�����ʽ
�������ֻ��һ�У���mn������Ϊ����������ȡ���õ��Ľ������֮����һ���ո�ָ�����ĩ��Ҫ�ж���Ŀո�
��������
3 3
1 2 3
4 5 6
7 8 9
�������
1 4 7 8 9 6 3 2 5
��������
3 2
1 2
3 4
5 6
�������
1 3 5 6 4 2
*/
#include <stdio.h>
#include <string.h>

#define MAX_N 200
int m, n;
int a[MAX_N][MAX_N], b[MAX_N][MAX_N];//�¶���һ������;
int s = 0;
void solve(int i, int j)
{
    if (i < m && i >= 0 && j < n && j >= 0 && b[i][j] == 0)
    {
        printf("%d ", a[i][j]);
        b[i][j] = 1;
    }
    else
    {
        s++;
        return;
    }
    if (s % 4 == 0)
        solve(i + 1, j);
    if (s % 4 == 1)
        solve(i, j + 1);
    if (s % 4 == 2)
        solve(i - 1, j);
    if (s % 4 == 3)
        solve(i, j - 1);
    if (s % 4 == 0)
        solve(i + 1, j);
    if (s % 4 == 1)
        solve(i, j + 1);
    if (s % 4 == 2)
        solve(i - 1, j);
    if (s % 4 == 3)
        solve(i, j - 1);

    return;
}

int main()
{
    memset(b, 0, sizeof(b));//������飻
    scanf("%d%d", &m, &n);
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    solve(0, 0);
    puts("");
    return 0;
}