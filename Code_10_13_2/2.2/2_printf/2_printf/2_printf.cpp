#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ϰprintf
//int main()
//{
//	int age = 21;
//	printf("Hello %s, you are %d years old\n", "Bob", age);
//	return 0;
//}

int main()
{
	int i = 10;
	float f = 96.3;
	printf("student number =%d score=%f\n", i, f);

	printf("student number =%3d score=%5.2f\n",i,f);//%3d ռ����λ�� - ���� //%5.2f 5 - ����ռ���λ�� 2 - С���������λ

	printf("student number =%-3d score=%-5.2f\n",i,f);//Ĭ�����Ҷ��룬��һ������ - %-3d - �����
	i = 100;//��һ���Ƕ��壬�ٴ�ʹ�ò���Ҫ����
	f = 98.21;
	printf("student number =%d score=%f\n", i, f);//���²�����

	return 0;
}