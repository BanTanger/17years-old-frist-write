//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//#define MAX 5000
//struct Node {
//	double x, y, z;
//	bool operator <(const Node& other)const {
//		return z < other.z;//�߶�������/
//	}
//}NodeXYZ[MAX];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		scanf("%lf%lf%lf", &NodeXYZ[i].x, &NodeXYZ[i].y, &NodeXYZ[i].z);
//	}
//	sort(NodeXYZ, NodeXYZ + n);
//	//���ݸ߶ȴ�С�������������С�ں����أ�sort�����ڽṹ���ڲ����У���ʡʱ��
//	double distance = 0;
//	double cx = NodeXYZ[0].x, cy = NodeXYZ[0].y, cz = NodeXYZ[0].z;
//	for (int i = 0; i < n; i++) {
//		distance += sqrt(abs(cx - NodeXYZ[i].x) * abs(cx - NodeXYZ[i].x) 
//					   + abs(cy - NodeXYZ[i].y) * abs(cy - NodeXYZ[i].y) 
//					   + abs(cz - NodeXYZ[i].z) * abs(cz - NodeXYZ[i].z));//�����ŷ����þ���
//		cx = NodeXYZ[i].x;
//		cy = NodeXYZ[i].y;
//		cz = NodeXYZ[i].z;
//	}
//	printf("%.3lf\n", distance);
//}