#define _CRT_SECURE_NO_WARNINGS 1
//��ϵ����� - ���ȼ�С�����������
#include <stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a))
//	{
//		if (3 < a < 10)//���ԣ� - ����˳��������� - 3<aΪ�漴1��1<10Ϊ��1 - 3<aΪ�ټ�0��1<10Ϊ��1
//			//�����ԶΪ1��
//		{
//			printf("a is between 3 and 10\n");
//		}
//		else
//		{
//			printf("a is not between 3 and 10\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int a;
	while (scanf("%d", &a))
	{
		if (3 < a && a < 10)//�߼��룡
		{
			printf("a is between 3 and 10\n");
		}
		else
		{
			printf("a is not between 3 and 10\n");
		}
	}
	return 0;
}
