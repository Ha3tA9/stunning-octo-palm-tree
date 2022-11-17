#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
   
//原写法
//struct student 
//{
//	int num;
//	char name[20];
//	char sex;
//};

//typedef的使用 - 起别名
// stu 等价于 struct student, pstu 等价于 struct student*
//结构体指针
typedef struct student
{
	int num;
	char name[20];
	char sex;
}stu,*pstu; //别名 - 结构体/结构体指针

typedef int INTEGER;//特定的地方使用 - 给int起别名

int main()
{
	//struct student s = { 0 };//原写法
	stu s = { 1001,"wangle",'M' };//别名
	stu* p = &s;//定义了一个结构体指针变量
	pstu p1 = &s;
	INTEGER i = 10;
	printf("i=%d,p->num=%d\n", i, p->num);
	return 0;
}