#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int input = 0;//�����ֵ
	printf("��ѧ:>\n");
	printf("��Ҫ�ú�ѧϰ��(1/0)��:>");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("��offer\n");
	}	
	else
	{
		printf("������\n");
	}
		
	return 0;
}

//��ѧ - 30000�д��� - ��һ������Ĺ���

//int main()
//{
//	int line = 0;
//	//ѭ��
//	while (line < 30000)
//	{
//		printf("д����:%d\n",line);//��ʾд���������
//		line++;//��Ϊline�ı�������1 - line = line + 1;
//	}
//	if (line == 30000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}

//Add(int x, int y)//������������������num1��num2
//{
//	int z = 0;
//	z = x + y;
//	return z;//��������z
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	//int sum = num1 + num2;
//	//�����ķ�ʽ���
//	int sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	//int e = 5;
//	//int f = 6;
//	//int g = 7;
//	//int h = 8;
//	//int i = 9;
//	//int j = 10;
//
//	//���� - һ����ͬ���͵�Ԫ�صļ���
//	//10������1-10������
//	//���������±������ʵ�
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ�ϳ�ʼ��Ϊ0
//	return 0;
//}

//int main()
//{
//	//0��ʾ�٣���0��ʾ��
//	int a = 0;
//	int b = 10;
//	//�������ɼ١��ٱ����
//	printf("%d\n", !a);//1
//	printf("%d\n", !b);//0
//	return 0;
//}

//int main()
//{
//	if (a)
//	{
//		//���aΪ�棬��..
//	}
//	if (!a)
//	{
//		//���aΪ�٣���..
//	return 0;
//}

//int main()
//{
//	//sizeof��һ��������
//	//���Ǻ�����������()����ʡ�ԣ�ͨ��sizeof��()��ʡ��
//	//�������ͻ��߱����Ĵ�С��
//	int a = 10;
//	printf("%d\n", sizeof(int));//sizeof�����ͺ�()����ʡ�ԣ�����ռ4���ֽ�
//	printf("%d\n", sizeof a);//sizeof�������()��ʡ�ԣ�����ռ4���ֽ�
//	return 0;
//}

//int main()
//{
//	//10*4 = 40
//	int arr[10] = { 0 };
//	//�������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr));//10��Ԫ��ռ40���ֽ�
//	printf("%d\n", sizeof(arr[0]));//��1��Ԫ��ռ4���ֽ�
//	//��������Ԫ�صĸ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//40/10 = 10
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//~ ��λȡ��
//	printf("%d\n", ~a);//-1
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++ - ��++����ʹ��
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++ - ��ʹ�ã���++
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//�������о� - �˷�ʱ���о�����Ĵ���
//	int b = (++a) + (++a) + (++a);//12
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3.14;
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	//���Ƽ�ʹ��
//	int a = (int)3.14;//������д����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;//1
//	int b = 5;//1
//	int c = a && b;//1 - cΪ��
//	return 0;
//}

//int main()
//{
//	int a = 3;//1
//	int b = 0;//0
//	//��Ҫ���߶�����
//	int c = a && b;//0 - cΪ��
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = a > b ? a : b;//��������������Ŀ��������
//
//	printf("%d\n", max);//3
//
//	return 0;
//}

//int main()
//{
//	//(2, 4 + 5, 6);//���ű��ʽ
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	//		 a = 5		c = 1	   b = 3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ�Ǵ����������μ����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	//a = 5, c = 1, b = 3, **d = 3**
//	printf("%d\n", d);//3
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//			�±�0,1,2,3,4,5,6,7,8,9
//	printf("%d\n", arr[5]);//6 - []�±����ò����� - [5]��Ӧ������Ԫ��
//	return 0;
//}

//int main()
//{
//	//���ú�����ʱ�򣬺��������() - �������ò�����
//	printf("Hello\n");//����һ��������
//	//	  ��       ��
//	printf("%d\n",100);//��������������
//	return 0;
//}

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;//�޷������ͱ���
//	u_int num2 = 100;//unsigned int���ض���Ϊu_int - ����
//	return 0;
//}

//void test()
//{	
//		//ÿ�ν��뷶Χ�����ֲ�����a
//	int a = 1;//����a=1
//	a++;
//	printf("%d ", a);//��ӡ2
//}
//	//ÿ���߳���Χ���پֲ�����a
//int main()
//{
//	int i = 0;
//	while (i < 10) {
//	test();//����test���� - �����ֲ�����a�����پֲ�����a
//	i++;
//
//	}
//	return 0;
//}


////extern�����ⲿ���� - ����+����
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	//��static����ȫ�ֱ����󣬼�ʹ����Ҳ�޷�ʹ��
//
//	return 0;
//}

////��������
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//
