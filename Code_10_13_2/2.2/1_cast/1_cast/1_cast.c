#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//强制类型转换
int main()
{
	int i = 5;
	float f = i / 2;//2.0 - 左右操作数都是整型，这里做整型运算，商为2余数1
	//类型强制转换
	float k = (float)i / 2;//2.5 - 表达式的类型为浮点型
	printf("%f\n", f);//2.0
	printf("%f\n", k);//2.5

	return 0;

}