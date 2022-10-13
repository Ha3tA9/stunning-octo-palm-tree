#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//符号常量

#define PI 3+2 //不能加分号;

//int main()
//{
//	int i = PI * 2; //i就是一个整型变量
//	//把3+2移到这个位置 - 3+2*2=7
//	//符号常量是直接替换的
//	//代码中所有出现PI符号的地方都会被替换为3+2
//	printf("i = %d\n", i);
//
//	return 0;
//}

int main()
{
	int i = PI * 2; //i就是一个整型变量
	printf("i = %d\n", i);//i = 7
	printf("i size=%d\n", sizeof(i));//i size = 4
	//sizeof可用来计算某个变量的空间大小 
	return 0;
}