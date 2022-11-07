#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//在子函数中去改变主函数中某个变量的值
void change(int j)//j是形参
{
	j = 5;
}

int main()
{
	int i = 10;
	printf("before change i = %d\n", i);
	change(i);//C语言的函数调用是值传递，实参赋值给形参，i是实参
	//j = i - 把i赋值给了j
	printf("after change i = %d\n", i);
	return 0;
}