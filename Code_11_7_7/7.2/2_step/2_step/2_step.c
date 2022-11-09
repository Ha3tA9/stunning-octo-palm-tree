#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//上台阶，到第n个台阶，有多少种走法

int step(int n)
{
	if (1 == n || 2 == n)//但台阶是1个，或者是2个时，递归结束
	{
		return n;//1个台阶1种走法，2个台阶2种走法
	}
	return step(n - 1) + step(n - 2);
}
int main()
{
	int n; 
	scanf("%d", &n);
	printf("step(%d) = %d\n", n, step(n));
	return 0;
}