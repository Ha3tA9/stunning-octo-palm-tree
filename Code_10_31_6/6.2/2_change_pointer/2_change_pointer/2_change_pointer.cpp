#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���Ӻ�����ȥ�ı���������ĳ��������ֵ
void change(int *j)//j���β�
{
	*j = 5;//*j�ȼ��ڱ���i,ֻ�Ǽ�ӷ���
	//��ӷ��ʵõ�����i
}

//ָ��Ĵ���
int main()
{
	int i = 10;
	printf("before change i = %d\n", i);
	change(&i);//���ݱ���i�ĵ�ַ - j = &i
	printf("after change i = %d\n", i);
	return 0;
}