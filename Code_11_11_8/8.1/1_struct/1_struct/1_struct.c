#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct student
{
	int num;//4
	char name[20];//20 - ��4��������
	char sex;//1 - ����1+3 = 4 
	int age;//4
	float score;//4
	char addr[30];//30 - ����4�������� -����30+2 = 32
	//63���ֽڣ� - ʵ������68���ֽ� - ��Ϊ�ṹ���С������������Ա��������
	//����Ա��4���ֽ� - Ҫ��4���ֽڶ���
};//�ṹ������������ע�����һ��Ҫ�ӷֺ�


int main()
{
	struct student s = { 1001, "lele", 'M', 20,85.4, "shenzhen" };//���弰��ʼ��
	struct student sarr[3];//�ṹ������ - һ���������������ṹ��
	int i = 0;
	//�ṹ��������뵥�������ڲ���ÿһ����Ա
	printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
	//��϶�ȡ��%c��������κ��ַ�
	//scanf("%d%s %c%d%f%s",&sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, sarr[i].addr);//�����������׵�ַ
	//printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
	printf("----------------------------------------------------\n");
	for (i = 0; i < 3; i++)//�ṹ����������
	{
		scanf("%d%s %c%d%f%s", &s.num, s.name, &s.sex, &s.age, &s.score, s.addr);
	}
	for (i = 0; i < 3; i++)//�ṹ���������
	{
		printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
	}
	return 0;
}