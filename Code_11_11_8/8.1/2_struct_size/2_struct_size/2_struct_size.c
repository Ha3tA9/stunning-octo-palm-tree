#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct student_type1
{
	double score;//double是一种浮点类型，8个字节，浮点分为float和double，记住有这两种即可
	short age; //2 - 8
};//16

struct student_type1
{
	double score;//8
	int height;//4
	short age;//2
};//16
//如果两个小成员（4+2）小于最大成员（8），可以结合在一起。
//2+4 < 8，int和short占8个字节

struct student_type1
{
	int height;//4
	char sex;//1
	short age;//2
};//8
//1+2 < 4,char和short占4个字节

//结构体对齐 - 结构体占多大空间
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