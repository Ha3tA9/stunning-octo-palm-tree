#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i,ret;//ret是scanf匹配成功的个数
	char c;
	float f;

	//输入100 a 98.2
	//ret = scanf("%d%c%f", &i, &c, &f);//"%d%c%f"之间不加空格 i=100,c= ,f=0.00
	//ret = 2 只匹配成功了两个，因为&c不会忽略任何字符 - %d读走100后，%c读走空格，%f读a时报错返回，所以只匹配成功两个。

	ret = scanf("%d %c%f", &i, &c, &f);//要在%c之前加个空格
	printf("i=%d,c=%c,f=%f\n", i, c, f);
	return 0;
}