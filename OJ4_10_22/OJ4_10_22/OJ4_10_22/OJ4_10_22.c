#define _CRT_SECURE_NO_WARNINGS 1
//Description
//����һ�����������ж��Ƿ��ǶԳ���������ǣ����yes���������no�����ÿ����������������int���ʹ治�£����ÿ��Ǹ�ֵ��
//���� 12321�ǶԳ��������yes��124421�ǶԳ��������yes��1231���ǶԳ��������no
//
//Input
//һ��������
//
//Output
//�����yes������no
//
//
//Sample Input 1
//12321
//
//Sample Output 1
//yes
//
//Sample Input 2
//1231
//
//Sample Output 2
//no

//#include <stdio.h> //AC
//int main()
//{
//	int a, b, backup_a,c;
//	scanf("%d", &a);
//	b = 0;
//	c = 0;
//	backup_a = a;
//	while (a > 9)
//	{
//		c = a % 10;
//		b = (b + c) * 10;
//		a /= 10;
//	}
//	b += a;
//	if(b != backup_a)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//	return 0;
//}
//
//#include <stdio.h> //���õ�AC
//int main()
//{
//	int a, b, backup_a, c;
//	scanf("%d", &a);
//	b = 0;
//	c = 0;
//	backup_a = a;
//	while (a)
//	{
//		c = a % 10;
//		b = b * 10 + c;
//		a /= 10;
//	}
//	if (b != backup_a)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//	return 0;
//}

//Description
//����while����forѭ������n����ֵ��
//��ʾ��n����1 * 2 * 3�� * n
//
//Input
//һ��������n��1��n��10��
//
//Output
//n����ֵ��
//
//
//Sample Input 1
//2
//
//Sample Output 1
//2
//
//Sample Input 2
//5
//
//Sample Output 2
//120

//#include <stdio.h> //AC
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	for (i = 1; n > 1; n--)
//	{
//		i *= n;
//	}
//	printf("%d\n", i);
//	return 0;
//}
//
//#include <stdio.h> //���õ�AC
//int main()
//{
//	int n,i,r = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		r *= i;
//	}
//	printf("%d\n", r);
//	return 0;
//}

//Description
//ĳ���뽫���е�һ����ֵ100Ԫ������һ���10Ԫ��5Ԫ��2Ԫ��1Ԫ��ֵ��Ʊ�ӡ�Ҫ������40�ţ���ÿ��Ʊ������һ�š��ʣ��м��ֻ�����
//
//Input
//������
//
//Output
//һ��������ʾ���ж����ֻ���
//
//Sample Input 1
//��
//
//Sample Output 1
//���ܸ�֪����Ϊֻ��һ������͵͵������С��100

#include <stdio.h>
int main()
{
	int n = 100;
	int a, b, c, d, times = 0;
	for (a = 1; a < 100; a++)
	{
		for (b = 1; b < 100 / 2; b++)
		{
			for (c = 1; c < 100 / 5; c++)
			{ 
				for (d = 1; d < 100 / 10; d++)
				{
					if (a + b + c + d == 40 && a + 2 * b + 5 * c + 10 * d == 100)
					{
						times++;
					}

				}

			}

		}

	}

	printf("%d", times);
	return 0;
}