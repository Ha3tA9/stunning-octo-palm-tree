#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ݹ���׳ˣ���Ϊ�˴�����ʲô�ǵݹ�
//��n�Ľ׳�
int f(int n)
{
	//һ��Ҫ�н�������
	if (1 == n)
	{
		return 1;
	}
		
	return n * f(n - 1);//д��ʽ
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("f(%d)=%d\n",n,f(n));
	return 0;
}