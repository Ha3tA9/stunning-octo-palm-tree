#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ϰif��else
int main()
{
	int i;
	while (scanf("%d", &i))
	{
		if (i > 0)//��Ҫ��if��ӷֺ�
		{
			printf("i is bigger than 0\n");//Ϊ�˱���Ӵ���ʱ�������� - �Ӵ����ţ�
			//���Ӵ����ŵ�����1���¼ӵ���䲻����if��䣡
			//���Ӵ����ŵ�����2�����յ�else���Ǹ�if��ԣ�
		}
		else
		{
			printf("i is not bigger than 0\n");
		}
	}
	return 0;
}