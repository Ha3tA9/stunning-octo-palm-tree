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
	struct student *p;//定义结构体指针变量

	int num;
	p = &s;//拿到起始地址赋给结构体指针
	printf("%d %s %c\n", p->num, p->name, p->sex);//对象指针->成员名
	p = sarr;//结构体数组 - 数组名存的就是数组的起始地址 - 等价于p = &sarr[0]
	//对象.成员名
	printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);//方式一获取成员 - 加括号成为整体 - 取值*的优先级没有.的优先级高
	printf("%d %s %c\n", p->num, p->name, p->sex);//方式二获取成员 - 这个方式更好
	printf("-----------------------------------------\n");
	p = p + 1;
	printf("%d %s %c\n", p->num, p->name, p->sex);
	return 0;
}