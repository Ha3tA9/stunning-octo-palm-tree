#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("Hello,World!");//���
//	1 + 2;//���
//	;//�����
//	return 0;//���
//}

//int main()
//{
//	int age = 19;
//	if (age >= 18)
//		printf("����\n");
//
//	return 0;
//}


//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//
//	return 0;
//}


//int main()
//{
//	int age = 666;
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (age >= 18 && age < 26)
//	{
//		printf("����\n");
//	}
//	else if (age >= 26 && age < 40)
//	{
//		printf("����\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("׳��\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}

	
//int main()
//{
//	int age = 666;
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (age >= 18 && age < 999)
//	{
//		printf("����\n");
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


////����1
//if (condition) {
//	return x;
//}
//return y;
//
////����2
//if (condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
//
////����3
//int num = 1;
//if (num == 5)
//{
//	printf("666\n");
//}
//
////����4
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
//		printf("����\n");
//	else
//		printf("ż��\n");
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