#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//&������ȡ��ַ��ָ������ĳ�ʼ��һ����ĳ������ȡ��ַ
	int i = 5;
	//int *i_pointer;//������һ��ָ�������i_pointer��ָ�������
	//ָ������ĳ�ʼ����ĳ������ȡ��ַ����ֵ���������д����
	int* p = &i;
	printf("i = %d\n", i);//ֱ�ӷ���
	printf("p = %d\n", *p);//��ӷ���
	return 0;
}