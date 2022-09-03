#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//
//
// 
////1. define 定义常量
// 
//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//		return 0;
//}

////2. define 定义宏
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}

//int main()
//{
//	int a = 10;//a在内存中要分配空间 - 4个字节
//	printf("%p\n", &a);//%p 专门用来打印地址的
//
//	//指针变量的定义方式
//	int* pa = &a;//pa是用来存放地址的，在C语言中pa叫做指针变量
//	//* 说明 pa是指针变量
//	//int 说明pa指向的对象是int类型的
//
//	char ch = 'w';
//	char* pc = &ch;
//	 
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;//* - 解引用操作
//	//*pa就是以pa的内容为地址的变量a
//	//*pa就是用过pa中的地址找到a
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	printf("%lld\n", sizeof(char*));
//	printf("%lld\n", sizeof(short*));
//	printf("%lld\n", sizeof(int*));
//	printf("%lld\n", sizeof(long*));
//	printf("%lld\n", sizeof(long long*));
//	printf("%lld\n", sizeof(float*));
//	printf("%lld\n", sizeof(double*));
//
//	return 0;
//}


//结构体可以让C语言创建新的类型

//创建一个学生类型

struct Stu
{
	char name[20];//成员变量
	int age;
	double score;

};

//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	//.操作符 - 访问结构体的成员变量
	struct Stu* ps = &s;//结构体的地址
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//结构体变量.成员变量
	//2和3等价
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//指针ps指向->对象的成员
	//						结构体指针 -> 成员变量
	return 0;
}