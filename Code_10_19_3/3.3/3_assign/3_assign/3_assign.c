#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 1, b = 2;
//	//a + 25 = b;//编译错误 - lvalue required as left operand of assignment
//	//左操作数 必须是一个左值 - 表达式a+25不是一个左值
//
//	//写作：
//	b = a + 25;//左操作数为b
//
//	return 0;
//}
//
////iNum = iNum + 5;
////可以修改为
////iNum += 5;

int main()
{
	int a = 1, b = 2;
	//a = a + 3;
	//可以简写为：
	a += 3;
	b *= 5;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}