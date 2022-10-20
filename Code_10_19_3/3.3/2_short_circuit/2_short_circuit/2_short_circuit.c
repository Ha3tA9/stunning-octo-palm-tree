#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//逻辑与和逻辑或 短路运算
int main()
{
	int i = 0;
	i&& printf("you can't see me\n");//短路运算 - i为假，不会执行逻辑与后的表达式
											   	//i为真，执行逻辑与后的表达式
	//短路运算可以将代码写的很短
	
	////原代码：
	//if (i)
	//{
	//	printf("you can't see me\n");
	//}

	int i = 1;
	i|| printf("you can't see me\n");//逻辑或 - 前面为真，整体为真，后面的语句不输出
												//前面为假，执行逻辑或后的表达式

	return 0;
}