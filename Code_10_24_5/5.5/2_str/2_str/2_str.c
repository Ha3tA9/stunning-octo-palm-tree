#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int mystrlen(char c[])
{
	int i = 0;
	while(c[i])//�ҵ���������ѭ���������Ӷ��ó��ַ�������
	{
		i++;
	}
	return i;//�����ַ����ĳ���
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

	strcat(c, d);//��d�е��ַ���ƴ�ӵ�c��
	puts(c);
	strcpy(e, c);//��c�е��ַ������Ƶ�e��
	puts(e);
	printf("c?d %d\n", strcmp(c, "how"));
	return 0;
}