#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//记住优先级的目的，不能加多余的括号
int main()
{
	int i = 0, j = 1;
	while (scanf("%d", &i))
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)//不要乱加括号
			//四年一闰，百年不闰，四百年再闰
		{
			printf("%d is leap year\n", i);
		}
		else
		{
			printf("%d is not leap year\n", i);
		}
	}
	i=!!j;//非一次变成0 - 再非一次变成1 - 自右向左结合 - 离得近的先结合
	printf("i value=%d\n", i);
	return 0;
 }