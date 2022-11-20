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


//˳���ĳ�ʼ�����������ʵս
int main()
{
	SqList L; //����һ��˳�������L
	bool ret; //ret�����鿴�����ķ���ֵ����������True������False
	ElemType del; //Ҫɾ����Ԫ��
	//�����ֶ���˳����и�ֵ - ����Ԫ��
	L.data[0] = 1;
	L.data[1] = 2; 
	L.data[2] = 3;
	L.length = 3;//���ó���
	ret=ListInsert(L,2,60);//���շ�������
	if (ret) //�ȼ���if (true == ret)
	{
		printf("insert SqList success\n");
		PrintList(L);
	}
	else
	{
		printf("insert SqList failed\n");
	}

	return 0;

}