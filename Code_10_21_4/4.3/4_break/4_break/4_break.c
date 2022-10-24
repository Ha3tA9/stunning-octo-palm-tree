#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//使用break跳出循环
int main()
{
	int i, total;
	for (i = 1, total = 0; i <= 100; i++)//for小括号后不要加分号
	{
		if (total > 2000)
		{
			break;//当和大于两千时，循环结束
		}
		total += i;
	}
	printf("total = %d,i = %d\n", total,i);
	return 0;
}