//#define _CRT_SECURE_NO_WARNINGS 1
///*��дC���Դ��룬ʵ�����¹��ܣ�
//��N��ѧ����ÿ���˵���Ϣ����ѧ�š�
//���������ġ���ѧ��Ӣ�ƽ���ֵ����ݣ��ýṹ���ʾ ����
//���ƽ��������������2��ѧ����Ϣ��
//*/
//#define MAX 20
//#include<stdio.h>
//struct Student {
//	int id;
//	char Name[MAX];
//	float Chinese;
//	float English;
//	float Math;
//	float average;
//};
//void Swap(float max, float average) {
//	float tmp;
//	tmp = max;
//	max = average;
//	average = tmp;
//}
//int main() {
//	//���������ƽ�ַ�������
//	Student stu[MAX];
//	int n;
//	printf("����Ҫ������ѧ���������\n");
//	scanf("%d", &n);//��Ҫ�������ٸ�ѧ������
//	for (int i = 0; i < n; i++) {
//		/*printf("ѧ��id��");
//		scanf("%d", &stu[i].id);*/
//		printf("ѧ��������");
//		scanf("%s", &stu[i].Name[MAX]);
//		printf("���ĳɼ���");
//		scanf("%f", &stu[i].Chinese);
//		printf("Ӣ��ɼ���");
//		scanf("%f", &stu[i].English);
//		printf("��ѧ�ɼ���");
//		scanf("%f", &stu[i].Math);
//		stu[i].average = (stu[i].Chinese + stu[i].English + stu[i].Math) / 3;
//	}
//	for (int i = 0; i < n - 1; i++) {
//		float max = stu[i].average;
//		bool flag = true;//�ٶ�һ��ʼ������������
//		for (int j = 0; j < n - i - 1; j++) {
//			if (max < stu[j].average) {
//				Swap(max, stu[i].average);
//				flag = false;//���ݽ���֤��������
//			}
//			if (flag == true)
//				break;//��һ��û�����ݽ���֤�������Ѿ���ȫ��������ѭ����
//		}
//	}
//	printf("�����ڶ���ѧ����ƽ����Ϊ %.2f \n", stu[n-1].average);//�����ڶ���ѧ����ƽ���֣�
//}