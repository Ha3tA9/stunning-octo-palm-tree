#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���ų���

#define PI 3+2 //���ܼӷֺ�;

//int main()
//{
//	int i = PI * 2; //i����һ�����ͱ���
//	//��3+2�Ƶ����λ�� - 3+2*2=7
//	//���ų�����ֱ���滻��
//	//���������г���PI���ŵĵط����ᱻ�滻Ϊ3+2
//	printf("i = %d\n", i);
//
//	return 0;
//}

int main()
{
	int i = PI * 2; //i����һ�����ͱ���
	printf("i = %d\n", i);//i = 7
	printf("i size=%d\n", sizeof(i));//i size = 4
	//sizeof����������ĳ�������Ŀռ��С 
	return 0;
}