#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ǿ������ת��
int main()
{
	int i = 5;
	float f = i / 2;//2.0 - ���Ҳ������������ͣ��������������㣬��Ϊ2����1
	//����ǿ��ת��
	float k = (float)i / 2;//2.5 - ���ʽ������Ϊ������
	printf("%f\n", f);//2.0
	printf("%f\n", k);//2.5

	return 0;

}