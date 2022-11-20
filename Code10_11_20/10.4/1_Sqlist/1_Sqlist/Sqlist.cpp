#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MaxSize 50
typedef int ElemType; //˳���洢��������Ԫ��ʱ�����Կ�����ɴ����޸�
//��̬����
typedef struct
{
	ElemType data[MaxSize];
	int length; //��ǰ˳������ж��ٸ�Ԫ��
}SqList;

////��̬����
//#define InitSize 100
//typedef struct
//{
//	ElemType *data;
//	int capacity; //��̬������������
//	int length;
//}SeqList;

//˳���Ĳ��룬��ΪL��ı䣬�������Ҫ�����ã�i�ǲ����λ��
bool ListInsert(SqList &L, int i, ElemType element)
{
	//�ж�i�Ƿ�Ϸ�
	if (i < 1 || i > L.length + 1)
	{
		return false;//δ����ɹ�����false
	}
	//����洢�ռ����ˣ����ܲ���
	if (L.length == MaxSize)
	{
		return false;//δ����ɹ�����false
	}
	//�Ѻ����Ԫ�����������ƶ����ճ�λ�ã�����Ҫ�����Ԫ��
	for (int j = L.length; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = element; //����Ҫ�����Ԫ��
	L.length++;//˳�����Ҫ��1
	return true;//����ɹ�����true
}

//��ӡ˳���
void PrintList(SqList L) //����Ҫ�ı�˳���L�����ݣ�����Ҫ����
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		printf("%3d", L.data[i]);//Ϊ�˴�ӡ��ͬһ�У����û���
	}
	printf("\n");
}

//ɾ�����ݱ��е�Ԫ�أ���ΪL��ı䣬�������Ҫ�����ã�i��ɾ����λ�ã�e��Ϊ�˻�ȡ��ɾ����Ԫ�ص�ֵ
bool ListDelete(SqList &L,int i, ElemType &e)
{
	//�ж�ɾ����Ԫ�ص�λ���Ƿ�Ϸ�
	if (i < 1 || i > L.length)
	{
		return false;//һ���ߵ�return�����ͽ�����
	}
	e = L.data[i - 1];//���ȱ���Ҫɾ��Ԫ�ص�ֵ
	int j;
	for (j = i; j < L.length; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;//˳����ȼ�1
	return true;
}

//����ĳ��Ԫ�ص�λ�ã��ҵ��˻᷵�ض�Ӧλ�ã�û�ҵ��ͷ���0
int LocateElem(SqList L, ElemType element)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		if (element == L.data[i])
		{
			return i + 1;//��Ϊi��������±꣬��1�Ժ����˳�����±�
		}
	}
	return 0;//ѭ������û�ҵ�
}

//˳���ĳ�ʼ�����������ʵս
int main()
{
	SqList L; //����һ��˳�������L
	bool ret; //ret�����鿴�����ķ���ֵ����������True������False
	//�����ֶ���˳����и�ֵ - ����Ԫ��
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;//���ó���
	ret = ListInsert(L, 2, 60);//���շ�������
	if (ret) //�ȼ���if (true == ret)
	{
		printf("insert SqList success\n");
		PrintList(L);
	}
	else
	{
		printf("insert SqList failed\n");
	}

	printf("---------------------------------------------\n");

	ElemType del; ////ɾ����Ԫ�ش���del��
	ret = ListDelete(L, 1, del);

	if (ret) //�ȼ���if (true == ret)
	{
		printf("delete SqList success\n");
		printf("del element = %d\n", del);
		PrintList(L);//˳����ӡ
	}
	else
	{
		printf("delete SqList failed\n");
	}

	
	int pos;//�洢Ԫ��λ��
	pos = LocateElem(L, 60);
	if (pos)
	{
		printf("find this element\n");
		printf("element pos = %d\n", pos);
	}
	else
	{
		printf("don't find this element\n");
	}
	return 0;
}