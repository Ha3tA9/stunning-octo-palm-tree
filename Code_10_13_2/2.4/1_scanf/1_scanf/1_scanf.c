#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//scanf������ȡ��׼���룬scanf�ѱ�׼�����ڵ����ݣ���Ҫ�ŵ�ĳ�������ռ����˱�������ȡ��ַ
//scanf������������Ϊ��׼���뻺�����ǿյ�

//scanf %d %f ���������\n�ո񣬺���
//scanf %c ����������
int main()
{
	int i = 10;
	char c;
	float f;
	scanf("%d", &i);//ע��һ��Ҫȡ��ַ
	printf("i = %d\n", i);//�ѱ�׼�������е�������������

	//rewind(stdin);//��ձ�׼���뻺����

	//scanf("%c", &c);//��ȡ����ת���ַ�\n!!!
	//printf("c = %c\n", c);//û�еȴ�����c - ����˻���!!!

	scanf("%f", &f);//����ת���ַ�\n
	printf("f = %f\n", f);

	//fflush(stdin);//��ձ�׼���뻺����
	return 0;
}//ֱ�����г���ס - ����