#define _CRT_SECURE_NO_WARNINGS 1
//Description
//��ʼ��˳���˳�����Ԫ��Ϊ���ͣ�����ߵ�Ԫ����1, 2, 3��Ȼ��ͨ��scanf��ȡһ��Ԫ�أ�����������6�������뵽��2��λ�ã���ӡ���˳���ÿ��Ԫ��ռ3���ո񣬸�ʽΪ1  6  2  3��Ȼ��scanf��ȡһ������������ɾ����λ�ã���������Ϊ1����Ȼ�����˳���  6  2  3�����������λ�ò��Ϸ������false�ַ��������ѣ�Languageһ��ҪѡΪC++��
//
//Input
//��һ����������Ԫ��ֵ���ڶ�������ɾ����λ��
//
//Output
//��������Ԫ��Ϊ6����ô���Ϊ
//1  6  2  3
//
//����ɾ����λ��Ϊ1����ô���Ϊ
//6  2  3
//
//Sample Input 1
//6
//1
//
//Sample Output 1
//1  6  2  3
//6  2  3
//
//Sample Input 2
//9
//3
//
//Sample Output 2
//1  9  2  3
//1  9  3
//
//Sample Input 3
//9
//6
//
//Sample Output 3
//1  9  2  3
//false


#include <stdio.h>

#define MaxSize 50 //��󳤶�
typedef int ElemType; //ͳһ����

typedef struct //��̬����
{
	ElemType data[MaxSize];
	int length;
}SqList;



bool ListInsert(SqList &L, int i, ElemType element)
{
	if (i < 1 || i > L.length + 1)//�Ƿ�Ϸ�
	{
		return false;
	}
	if (L.length == MaxSize)//�ռ�����
	{
		return false;
	}
	for (int j = L.length; j >= i; j--)//�����������ƶ�
	{
		L.data[j] = L.data[j - 1]; //�±�j���Ǳ���j+1λ��
	}
	L.data[i - 1] = element; //�±�i-1���Ǳ���i��λ��
	L.length++; //������+1
	return true;
}

bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i < 1 || i > L.length + 1)//�Ƿ�Ϸ�
	{
		return false;
	}
	e = L.data[i - 1];//����Ҫɾ����Ԫ��
	for (int j = i; j < L.length; j++)//��������ǰ�ƶ�
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;//ɾ�����-1
	return true;
}

void PrintList(SqList L)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		printf("%3d", L.data[i]);
	}
	printf("\n");
}

//���Ӻ����иı��������ж�Ӧ�ı�����Ҫ�ľͼ����á�
int main()//AC
{
	SqList L;
	bool ret;
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;
	int n;
	scanf("%d", &n);
	ret = ListInsert(L, 2, n);
	if (ret)
	{
		//printf("insert SqList success\n");
		PrintList(L);
	}
	else
	{
		//printf("insert SqList failed\n");
	}
	int m;
	scanf("%d", &m);
	ElemType del;//�洢ɾ����Ԫ��
	ret = ListDelete(L, m, del);
	if (ret)
	{
		//printf("delete SqList success\n");
		PrintList(L);
	}
	else
	{
		printf("false\n");
	}
	return 0;
}