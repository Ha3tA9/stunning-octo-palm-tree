#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("%d\n", b);
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	Max(a, b);//错！！定义函数要放到main外
//		if (a > b)
//		{
//			max = a;
//		}
//		else
//		{
//			max = b;
//		}
//		printf("%d\n", max);
//	return 0;
//}


//int Max(a, b);//定义一个返回整型值的函数Max
////!!也要定义函数中的变量！！
//{
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//int Max(int x, int y);//定义一个返回整型值的函数Max
////!!也要定义函数中的变量！！
//{
//	if (x > y)
//	{
//		max = x;//！！返回值！返回值！！
//	}
//	else
//	{
//		max = y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//int Max(int x, int y);//定义一个返回整型值的函数Max
////!!也要定义函数中的变量！！
//{
//	if (x > y)
//	{
//		max = x;//！！返回值！返回值！！
//	}
//	else
//	{
//		max = y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//
//int Max(int x, int y)//定义一个返回整型值的函数Max！！不加分号;！！
////!!也要定义函数中的变量！！
//{
//	if (x > y)
//		return x;//！！返回值！返回值！！
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

////Re
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	printf("     **     ");//分行\n
//	printf("     **     ");
//	printf("************");
//	printf("************");
//	printf("    *  *    ");
//	printf("    *  *    ");
//	return 0;
//}
//
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    ");
//	return 0;
//}

//int main()
//{
//	int M = 0;
//	scanf("%d", &M);//取地址&M
//	//int a = % (M / 5);  //%取模 - a % b - 计算a 除以 b 得出的余数
//	int a = M % 5;
//		if (a == 0)//==是关系运算符，用来判断两个值大小是否相同
//			//“==”是关系运算符，而“=”是赋值运算符！！
//			printf("YES");
//		else
//			printf("NO");
//	return 0;
//}

int main()
{
	int m = 0;
	scanf("%d", &m);//取地址
	if (m % 5 == 0)//符号不能输错
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
//本题中m的范围不是题目要求的条件，是自己输入的时候需要注意的范围