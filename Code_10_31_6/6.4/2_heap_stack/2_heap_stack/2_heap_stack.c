#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�Ѻ�ջ�Ĳ���

//���ԣ�
//����ջ�ռ��ͷź󣬺����ڵ����оֲ�������ʧ
//�ͼ�����
char* print_stack()//ջ�ռ�stack
{
	char c[100] = "I am print_stack func";//ջ�ռ����Ӻ����������ͷ���
	char *p;
	p = c;
	puts(p);//���Դ�ӡ��I am print_stack func
	return p;
}
//�ѿռ䲻����Ϊ����ִ�н������ͷ�
char* print_malloc()//�ѿռ�heap
{
	char* p = (char*)malloc(100);//�ѿռ�������������һֱ��Ч������Ϊ��������������
	strcpy(p, "I am print malloc func");
	puts(p);
	return p;
}

int main()
{
	char *p;
	p = print_stack();//���ݷ���ջ�ռ�
	puts(p);//�Ӻ�����������ݵ��������д�ӡ������
	//����Ϊջ�ռ��Ѿ����ͷŵ���
	p = print_malloc();//���ݷ��ڶѿռ�
	puts(p);
	free(p);//ֻ��freeʱ���ѿռ�Ż��ͷ�
	return 0;
}