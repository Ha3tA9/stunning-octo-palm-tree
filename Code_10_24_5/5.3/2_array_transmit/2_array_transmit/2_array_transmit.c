#define _CRT_SECURE_NO_WARNINGS 1
//����Ĵ���
#include <stdio.h>

//void print(int a[])//void�Ӻ�������дreturn
////����ĳ����޷�����
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", a[i]);//��������е�����Ԫ��
//	}
//}

//�Ӻ����ǰ�ĳһ�����ù��ܷ�װ��������ʹ��
//���鴫�ݵ��Ӻ������Ӻ������βν��յ������������ʼ��ַ����˲��ܹ�������ĳ��ȴ��ݸ��Ӻ�����
//void print(int a[])
//{
//	int i;
//	for (i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		printf("%d\n", a[i]);
//	}
//}
//�˴�û�����123456��ֻ�����ǰ����12������û�д��ݹ�ȥ

//ͨ�����ⶨ��һ�����������������е�Ԫ�ظ���
void print(int a[], int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		printf("%3d\n", a[i]);
	}
	a[3] = 20;//���Ӻ������޸�a[3]
	printf("\n");
}

//main��������������
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", a[i]);//��������е�����Ԫ��
//	}
//	return 0;
//}

int main()
{
	int a[6] = { 1,2,3,4,5,6 };
	print(a, 6);//�����ڴ���ʱ�������Ǵ��ݲ���ȥ�ġ�
	printf("a[3] = %d\n", a[3]);
	return 0;
}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int i;
//	for (i = 0; i < sizeof(a)/sizeof(int); i++)//������� - ���鳤�ȳ���Ԫ�ص��ֽڳ���
//	{
//		printf("%d\n", a[i]);//��������е�����Ԫ��
//	}
//	return 0;
//}