#define _CRT_SECURE_NO_WARNINGS 1

#include"ͨѶ¼.h"

//����ʵ��
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//��ʼ��ͨѶ¼���������ֻ��0��Ԫ�ء�
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", ps->data[ps->size].name);
		printf("�������Ա�>");
		scanf("%s", ps->data[ps->size].sex);
		printf("���������䣺>");
		scanf("%s", &ps->data[ps->size].age);
		printf("�������ַ��>");
		scanf("%s", ps->data[ps->size].addr);
		printf("������绰��>");
		scanf("%s", ps->data[ps->size].tele);
		/*printf("���������֣�>");
		scanf("%s", ps->data[ps->size].name);
		printf("���������֣�>");
		scanf("%s", ps->data[ps->size].name);*/

		ps->size++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//��ӡ����
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//��ӡ����
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);//���������ǵ�ַ�����Բ���ȡ��ַ
	//1.����Ҫɾ��������ʲôλ��
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
			//�ҵ�λ��������
		}
	}
	//2.ɾ��
	if (i == ps->size)
	{
		printf("Ҫɾ�����˲�������\n");
	}
	else
	{
		int j = 0;
		for (j = i; j < ps->size - 1;j++)
		//��ʱi����Ҫɾ���˵ĵ�ַ��
		//���ǽ�i��ֵ��j������ʵ��ָ��λ�õĲ���
		//��Ϊ���ǵ�һ��Ԫ�أ�����ps.size - 1
		{
			ps->data[j] = ps->data[j + 1];
			//ͨ����һ��Ԫ�ؽ�ǰһ��Ԫ�������ǣ������Ϳ���ʵ��ɾ��
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}