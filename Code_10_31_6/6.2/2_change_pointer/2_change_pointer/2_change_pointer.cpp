#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//在子函数中去改变主函数中某个变量的值
void change(int *j)//j是形参
{
	*j = 5;//*j等价于变量i,只是间接访问
	//间接访问得到变量i
}

//指针的传递
int main()
{
	int i = 10;
	printf("before change i = %d\n", i);
	change(&i);//传递变量i的地址 - j = &i
	printf("after change i = %d\n", i);
	return 0;
}