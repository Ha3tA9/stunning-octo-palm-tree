#define _CRT_SECURE_NO_WARNINGS 1

//Description
//�ж�ĳ������ǲ������꣬��������꣬�������yes���������������no��
//
//Input
//����һ�У�ֻ��һ������x(0 <= x <= 10000)
//
//Output
//���ֻ��һ���ַ�
//
//ample Input 1
//2000
//
//Sample Output 1
//yes
//
//Sample Input 2
//1999
//
//Sample Output 2
//no

#include <stdio.h>//AC
int main()
{
	int i;
	scanf("%d", &i);
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

//Description
//��ȡһ�����������ַ������������ֱ𵽱���i��j��k�У�Ȼ��i��j��kֱ����Ӳ������С���������λС�������ÿ�������ĸ�������С�����ֳ�������λ
//
//
//Input
//һ�����������ַ���������
//
//
//Output
//i��j��k�������������ֵ
//
//
//Sample Input 1
//10 a 98.3
//
//Sample Output 1
//205.30

#include <stdio.h>//AC
int main()
{
	int i;
	char j;
	float k;
	scanf("%d %c%f", &i, &j, &k);
	//printf("%d %c %f\n", i, j, k);
	printf("%0.2f\n", i + j + k);
	return 0;
}