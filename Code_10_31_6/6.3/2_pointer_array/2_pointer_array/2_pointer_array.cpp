#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ����һά����Ĵ���

//��������Ϊʵ�δ��ݸ��Ӻ����ǣ�������Ϊָ���
void change(char *d)//�������洢����һ��ָ��ֵ���β�дָ���������д�������
{
	*d = 'H';
	d[1] = 'E';//�ȼ���*(d+1) = 'E';
	*(d + 2) = 'L';

}
int main()
{
	char c[10] = "hello";
	change(c);
	puts(c);
	return 0;
}