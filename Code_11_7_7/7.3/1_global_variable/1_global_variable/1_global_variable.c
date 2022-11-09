#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int i = 10;//i是一个全局变量，不建议使用

//void print(int a)
//{
//	printf("I am print i = %d\n", i);
//}

//把print(int a)改为print(int i)，那么print函数的打印结果是多少？
void print(int i)//形参可以看成一个局部变量
{
	printf("I am print i = %d\n", i);//输出3
}


int main()
{
	{
		int j = 5;
	}//局部变量的有效范围是离自己最近的花括号
	for (int k = 0; k < -1;)
	{

	}//for循环括号内定义的变量，循环体外不可用

	printf("main i = %d\n", i);
	//i = 5;//接下来打印5
	//int i = 5;//接下来打印10
	print(3);
	return 0;
}