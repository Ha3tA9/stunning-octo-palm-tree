#define _CRT_SECURE_NO_WARNINGS 1
//Description
//输入一个整型数，判断是否是对称数，如果是，输出yes，否则输出no，不用考虑这个整型数过大，int类型存不下，不用考虑负值；
//例如 12321是对称数，输出yes，124421是对称数，输出yes，1231不是对称数，输出no
//
//Input
//一个整型数
//
//Output
//输出是yes，或者no
//
//
//Sample Input 1
//12321
//
//Sample Output 1
//yes
//
//Sample Input 2
//1231
//
//Sample Output 2
//no

//#include <stdio.h> //AC
//int main()
//{
//	int a, b, backup_a,c;
//	scanf("%d", &a);
//	b = 0;
//	c = 0;
//	backup_a = a;
//	while (a > 9)
//	{
//		c = a % 10;
//		b = (b + c) * 10;
//		a /= 10;
//	}
//	b += a;
//	if(b != backup_a)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//	return 0;
//}
//
//#include <stdio.h> //更好地AC
//int main()
//{
//	int a, b, backup_a, c;
//	scanf("%d", &a);
//	b = 0;
//	c = 0;
//	backup_a = a;
//	while (a)
//	{
//		c = a % 10;
//		b = b * 10 + c;
//		a /= 10;
//	}
//	if (b != backup_a)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//	return 0;
//}

//Description
//利用while或者for循环计算n！的值。
//提示：n！＝1 * 2 * 3… * n
//
//Input
//一个正整数n，1≤n≤10。
//
//Output
//n！的值。
//
//
//Sample Input 1
//2
//
//Sample Output 1
//2
//
//Sample Input 2
//5
//
//Sample Output 2
//120

//#include <stdio.h> //AC
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	for (i = 1; n > 1; n--)
//	{
//		i *= n;
//	}
//	printf("%d\n", i);
//	return 0;
//}
//
//#include <stdio.h> //更好地AC
//int main()
//{
//	int n,i,r = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		r *= i;
//	}
//	printf("%d\n", r);
//	return 0;
//}

//Description
//某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？
//
//Input
//无输入
//
//Output
//一个数，表示共有多少种换法
//
//Sample Input 1
//无
//
//Sample Output 1
//不能告知，因为只有一个数，偷偷告诉你小于100

#include <stdio.h>
int main()
{
	int n = 100;
	int a, b, c, d, times = 0;
	for (a = 1; a < 100; a++)
	{
		for (b = 1; b < 100 / 2; b++)
		{
			for (c = 1; c < 100 / 5; c++)
			{ 
				for (d = 1; d < 100 / 10; d++)
				{
					if (a + b + c + d == 40 && a + 2 * b + 5 * c + 10 * d == 100)
					{
						times++;
					}

				}

			}

		}

	}

	printf("%d", times);
	return 0;
}