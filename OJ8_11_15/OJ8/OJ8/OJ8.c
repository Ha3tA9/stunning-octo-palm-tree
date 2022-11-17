#define _CRT_SECURE_NO_WARNINGS 1
//Description
//输入一个学生的学号，姓名，性别，用结构体存储，通过scanf读取后，然后再通过printf打印输出
//
//Input
//学号，姓名，性别，例如输入 101 xiongda m
//
//Output
//输出和输入的内容一致，如果输入的是101 xiongda m，那么输出也是101 xiongda m
//
//Sample Input 1
//101 xiongda m
//
//Sample Output 1
//101 xiongda m

#include <stdio.h>//AC
struct student//没有括号
{
	int num;
	char name[20];
	char sex;
};//声明一个结构体类型

int main()
{
	struct student s;
	scanf("%d%s %c", &s.num, s.name, &s.sex);
	//scanf传递时，为什么后面要给一个地址，指针的传递的使用场景
	printf("%d %s %c\n", s.num, s.name, s.sex);
	return 0;
}