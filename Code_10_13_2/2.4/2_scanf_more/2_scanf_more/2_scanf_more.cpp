#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i,ret;//ret��scanfƥ��ɹ��ĸ���
	char c;
	float f;

	//����100 a 98.2
	//ret = scanf("%d%c%f", &i, &c, &f);//"%d%c%f"֮�䲻�ӿո� i=100,c= ,f=0.00
	//ret = 2 ֻƥ��ɹ�����������Ϊ&c��������κ��ַ� - %d����100��%c���߿ո�%f��aʱ�����أ�����ֻƥ��ɹ�������

	ret = scanf("%d %c%f", &i, &c, &f);//Ҫ��%c֮ǰ�Ӹ��ո�
	printf("i=%d,c=%c,f=%f\n", i, c, f);
	return 0;
}