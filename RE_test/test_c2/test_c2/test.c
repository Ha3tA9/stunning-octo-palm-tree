//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int age = 20;
//	double weight = 99.8;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}

//#include<stdio.h>
//
//int global = 2022;//ȫ�ֱ��� - {}�ⲿ�����
//int main()
//{
//	int local = 2021;//�ֲ����� - {}�ڲ������
//	//�ٶ�����ȫ�ֱ���globalͬ���ľֲ�����
//	int global = 2023;//�ֲ�����
//	printf("global = %d\n", global);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &a, &b);//����������������ֵ������a�ͱ���b
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//int g_val = 2022;//ȫ�ֱ���
//int main()
//{
//	printf("1:%d\n", g_val);//��һ�δ�ӡȫ�ֱ���
//	printf("Hello World!\n");//ִ���Դ�����Ҫд����������
//	{
//
//		printf("2:%d\n", g_val);//�ڶ��δ�ӡȫ�ֱ���
//
//		int a = 10;
//		printf("a = %d\n", a);//a�������� - a������
//	}
//	printf("3:%d\n", g_val);//�����δ�ӡȫ�ֱ���
//	return 0;
//}

//int main()
//{
//	printf("Hello World\n");
//	{
//		int a = 10;//����������a��������
//	}
//	printf("a = %d\n", a);//���������޷�ʹ��
//	return 0;
//}

//����һ�±���
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//F10����̵���
//int main()
//{
//	//�ַ����� - ������һ����ͬ���͵�Ԫ��
//	char arr[] = "Hello";//[]��д������=������ݳ�ʼ��[]
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//�ַ����ڽ�β��λ��������һ��\0�ַ�
//	//\0���ַ����Ľ�����־
//	char arr1[] = "abc";//˫���� - һ���ַ�
//	char arr2[] = { 'a','b','c' ,'\0'};// ������ - һ���ַ�
//
//	//��ӡ�ַ���
//	printf("%s\n", arr1);//%s����ַ���
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>//strlen������Ҫ����ͷ�ļ�string.h
//int main()
//{
//	//���ַ�������
//	int len = strlen("abc");//string length�����ַ�������
//	printf("%d\n", len);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,'\0'};
//
//	//���ַ�������
//	printf("%d\n", strlen(arr1));//��arr1�ַ�������
//	printf("%d\n", strlen(arr2));//��arr2�ַ�������
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("c:\test\test.c\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("ab\ncd");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("(are you ok\?\?)");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%c\n", '\'');
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%s\n", "abc");//��ӡ�ַ���
//	printf("%s\n", "a");//��ӡ�����ַ�
//	printf("%s\n", "\"");//��ӡ˫����" - ת���ַ�\"
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("c:\\test\\test.c");//ת��\\
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%c\n", '\130');
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%c\n", '\x30');
//	return 0;
//}

#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
/*C���Է��ע��
int Sub(int x, int y)
{
	return x-y:
}
*/
int main()
{
	//C++ע�ͷ��
	//int a = 10;
	//����Add��������ɼӷ�
	printf("%d\n", Add(1, 2));
	return 0;
}