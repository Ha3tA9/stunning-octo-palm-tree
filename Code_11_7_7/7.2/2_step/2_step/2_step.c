#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��̨�ף�����n��̨�ף��ж������߷�

int step(int n)
{
	if (1 == n || 2 == n)//��̨����1����������2��ʱ���ݹ����
	{
		return n;//1��̨��1���߷���2��̨��2���߷�
	}
	return step(n - 1) + step(n - 2);
}
int main()
{
	int n; 
	scanf("%d", &n);
	printf("step(%d) = %d\n", n, step(n));
	return 0;
}