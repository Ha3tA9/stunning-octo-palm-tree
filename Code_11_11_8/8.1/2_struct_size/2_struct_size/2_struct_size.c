#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct student_type1
{
	double score;//double��һ�ָ������ͣ�8���ֽڣ������Ϊfloat��double����ס�������ּ���
	short age; //2 - 8
};//16

struct student_type1
{
	double score;//8
	int height;//4
	short age;//2
};//16
//�������С��Ա��4+2��С������Ա��8�������Խ����һ��
//2+4 < 8��int��shortռ8���ֽ�

struct student_type1
{
	int height;//4
	char sex;//1
	short age;//2
};//8
//1+2 < 4,char��shortռ4���ֽ�

//�ṹ����� - �ṹ��ռ���ռ�
int main()
{
	struct student_type1 s1;
	struct student_type2 s2;
	struct student_type3 s3;

	printf("s1 size=%d\n", sizeof(s1));
	printf("s2 size=%d\n", sizeof(s2));
	printf("s3 size=%d\n", sizeof(s3));
	return 0;
}