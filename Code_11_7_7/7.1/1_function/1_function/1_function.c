#define _CRT_SECURE_NO_WARNINGS 1
#include "func.h"

//�����������붨��

//�����Ǻ����Ķ���
//void print_message()
//{
//	printf("how do you do\n");
//}

//��������main����������Ҫ��ǰ����
//void print_message();//print_message����������

int main()
{
	int a = 10;
	a = print_star(a);//��һ�������ӷ���ֵ
	print_message();//����print_message()
	print_star(a);
	return 0;
}

//void print_message()//��������ʱ��ʾ����δ����������δ����ʱ����int����
//{
//	printf("how do you do\n");
//}