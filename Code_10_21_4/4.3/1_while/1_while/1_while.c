#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����1��100�ĺ�
int main()
{
	int i = 1, total = 0;
	//while��ӷֺ� - ��ѭ��
	//ѭ������û����while���ڼٵĲ��� - ��ѭ��
	while (i <= 100)//while���ܼӷֺ� - ������ѭ��
	{
		total = total + i;//��i�ӵ�total��
		i++;//i++�� - i=i+1 - ��������ڼ�
	}
	printf("total = %d\n", total);
	return 0;
}