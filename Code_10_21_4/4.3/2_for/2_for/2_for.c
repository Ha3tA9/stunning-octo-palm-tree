#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i, total;
	for (i = 1, total = 0; i <= 100; i++)//必须有两个分号 - 不能加分号 - 不会死循环，会结果不对
	{
		total += i;
	}
	printf("total = % d\n", total);
	return 0;
}