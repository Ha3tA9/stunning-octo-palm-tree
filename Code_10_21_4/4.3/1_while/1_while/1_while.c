#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//计算从1到100的和
int main()
{
	int i = 1, total = 0;
	//while后加分号 - 死循环
	//循环体内没有让while趋于假的操作 - 死循环
	while (i <= 100)//while后不能加分号 - 否则死循环
	{
		total = total + i;//把i加到total上
		i++;//i++即 - i=i+1 - 让语句趋于假
	}
	printf("total = %d\n", total);
	return 0;
}