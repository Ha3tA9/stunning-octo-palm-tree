#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
   
//ԭд��
//struct student 
//{
//	int num;
//	char name[20];
//	char sex;
//};

//typedef��ʹ�� - �����
// stu �ȼ��� struct student, pstu �ȼ��� struct student*
//�ṹ��ָ��
typedef struct student
{
	int num;
	char name[20];
	char sex;
}stu,*pstu; //���� - �ṹ��/�ṹ��ָ��

typedef int INTEGER;//�ض��ĵط�ʹ�� - ��int�����

int main()
{
	//struct student s = { 0 };//ԭд��
	stu s = { 1001,"wangle",'M' };//����
	stu* p = &s;//������һ���ṹ��ָ�����
	pstu p1 = &s;
	INTEGER i = 10;
	printf("i=%d,p->num=%d\n", i, p->num);
	return 0;
}