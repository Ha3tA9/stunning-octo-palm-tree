#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针与一维数组的传递

//数组名作为实参传递给子函数是，是弱化为指针的
void change(char *d)//数组名存储的是一个指针值，形参写指针变量，不写数组变量
{
	*d = 'H';
	d[1] = 'E';//等价于*(d+1) = 'E';
	*(d + 2) = 'L';

}
int main()
{
	char c[10] = "hello";
	change(c);
	puts(c);
	return 0;
}