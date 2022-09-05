#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("Hello,World!");//语句
//	1 + 2;//语句
//	;//空语句
//	return 0;//语句
//}

//int main()
//{
//	int age = 19;
//	if (age >= 18)
//		printf("成年\n");
//
//	return 0;
//}


//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	return 0;
//}


//int main()
//{
//	int age = 666;
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 26)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 26 && age < 40)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("壮年\n");
//	}
//	else
//	{
//		printf("老人\n");
//	}
//	return 0;
//}

	
//int main()
//{
//	int age = 666;
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 999)
//	{
//		printf("老人\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("111\n");
//		}
//		else
//		{
//			printf("666\n");
//		}
//	}
//	return 0;
//}


////代码1
//if (condition) {
//	return x;
//}
//return y;
//
////代码2
//if (condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
//
////代码3
//int num = 1;
//if (num == 5)
//{
//	printf("666\n");
//}
//
////代码4
//int num = 1;
//if (5 == num)
//{
//	printf("666\n");
//}

//int main()
//{
//	int num = 1;
//	if (num = 5)
//	{
//		printf("666\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (5 == num)
//	{
//		printf("666\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 15;
//	if (1 == num % 2)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//		}
//		i = i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
	for (int i = 1; i <= 100; i += 2)
	{
		printf("%d ", i);
	}
	return 0;
}