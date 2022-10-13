#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 123;
	//¶þ½øÖÆ 0000 0000 0000 0000 0000 0000 0111 1011
	printf("%d\n", i);//123
	printf("%o\n", i);//173
	printf("%x\n", i);//7b
	return 0;
}