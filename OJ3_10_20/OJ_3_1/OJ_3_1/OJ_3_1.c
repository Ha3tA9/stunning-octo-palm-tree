#define _CRT_SECURE_NO_WARNINGS 1

//Description
//判断某个年份是不是闰年，如果是闰年，请输出“yes”，否则请输出“no”
//
//Input
//输入一行，只有一个整数x(0 <= x <= 10000)
//
//Output
//输出只有一行字符
//
//ample Input 1
//2000
//
//Sample Output 1
//yes
//
//Sample Input 2
//1999
//
//Sample Output 2
//no

#include <stdio.h>//AC
int main()
{
	int i;
	scanf("%d", &i);
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

//Description
//读取一个整型数，字符，浮点数，分别到变量i，j，k中，然后将i，j，k直接相加并输出，小数点后保留两位小数，不用考虑输入的浮点数的小数部分超过了两位
//
//
//Input
//一个整型数，字符，浮点数
//
//
//Output
//i，j，k三个变量的求和值
//
//
//Sample Input 1
//10 a 98.3
//
//Sample Output 1
//205.30

#include <stdio.h>//AC
int main()
{
	int i;
	char j;
	float k;
	scanf("%d %c%f", &i, &j, &k);
	//printf("%d %c %f\n", i, j, k);
	printf("%0.2f\n", i + j + k);
	return 0;
}