#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ס���ȼ���Ŀ�ģ����ܼӶ��������
int main()
{
	int i = 0, j = 1;
	while (scanf("%d", &i))
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)//��Ҫ�Ҽ�����
			//����һ�򣬰��겻���İ�������
		{
			printf("%d is leap year\n", i);
		}
		else
		{
			printf("%d is not leap year\n", i);
		}
	}
	i=!!j;//��һ�α��0 - �ٷ�һ�α��1 - ���������� - ��ý����Ƚ��
	printf("i value=%d\n", i);
	return 0;
 }