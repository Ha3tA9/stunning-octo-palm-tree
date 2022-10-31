#define _CRT_SECURE_NO_WARNINGS 1
//数组的传递
#include <stdio.h>

//void print(int a[])//void子函数不用写return
////数组的长度无法传递
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", a[i]);//输出数组中的所有元素
//	}
//}

//子函数是把某一个常用功能封装起来，供使用
//数组传递到子函数后，子函数的形参接收到的是数组的起始地址，因此不能够把数组的长度传递给子函数。
//void print(int a[])
//{
//	int i;
//	for (i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		printf("%d\n", a[i]);
//	}
//}
//此处没有输出123456，只输出了前两个12，数组没有传递过去

//通过额外定义一个变量来传递数组中的元素个数
void print(int a[], int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		printf("%3d\n", a[i]);
	}
	a[3] = 20;//在子函数中修改a[3]
	printf("\n");
}

//main函数就是主函数
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", a[i]);//输出数组中的所有元素
//	}
//	return 0;
//}

int main()
{
	int a[6] = { 1,2,3,4,5,6 };
	print(a, 6);//数组在传递时，长度是传递不过去的。
	printf("a[3] = %d\n", a[3]);
	return 0;
}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int i;
//	for (i = 0; i < sizeof(a)/sizeof(int); i++)//灵活输入 - 数组长度除以元素的字节长度
//	{
//		printf("%d\n", a[i]);//输出数组中的所有元素
//	}
//	return 0;
//}