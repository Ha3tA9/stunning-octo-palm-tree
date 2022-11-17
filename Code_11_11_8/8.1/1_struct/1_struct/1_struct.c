#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct student
{
	int num;//4
	char name[20];//20 - 是4的整数倍
	char sex;//1 - 对齐1+3 = 4 
	int age;//4
	float score;//4
	char addr[30];//30 - 不是4的整数倍 -对齐30+2 = 32
	//63个字节？ - 实际上有68个字节 - 因为结构体大小必须是其最大成员的整数倍
	//最大成员是4个字节 - 要按4个字节对齐
};//结构体类型声明，注意最后一定要加分号


int main()
{
	struct student s = { 1001, "lele", 'M', 20,85.4, "shenzhen" };//定义及初始化
	struct student sarr[3];//结构体数组 - 一个数组中有三个结构体
	int i = 0;
	//结构体输出必须单独访问内部的每一个成员
	printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
	//混合读取，%c不会忽略任何字符
	//scanf("%d%s %c%d%f%s",&sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, sarr[i].addr);//数组名就是首地址
	//printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
	printf("----------------------------------------------------\n");
	for (i = 0; i < 3; i++)//结构体数组输入
	{
		scanf("%d%s %c%d%f%s", &s.num, s.name, &s.sex, &s.age, &s.score, s.addr);
	}
	for (i = 0; i < 3; i++)//结构体数组输出
	{
		printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
	}
	return 0;
}