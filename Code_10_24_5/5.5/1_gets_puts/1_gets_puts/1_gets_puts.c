#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char c[20];
	gets(c);//gets�з��������ַ����������������
	puts(c);//puts�ȼ���printf("%s\n", c);//puts�ڷŵ����ַ�������
	return 0;
}