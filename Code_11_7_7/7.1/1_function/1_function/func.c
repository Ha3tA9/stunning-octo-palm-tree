#define _CRT_SECURE_NO_WARNINGS 1
#include "func.h"

int print_star(int i)//i - ��Ϊ��ʽ����
{
	printf("********************\n");
	printf("printstar %d\n", i);
	return i + 3;
}

void print_message() //���Ե���printstar
{
	printf("how do you do\n");
	print_star(3);//3��ʵ��
}
