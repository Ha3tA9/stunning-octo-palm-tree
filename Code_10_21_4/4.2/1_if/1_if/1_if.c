#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//练习if与else
int main()
{
	int i;
	while (scanf("%d", &i))
	{
		if (i > 0)//不要在if后加分号
		{
			printf("i is bigger than 0\n");//为了避免加代码时出现问题 - 加大括号！
			//不加大括号的问题1：新加的语句不属于if语句！
			//不加大括号的问题2：悬空的else和那个if配对？
		}
		else
		{
			printf("i is not bigger than 0\n");
		}
	}
	return 0;
}