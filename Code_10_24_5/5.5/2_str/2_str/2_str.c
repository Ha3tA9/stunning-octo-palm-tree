#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int mystrlen(char c[])
{
	int i = 0;
	while(c[i])//找到结束符后，循环结束，从而得出字符串长度
	{
		i++;
	}
	return i;//返回字符串的长度
}


int main()
{
	int len;
	char c[20];
	char d[100] = "world";
	char e[100];
	gets(c);
	puts(c);
	len = strlen(c);
	printf("len = %d\n", len);
	len = mystrlen(c);
	printf("my len = %d\n", len);

	strcat(c, d);//把d中的字符串拼接到c中
	puts(c);
	strcpy(e, c);//把c中的字符串复制到e中
	puts(e);
	printf("c?d %d\n", strcmp(c, "how"));
	return 0;
}