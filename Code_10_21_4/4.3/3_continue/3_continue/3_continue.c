#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//for ѭ��ʵ�ִ�1�ӵ�100
//ʹ��continue�������ĺ�
int main()
{
	int i, total;
	for (i = 1, total = 0; i <= 100; i++)//forС���ź�Ҫ�ӷֺ�
	{
		if(i % 2 == 0)
		{
			continue;//continue����Ĵ��������õ�ִ��
		}
		total += i;
	}
	printf("total = %d\n", total);
	return 0;
}