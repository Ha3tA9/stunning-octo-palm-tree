#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//Description
//����һ�����������������i��ͨ���Ӻ���change���������ı���i��2��Ȼ���ӡi��������������Ϊ10����ӡ��5����������Ϊ7����ӡ��3
//
//Input
//һ��������
//
//Output
//��Ӧ��������2�����
//
//Sample Input 1
//10
//
//Sample Output 1
//5
//
//Sample Input 2
//7
//
//Sample Output 2
//3

void change(int *p)//�൱��p = &i��*p = *&i���ȼ���i
{
	*p = *p / 2;
}


int main()//AC
{
	int i;
	scanf("%d", &i);
	change(&i);
	printf("%d\n", i);
	return 0;
}

//Description
//����һ����������Ȼ�������Ӧ��С�ռ��ڴ棬Ȼ���ȡһ���ַ�����
//�ַ��������볤��С������������������С��������������ַ�������
//�����迼��������ַ����������������ڴ��С����
//ע���������⣺
//
//char* p;
//scanf("%d", &n);
//p = malloc(n);
//scanf("%c", &c);//ע����scanf��gets�м�ʹ��scanf("%c",&c),ȥ������
//gets(p);
//ע�⣺OJ��֧��fflush(stdin)��ձ�׼���뻺��������
//
//
//Input
//һ����������һ���ַ���������
//10
//hello
//
//
//Output
//���������ַ����������������hello����ô���hello
//
//Sample Input 1
//10
//hello
//
//Sample Output 1
//hello

int main()//AC
{
	char *p;
	int n;//�洢������ٸ��ֽڵĿռ��С
	char c;
	scanf("%d", &n);
	p = malloc(n);
	scanf("%c", &c);//ע����scanf��gets�м�ʹ��scanf("%c",&c)
	gets(p);//�����ͨ�������scanfȥ����\n,gets���Ῠס
	puts(p);
	return 0;
}