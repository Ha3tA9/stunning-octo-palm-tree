#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int i = 10;//i��һ��ȫ�ֱ�����������ʹ��

//void print(int a)
//{
//	printf("I am print i = %d\n", i);
//}

//��print(int a)��Ϊprint(int i)����ôprint�����Ĵ�ӡ����Ƕ��٣�
void print(int i)//�βο��Կ���һ���ֲ�����
{
	printf("I am print i = %d\n", i);//���3
}


int main()
{
	{
		int j = 5;
	}//�ֲ���������Ч��Χ�����Լ�����Ļ�����
	for (int k = 0; k < -1;)
	{

	}//forѭ�������ڶ���ı�����ѭ�����ⲻ����

	printf("main i = %d\n", i);
	//i = 5;//��������ӡ5
	//int i = 5;//��������ӡ10
	print(3);
	return 0;
}