#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void modify_pointer(int *&p, int *q)//���ñ���ͱ�������
{
	p = q;
}

int main()
{
	int *p = NULL;//0
	int i = 10;
	int *q = &i;
	modify_pointer(p, q);
	printf("after modify_pointer *p = %d\n", *p);
	return 0;//�������ѽ������˳����벻Ϊ0����ô��������쳣����
}

#include <stdio.h>
void modify_pointer(int **p, int *q)//�����C++������int **p;
{
	*p = q;//�����д������1.2�е��Ƿǳ����Ƶ�
}

int main()
{
	int *p = NULL;
	int i = 10;
	int *q = &i;
	modify_pointer(&p, q);//�����C++������&p
	printf("after modify_pointer *p = %d\n", *p);
	return 0;
}