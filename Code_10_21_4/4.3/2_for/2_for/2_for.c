#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i, total;
	for (i = 1, total = 0; i <= 100; i++)//�����������ֺ� - ���ܼӷֺ� - ������ѭ������������
	{
		total += i;
	}
	printf("total = % d\n", total);
	return 0;
}