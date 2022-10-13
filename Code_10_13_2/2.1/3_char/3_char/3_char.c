#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//大写转换小写
int main()
{
	char c = 'A';
	printf("%c\n", c);//A - 以字符形式输出
	printf("%d\n", c);//65 - 以字符形式输出
	printf("%c\n", c + 32);//a - 以字符形式输出

	return 0;
}