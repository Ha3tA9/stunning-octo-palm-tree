#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//����c��ͷ�ļ�

void modify_num(int &b)//���� - �β���д&��Ҫ��Ϊ����
{
	b = b + 1;
}

//C++�����õĽ���
//���Ӻ������޸�����������ͨ������ֵ
int main()
{
	int a = 10;
	modify_num(a);
	printf("after modify_num a = %d\n", a);
	return 0;
}

//C���Դ���
#include <stdio.h>

void modify_num(int *b)
{
	*b = *b + 1;
}

int main()
{
	int a = 10;
	modify_num(&a);
	printf("after modify_num a = %d\n", a);
	return 0;
}