#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针的偏移使用场景，也就是对指针的加减
#define N 5//定义一个符号常量
int main()
{
	int a[N] = { 1,2,3,4,5 };//数组名内存储了数组的起始地址，a中存储的就是一个地址值
	int *p;//定义指针变量p
	p = a;//保证等号两边的数值类型一致 - p中存储数组起始地址
	int i;
	for (i = 0; i < N; i++)//正序输出
	{
		//printf("%3d", a[i]);//等价下一句
		printf("%3d", *(p + i));//*(p + 0)拿到a[0];*(p + 1)拿到a[1]……
	}
	printf("\n-----------------\n");//分隔
	p = &a[4];//对整型变量取地址 - 指针变量p指向了数组的最后一个元素
	for (i = 0; i < N; i++)//逆序输出
	{
		printf("%3d", *(p - i));
	}
	printf("\n");
	return 0;
}