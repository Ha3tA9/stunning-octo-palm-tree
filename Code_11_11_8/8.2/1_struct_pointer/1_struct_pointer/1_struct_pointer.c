#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct student
{
	int num;
	char name[20];
	char sex;
};

int main()
{
	struct student s = { 1001,"wangle",'M' };
	struct student sarr[3] = { 1001,"lilei",'M',1005,"zhangsan",'M',1007,"lili,'F" };
	printf("%d\n",sizeof(s));//28
	struct student *p;//����ṹ��ָ�����

	int num;
	p = &s;//�õ���ʼ��ַ�����ṹ��ָ��
	printf("%d %s %c\n", p->num, p->name, p->sex);//����ָ��->��Ա��
	p = sarr;//�ṹ������ - ��������ľ����������ʼ��ַ - �ȼ���p = &sarr[0]
	//����.��Ա��
	printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);//��ʽһ��ȡ��Ա - �����ų�Ϊ���� - ȡֵ*�����ȼ�û��.�����ȼ���
	printf("%d %s %c\n", p->num, p->name, p->sex);//��ʽ����ȡ��Ա - �����ʽ����
	printf("-----------------------------------------\n");
	p = p + 1;
	printf("%d %s %c\n", p->num, p->name, p->sex);
	return 0;
}