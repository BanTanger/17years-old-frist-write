#define _CRT_SECURE_NO_WARNINGS 1
#define MAXSTUDENTSTRINGLEN 20
#define MAXSTUDENTNUMBER 100
#define PAGESIZE 3
#include "func.h"
struct Student {
	int id;	//ѧ��
	char name[MAXSTUDENTSTRINGLEN]; 		//����
	char sex[MAXSTUDENTSTRINGLEN];		//�Ա��л�Ů
	char classes[MAXSTUDENTSTRINGLEN];		//�༶
	int totalScore;		//�ܳɼ�
};

struct Student students[MAXSTUDENTNUMBER];//ȫ���Ա
int peopleNumber = 0;//ȫ��ѧ������
int maxld = 0;//ȫ��ѧ�������ѧ��
//�������µ�ѧ��ʱ��maxId+=1��������ѧ����id����Ϊ�µ�maxId
extern int minTotalscore; //ȫ��ѧ��������ܷ֡�
extern int maxTotalscore;//����ܷ�
extern int avgTotalscore;//ƽ���ܷ�
int change;
//��ʾѧ�������Ƿ����޸ġ�
//ֵΪ1��ʾ���޸ģ���Ҫ����ͳ��ĳЩ���ݣ�
//ֵ0��ʾ���޸ģ���������֮ǰ��ͳ�����ݡ�

void addfunc() {
	do {
		printf("����������id,�������Ա𡢰༶,������\n");
		scanf("%d%s%s%s%d", &students[peopleNumber].id,&students[peopleNumber].name, &students[peopleNumber].sex, &students[peopleNumber].classes,&students[peopleNumber].totalScore);
	} while (checkData(peopleNumber) == 0);
	peopleNumber++;	//ѧ��������1
	maxld++;
	printf("���ѧ���ɹ���\n");
}

void changefunc() {
	int id, i;

	//1.������޸ĵ�ѧ��ѧ��
	printf("��������Ҫ�޸�ѧ����ѧ�ţ�");
	scanf("%d", &id);

	//2.��ѯѧ�����޸Ļ�������
	for (i = 0; i < peopleNumber; i++) {
		if (students[i].id == id) {
			//2.1����޸�ǰ��ѧ������
			printf("�޸�ǰ��ѧ�����ݣ�%s��%s��%s��\n", students[i].name, students[i].sex, students[i].classes);

			//2.2�޸Ĳ�������ݣ����Ϸ��������޸�
			do {
				fflush(stdin);//��ռ��̻�����
				printf("��ӱ���ѧ����ʾ����������Ϊ�գ��Ա�Ϊ�л�Ů��רҵ����Ϊ�գ�\n");
				printf("              �༶����Ϊ��\n");
				printf("����������Ա�����������Ա�רҵ���༶��\n");
				scanf("%s%s%s", students[i].name, students[i].sex, students[i].classes);
			} while (checkData(i) == 0);

			//2.3��ʾ�޸ĳɹ����ݼ��޸ĺ������
			change = 1;		//���޸�
			printf("�޸ĳɹ���\n");
			printf("�޸ĺ��ѧ�����ݣ�%s��%s��%s��\n", students[i].name, students[i].sex, students[i].classes);
			return;
		}
	}
	//3.��ѧ�������ڣ�����ʾ�޸�������
	printf("�����ڸ�ѧ�ţ�\n");
}
void deletefunc() {
	int id;
	printf("����Ҫɾ����ѧ��id");
	scanf("%d", &id);
	for (int i = 0; i < id; i++) {
		if (i == id) {
			for (int j = id; j < maxld; j++) 
				students[j] = students[j + 1];
			peopleNumber--;
		}
	}
}
void lookfunc() {
	int id;
	printf("����Ҫ�鿴��ѧ��id");
	scanf("%d", &id);
	printf("%d,%s,%s,%s,%s,%d", students[id].id, students[id].classes, students[id].name, students[id].sex, students[id].totalScore);
}
void findfunc() {
	
}
void sortfunc() {
	//����ѧ�����ܷ֣��Ӵ�С
	int id = 0;
	for (int j = 0; j < peopleNumber - 1; j++) {
		for (int i = 0; i < peopleNumber - j - 1; i++) {
			if (students[i].totalScore < students[i + 1].totalScore) {
				struct Student tmp = students[i];
				students[i] = students[i + 1];
				students[i + 1] = tmp;
			}
		}
	} 
	for (int i = 0; i < peopleNumber; i++) {
		printf("%d,%s,%s,%s,%d", students[i].id, students[i].classes, students[i].name, students[i].sex, students[i].totalScore);
		printf("\n");
	}
}
void statisticsfunc();




//�������ܣ����ѧ�������Ƿ���ȷ
//����˵����index��������ѧ���������е��±�
//����ֵ��  ��ȷ����1�����󷵻�0��
int checkData(int index)
{
	int right = 1, length;

	//����������������Ȳ���Ϊ�գ�Ҳ���ܴ���9
	length = strlen(students[index].name);
	if (length <= 0 || length >= 9) {
		printf("���������������Ȳ���Ϊ�գ�Ҳ���ܴ���9��\n");
		right = 0;
	}

	//����Ա�ֻ�����л�Ů
	if (strcmp(students[index].sex, "��") != 0 && strcmp(students[index].sex, "Ů") != 0) {
		printf("�Ա����ֻ�����л�Ů��\n");
		right = 0;
	}

	//���༶���༶����Ϊ��
	if (strlen(students[index].classes) < 1) {
		printf("�༶���󣺰༶����Ϊ�գ�\n");
		right = 0;
	}

	return right;	//���ؼ������1����ȷ��0������
}