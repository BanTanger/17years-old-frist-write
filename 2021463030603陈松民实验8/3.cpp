#define _CRT_SECURE_NO_WARNINGS 1
/*��дһ��C����ʵ�����¹��ܣ�
����һ��ѧ���ṹ��Student(��ѧ�š����������䡢���)
��һ������sort(struct Student *p)��
�ú���ʹ��ѡ�����򷨰�������С��������
��������������10��ѧ����ѧ�š��������������ߣ�
����sort������ѧ����������������������ѧ��ȫ����Ϣ��
*/
#define MAX 20
#include<stdio.h>
static int n;
struct Student {
	int id;
	char Name[MAX];
	int age;
	float tell;
};
void Sort(Student *p) {
	//ѡ�������������䡣
	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < n - i -1; j++) {
			if (p[j+1].age < p[j].age) {
				Student tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) 
		printf("%d\t%s\t%d\t%f\t\n", p[i].id,p[i].Name, p[i].age, p[i].tell);
}
int main() {
	Student stu[MAX];
	printf("Ҫ����ѧ������ĸ�����");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("����ѧ��id:");
		scanf("%d", &stu[i].id);
		printf("����ѧ������:");
		scanf("%s", &stu[i].Name);
		printf("����ѧ������:");
		scanf("%d", &stu[i].age);
		printf("����ѧ�����:");
		scanf("%f", &stu[i].tell);
	}
	Sort(stu);
}