#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//char c[10] = { 'I','a','m','h','a','p','p','y' };//������
//	char c[10] = "Iamhappy";//������
//	return 0;
//}


//ģ��printf("%s",c)����
void print(char d[])//����Ҫ�������鳤��
{
	int i = 0;
	while (d[i])//��ѭ����������ʱ��ѭ������
	{
		printf("%c", d[i]);
		i++;
	}
	printf("\n");
}

//��γ�ʼ���ַ����飬�ַ���������
//����ַ�������ʱ��Ҫȥ�鿴�ַ��������Ƿ�洢�˽�����
int main()
{
 	char c[6] = "hello";
	char d[5] = "how";
	printf("%s\n",c);//ʹ��%s�����һ���ַ�����ֱ�Ӱ��������Ź���
	printf(d);

	return 0;
}