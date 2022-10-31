#define _CRT_SECURE_NO_WARNINGS 1
//数组的访问越界
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 }; //定义数组时，数组长度须固定
	int j = 20;
	int i = 10;
	a[5] = 6; //访问越界
	a[6] = 7; //访问越界会造成数据异常
	printf("i = %d\n", i); //i发生改变
	return 0;
}