#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//scanf��ȡ�ַ������������Զ����ַ������зŽ�����
int main()
{
	char c[10];
	char d[10];
	//scanf("%s", c);//�ַ�������c�д洢���������ʼ��ַ����˲���Ҫȡ��ַ
	//printf("%s\n", c);
	scanf("%s%s", c, d);//�ַ�������c�д洢���������ʼ��ַ����˲���Ҫȡ��ַ
	printf("c = %s, d = %s\n", c,d);
	return 0;
}