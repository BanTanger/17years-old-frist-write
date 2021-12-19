#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0)); // ʹ��vector����һ����ά����
        int startx = 0, starty = 0; // ����ÿѭ��һ��Ȧ����ʼλ��
        int loop = n / 2; // ÿ��Ȧѭ�����Σ�����nΪ����3����ôloop = 1 ֻ��ѭ��һȦ�������м��ֵ��Ҫ��������
        int mid = n / 2; // �����м��λ�ã����磺nΪ3�� �м��λ�þ���(1��1)��nΪ5���м�λ��Ϊ(2, 2)
        int count = 1; // ������������ÿһ���ո�ֵ
        int offset = 1; // ÿһȦѭ������Ҫ����ÿһ���߱����ĳ���
        int i, j;
        while (loop--) {
            i = startx;
            j = starty;

            // ���濪ʼ���ĸ�for����ģ��ת��һȦ
            // ģ��������д�����(����ҿ�)
            for (j = starty; j < starty + n - offset; j++) {
                res[startx][j] = count++;
            }
            // ģ��������д��ϵ���(����ҿ�)
            for (i = startx; i < startx + n - offset; i++) {
                res[i][j] = count++;
            }
            // ģ��������д��ҵ���(����ҿ�)
            for (; j > starty; j--) {
                res[i][j] = count++;
            }
            // ģ��������д��µ���(����ҿ�)
            for (; i > startx; i--) {
                res[i][j] = count++;
            }

            // �ڶ�Ȧ��ʼ��ʱ����ʼλ��Ҫ���Լ�1�� ���磺��һȦ��ʼλ����(0, 0)���ڶ�Ȧ��ʼλ����(1, 1)
            startx++;
            starty++;

            // offset ����ÿһȦ��ÿһ���߱����ĳ���
            offset += 2;
        }

        // ���nΪ�����Ļ�����Ҫ�������������м��λ�ø�ֵ
        if (n % 2) {
            res[mid][mid] = count;
        }
        return res;
    }
};
int main() {
    vector<vector<int>> test;
    Solution solution;
    int n;
    cin >> n;
    solution.generateMatrix(n);
    for (int i = 0; i < test.size(); i++) {
        for (int j = 0; j < test[0].size(); j++) {
            cout << test[i][j] << endl;
        }
    }
}