#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//malloc��Ҫʹ�õ�ͷ�ļ�
#include <string.h>

int main()
{
	int size;//size��������Ҫ�������ֽڵĿռ�
	char* p;//void*���͵�ָ���ǲ���ƫ�Ƶģ�����Լ�����ȥ����������ָ��
	scanf("%d", &size);//����Ҫ����Ŀռ��С
	//ע��ָ�뱾���С������ָ��Ŀռ��С���������£����ܺ�ǰ��ı������ȥ��⣡

	//malloc���ص�void*����������ָ��
	//ʹ��malloc��̬����ѿռ�
	p = (char*)malloc(size); //ǿ������ת����p������һ��
	//p[0] = 'H';
	//p[1] = 'O';
	//p[2] = 'W';
	//p[3] = '\0';
	strcpy(p, "malloc success");
	puts(p);
	//����ʱҪfree���ͷ�����Ŀռ䣡
	//�ͷ�����Ŀռ�ʱ�����ĵ�ַ�����������malloc���ظ����ǵĵ�ַ
	free(p); //freeʱ����ʹ��malloc����ʱ���ص�ָ��ֵ�����ܽ����κ�ƫ��
	printf("free success\n");
	return 0;
}