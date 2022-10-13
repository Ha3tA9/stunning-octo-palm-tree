#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//练习printf
//int main()
//{
//	int age = 21;
//	printf("Hello %s, you are %d years old\n", "Bob", age);
//	return 0;
//}

int main()
{
	int i = 10;
	float f = 96.3;
	printf("student number =%d score=%f\n", i, f);

	printf("student number =%3d score=%5.2f\n",i,f);//%3d 占三个位置 - 对齐 //%5.2f 5 - 整体占五个位置 2 - 小数点后保留两位

	printf("student number =%-3d score=%-5.2f\n",i,f);//默认是右对齐，加一个负号 - %-3d - 左对齐
	i = 100;//第一次是定义，再次使用不需要定义
	f = 98.21;
	printf("student number =%d score=%f\n", i, f);//上下不对齐

	return 0;
}