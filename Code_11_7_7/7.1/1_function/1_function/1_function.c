#define _CRT_SECURE_NO_WARNINGS 1
#include "func.h"

//函数的声明与定义

//这里是函数的定义
//void print_message()
//{
//	printf("how do you do\n");
//}

//函数放在main函数下面需要提前声明
//void print_message();//print_message函数的声明

int main()
{
	int a = 10;
	a = print_star(a);//用一个变量接返回值
	print_message();//调用print_message()
	print_star(a);
	return 0;
}

//void print_message()//放在下面时提示函数未声明，函数未声明时返回int类型
//{
//	printf("how do you do\n");
//}