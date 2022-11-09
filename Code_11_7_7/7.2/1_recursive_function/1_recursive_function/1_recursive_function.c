#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//递归求阶乘，是为了大家理解什么是递归
//求n的阶乘
int f(int n)
{
	//一定要有结束条件
	if (1 == n)
	{
		return 1;
	}
		
	return n * f(n - 1);//写公式
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("f(%d)=%d\n",n,f(n));
	return 0;
}