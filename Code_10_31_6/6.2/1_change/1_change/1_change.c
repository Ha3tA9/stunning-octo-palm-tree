#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���Ӻ�����ȥ�ı���������ĳ��������ֵ
void change(int j)//j���β�
{
	j = 5;
}

int main()
{
	int i = 10;
	printf("before change i = %d\n", i);
	change(i);//C���Եĺ���������ֵ���ݣ�ʵ�θ�ֵ���βΣ�i��ʵ��
	//j = i - ��i��ֵ����j
	printf("after change i = %d\n", i);
	return 0;
}