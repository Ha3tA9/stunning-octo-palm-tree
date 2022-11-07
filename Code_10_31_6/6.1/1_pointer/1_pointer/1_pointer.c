#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//&符号是取地址，指针变量的初始化一定是某个变量取地址
	int i = 5;
	//int *i_pointer;//定义了一个指针变量，i_pointer是指针变量名
	//指针变量的初始化是某个变量取地址来赋值，不能随机写个数
	int* p = &i;
	printf("i = %d\n", i);//直接访问
	printf("p = %d\n", *p);//间接访问
	return 0;
}