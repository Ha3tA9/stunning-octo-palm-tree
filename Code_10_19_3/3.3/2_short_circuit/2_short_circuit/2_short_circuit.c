#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�߼�����߼��� ��·����
int main()
{
	int i = 0;
	i&& printf("you can't see me\n");//��·���� - iΪ�٣�����ִ���߼����ı��ʽ
											   	//iΪ�棬ִ���߼����ı��ʽ
	//��·������Խ�����д�ĺܶ�
	
	////ԭ���룺
	//if (i)
	//{
	//	printf("you can't see me\n");
	//}

	int i = 1;
	i|| printf("you can't see me\n");//�߼��� - ǰ��Ϊ�棬����Ϊ�棬�������䲻���
												//ǰ��Ϊ�٣�ִ���߼����ı��ʽ

	return 0;
}