#define _CRT_SECURE_NO_WARNINGS 1
//Description
//����N������NС�ڵ���100�����������2�ĳ��ִ�����
//
//������ʾ��
//���������ȡ5���������ķ������£�
//
//int a[100];
//for (int i = 0; i < 5; i++)
//
//{
//
//	scanf("%d", &a[i]);
//
//}
//
//Input
//����ĸ�ʽ������
//��һ������Ҫ���Ԫ�ظ���������5
//�ڶ�������  1 2 2 3 2����ô������Ϊ3����Ϊ2������3��
//
//Output
//ͳ������2���ֵĴ���
//
//Sample Input 1
//5
//1 2 2 3 2
//
//Sample Output 1
//3

//#include <stdio.h>
//void print(int a[], int length)
//{
//	int p;
//	for (p = 0; p < length; p++)
//	{
//		printf("%d\n", a[p]);
//	}
//}
//
//int main()
//{
//	int a[100];
//	int b = 0;
//	int times = 0;
//	scanf("%d", &b);
//	for (int i = 0; i < b; i++)
//
//	{
//
//		scanf("%d", &a[i]);
//
//	}
//	for (int u = 0; u < b; u++)
//	{
//		if (a[u] == 2)
//		{
//			times++;
//		}
//	 }
//	//print(a,100);
//	printf("times = %d\n", times);
//	return 0;
//}

//int main()//AC
//{
//	int a[100] = { 0 };
//	int b = 0;
//	int times = 0;
//	scanf("%d", &b);
//	for (int i = 0; i < b; i++)
//
//	{
//		scanf("%d", &a[i]);
//		if (a[i] == 2)
//		{
//			times++;
//		}
//	}
//
//	//print(a,100);
//	printf("%d\n", times);
//	return 0;
//}

//Description
//��ȡһ���ַ������ַ������ܺ��пո񣬽��ַ�����ת��ԭ�����ַ�������ת���ַ�����ͬ�����0��ԭ�ַ���С����ת���ַ������ - 1��������ת���ַ������1���������� hello����ת����ַ���Ϊ olleh����Ϊhello С�� olleh��������� - 1
//
//ע�������ж�һ��Ҫ��ôд����Ϊstrcmp��׼C�в����Ƿ��� - 1��1�����Ǹ�ֵ����ֵ
//
//int result = strcmp(c, d);
//
//if (result < 0)
//
//{
//
//	printf("%d\n", -1);
//
//}
//
//else if (result > 0)
//
//{
//
//	printf("%d\n", 1);
//
//}
//
//else {
//
//	printf("%d\n", 0);
//
//}
//
//
//Input
//����һ���ַ��������� hello����Ȼ������ַ���Ҳ������ how are you�����пո���ַ���
//
//
//Output
//�����һ�������������������ַ�����hello����ô�����������Ϊ - 1
//
//
//Sample Input 1
//hello
//
//Sample Output 1
//- 1
//
//Sample Input 2
//cba
//
//Sample Output 2
//1
//
//Sample Input 3
//aba
//
//Sample Output 3
//0

#include <stdio.h> //AC 
#include<string.h>
void reverse(char c[])
{
	int p, i, j;
	for (i = 0, j = strlen(c) - 1; i < j; i++, j--)
	{
		p = c[i];
		c[i] = c[j];
		c[j] = p;
	}
}
int main()
{
	char c[100];
	char reverse_c[100];
	char backup_c[100];
	gets(c);
	strcpy(backup_c, c);
	reverse(c);
	strcpy(reverse_c, c);
	int result = strcmp(backup_c, reverse_c);
	
	if (result < 0)
	{
		printf("%d\n", -1);
	}

	else if (result > 0)
	{
		printf("%d\n", 1);
	}

	else 
	{
		printf("%d\n", 0);
	}
	return 0;
}

#include <stdio.h> //���õ�AC
#include <string.h>
int main()
{
	char c[100], d[100];
	gets(c);
	//puts(c);//�������Ե�
	int i, j;
	for (i = strlen(c) - 1, j = 0; i >= 0; i--, j++)//�ַ�����ת
	{
		d[j] = c[i];
	}
	d[j] = '\0';
	//puts(d);//�õ�d�Բ���
	int result = strcmp(c, d);
	if (result < 0)
	{
		printf("%d\n", -1);
	}

	else if (result > 0)
	{
		printf("%d\n", 1);
	}

	else
	{
		printf("%d\n", 0);
	}
	return 0;
}