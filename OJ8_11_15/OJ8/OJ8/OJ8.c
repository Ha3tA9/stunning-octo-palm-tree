#define _CRT_SECURE_NO_WARNINGS 1
//Description
//����һ��ѧ����ѧ�ţ��������Ա��ýṹ��洢��ͨ��scanf��ȡ��Ȼ����ͨ��printf��ӡ���
//
//Input
//ѧ�ţ��������Ա��������� 101 xiongda m
//
//Output
//��������������һ�£�����������101 xiongda m����ô���Ҳ��101 xiongda m
//
//Sample Input 1
//101 xiongda m
//
//Sample Output 1
//101 xiongda m

#include <stdio.h>//AC
struct student//û������
{
	int num;
	char name[20];
	char sex;
};//����һ���ṹ������

int main()
{
	struct student s;
	scanf("%d%s %c", &s.num, s.name, &s.sex);
	//scanf����ʱ��Ϊʲô����Ҫ��һ����ַ��ָ��Ĵ��ݵ�ʹ�ó���
	printf("%d %s %c\n", s.num, s.name, s.sex);
	return 0;
}