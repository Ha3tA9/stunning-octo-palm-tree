#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Description
//������n��̨�ף�һ��ֻ����1��̨�׻�2��̨�ף������ߵ���n��̨���м����߷���Ϊ���ڶ���������⣬�������˵�����£�������3��̨�ף���ô�ܼƾ���3���߷�����һ��Ϊÿ����1��̨�ף���3�Σ��ڶ���Ϊ����2��̨�ף�����1��̨�ף�������Ϊ����1��̨�ף�����2��̨�ס�����Ϊn�����Ϊ�ߵ���n��̨���м����߷�
//
//Input
//����������3
//
//Output
//���������3���ߵ���3��̨�׵��߷��ܼ���3�֣�1, 1, 1 ��  1, 2 ��2, 1�����Ϊ3
//
//Sample Input 1
//1
//
//Sample Output 1
//1
//
//Sample Input 2
//3
//
//Sample Output 2
//3
//
//Sample Input 3
//4
//
//Sample Output 3
//5


int step(int n)//AC
{
	if (1 == n || 2 == n)//�ݹ�Ľ�������
	{
		return n;
	}
	return step(n - 1) + step(n - 2);//�ݹ鹫ʽ
}

int main()
{
	int n;//�洢̨��
	int ret;
	scanf("%d", &n);
	ret = step(n);
	printf("%d\n", ret);
	return 0;
}