#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
int main(int argc, char* argv[])
{
	FILE* out, * in;//���������ļ�ָ��
	int ch;
	char name[LEN];//�洢�����ļ���
	int count = 0;
	//��������в���
	if (argc < 2)
	{
		fprintf(stderr, "usage:%s filename\n", argv[0]);
		exit(1);//�쳣�˳�
	}
	//ʵ������
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "i couldn't open the file \"%s\"\n",argv[1]);
		exit(2);
	}
	//ʵ�����
	strcpy(name, argv[1]);//���ļ������Ƶ�������
	strcat(name, ".red");//�ļ�����Ӻ�׺��red.��
	if ((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "can't create output file.\n");
		exit(3);
	}
	//�������� 
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out);
	//��β����
	if (!fclose(in) || !fclose(out))
		fprintf(stderr, "error in closing files\n");
	return 0;
}
