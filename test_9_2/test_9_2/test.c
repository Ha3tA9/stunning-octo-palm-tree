#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//
//
// 
////1. define ���峣��
// 
//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//		return 0;
//}

////2. define �����
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ� - 4���ֽ�
//	printf("%p\n", &a);//%p ר��������ӡ��ַ��
//
//	//ָ������Ķ��巽ʽ
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa����ָ�����
//	//* ˵�� pa��ָ�����
//	//int ˵��paָ��Ķ�����int���͵�
//
//	char ch = 'w';
//	char* pc = &ch;
//	 
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;//* - �����ò���
//	//*pa������pa������Ϊ��ַ�ı���a
//	//*pa�����ù�pa�еĵ�ַ�ҵ�a
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	printf("%lld\n", sizeof(char*));
//	printf("%lld\n", sizeof(short*));
//	printf("%lld\n", sizeof(int*));
//	printf("%lld\n", sizeof(long*));
//	printf("%lld\n", sizeof(long long*));
//	printf("%lld\n", sizeof(float*));
//	printf("%lld\n", sizeof(double*));
//
//	return 0;
//}


//�ṹ�������C���Դ����µ�����

//����һ��ѧ������

struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;

};

//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	//.������ - ���ʽṹ��ĳ�Ա����
	struct Stu* ps = &s;//�ṹ��ĵ�ַ
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//�ṹ�����.��Ա����
	//2��3�ȼ�
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//ָ��psָ��->����ĳ�Ա
	//						�ṹ��ָ�� -> ��Ա����
	return 0;
}