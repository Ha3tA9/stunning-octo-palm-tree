#define _CRT_SECURE_NO_WARNINGS 1
//����ķ���Խ��
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 }; //��������ʱ�����鳤����̶�
	int j = 20;
	int i = 10;
	a[5] = 6; //����Խ��
	a[6] = 7; //����Խ�����������쳣
	printf("i = %d\n", i); //i�����ı�
	return 0;
}