#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʹ��break����ѭ��
int main()
{
	int i, total;
	for (i = 1, total = 0; i <= 100; i++)//forС���ź�Ҫ�ӷֺ�
	{
		if (total > 2000)
		{
			break;//���ʹ�����ǧʱ��ѭ������
		}
		total += i;
	}
	printf("total = %d,i = %d\n", total,i);
	return 0;
}