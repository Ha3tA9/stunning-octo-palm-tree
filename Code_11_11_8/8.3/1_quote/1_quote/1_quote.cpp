#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//兼容c的头文件

void modify_num(int &b)//引用 - 形参中写&，要称为引用
{
	b = b + 1;
}

//C++的引用的讲解
//在子函数内修改主函数的普通变量的值
int main()
{
	int a = 10;
	modify_num(a);
	printf("after modify_num a = %d\n", a);
	return 0;
}

//C语言代码
#include <stdio.h>

void modify_num(int *b)
{
	*b = *b + 1;
}

int main()
{
	int a = 10;
	modify_num(&a);
	printf("after modify_num a = %d\n", a);
	return 0;
}