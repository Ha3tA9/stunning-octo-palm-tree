#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("%d\n", b);
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	Max(a, b);//�������庯��Ҫ�ŵ�main��
//		if (a > b)
//		{
//			max = a;
//		}
//		else
//		{
//			max = b;
//		}
//		printf("%d\n", max);
//	return 0;
//}


//int Max(a, b);//����һ����������ֵ�ĺ���Max
////!!ҲҪ���庯���еı�������
//{
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//int Max(int x, int y);//����һ����������ֵ�ĺ���Max
////!!ҲҪ���庯���еı�������
//{
//	if (x > y)
//	{
//		max = x;//��������ֵ������ֵ����
//	}
//	else
//	{
//		max = y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//int Max(int x, int y);//����һ����������ֵ�ĺ���Max
////!!ҲҪ���庯���еı�������
//{
//	if (x > y)
//	{
//		max = x;//��������ֵ������ֵ����
//	}
//	else
//	{
//		max = y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//
//int Max(int x, int y)//����һ����������ֵ�ĺ���Max�������ӷֺ�;����
////!!ҲҪ���庯���еı�������
//{
//	if (x > y)
//		return x;//��������ֵ������ֵ����
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

////Re
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	printf("     **     ");//����\n
//	printf("     **     ");
//	printf("************");
//	printf("************");
//	printf("    *  *    ");
//	printf("    *  *    ");
//	return 0;
//}
//
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    ");
//	return 0;
//}

//int main()
//{
//	int M = 0;
//	scanf("%d", &M);//ȡ��ַ&M
//	//int a = % (M / 5);  //%ȡģ - a % b - ����a ���� b �ó�������
//	int a = M % 5;
//		if (a == 0)//==�ǹ�ϵ������������ж�����ֵ��С�Ƿ���ͬ
//			//��==���ǹ�ϵ�����������=���Ǹ�ֵ���������
//			printf("YES");
//		else
//			printf("NO");
//	return 0;
//}

int main()
{
	int m = 0;
	scanf("%d", &m);//ȡ��ַ
	if (m % 5 == 0)//���Ų������
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
//������m�ķ�Χ������ĿҪ������������Լ������ʱ����Ҫע��ķ�Χ