#define _CRT_SECURE_NO_WARNINGS 1
//#include<bits/stdc++.h>//����ͷҪ��������
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n; string s;
	cin >> n;
	cin >> s;
    int j = n - 1;
    int res = 0; //res����ͳ�ƽ����Ĵ���
    int flag = 0; //flag����ͳ�Ƴ��������������ַ�����

    for (int i = 0; i < j; i++) //iָ���ͷ�����������ڶ����ַ�
    {
        for (int k = j; k >= i; k--) //kָ��Ӻ�����ǰһֱ��iѰ�Һ�s[i]��ͬ��s[k]
        {
            if (k == i) //����Ҳ�����ͬ��
            {
                flag++;
                if (n % 2 == 0 || flag == 2) //impossible���������
                {
                    cout << "Impossible" << endl;
                    return 0;
                }
                res += n / 2 - i; //nΪ����ʱΨһһ�������γ��ֵ��ַ��Ƶ��м�Ĵ���
         //n/2-iһ������0�������������������λ�ã�������ұ߱���ǰ���iʱ���Ѿ������Ƶ��м��ˣ���aaaad  
            }
            else if (s[i] == s[k])
            {
                for (int l = k; l < j; l++)
                //kҲ��ָ���߹��ľ��룬ֻҪ��¼k��ֵ�Ϳ�������ѭ����ʹָ���ƶ�
                {
                    swap(s[l], s[l + 1]);//��s[k]����s[j]��  
                    res++;//ͳ�ƽ�������
                }
                j--; //��һ���ַ�����ĩβ��j��һ����ĩβָ����ǰ��һλ
      //�����´ν�����ĩβ��i��j���ʱ��ʱ�Ѿ��ǻ�������һ��forѭ���ͽ�����
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}

