#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MaxSize 50
typedef int ElemType; //顺序表存储其他类型元素时，可以快速完成代码修改
//静态分配
typedef struct
{
	ElemType data[MaxSize];
	int length; //当前顺序表中有多少个元素
}SqList;

////动态分配
//#define InitSize 100
//typedef struct
//{
//	ElemType *data;
//	int capacity; //动态数组的最大容量
//	int length;
//}SeqList;

//顺序表的插入，因为L会改变，因此这里要用引用，i是插入的位置
bool ListInsert(SqList &L, int i, ElemType element)
{
	//判断i是否合法
	if (i < 1 || i > L.length + 1)
	{
		return false;//未插入成功返回false
	}
	//如果存储空间满了，不能插入
	if (L.length == MaxSize)
	{
		return false;//未插入成功返回false
	}
	//把后面的元素依次往后移动，空出位置，来放要插入的元素
	for (int j = L.length; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = element; //放入要插入的元素
	L.length++;//顺序表长度要加1
	return true;//插入成功返回true
}

//打印顺序表
void PrintList(SqList L) //不需要改变顺序表L的内容，不需要引用
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		printf("%3d", L.data[i]);//为了打印到同一行，不用换行
	}
	printf("\n");
}

//删除数据表中的元素，因为L会改变，因此这里要用引用，i是删除的位置，e是为了获取被删除的元素的值
bool ListDelete(SqList &L,int i, ElemType &e)
{
	//判断删除的元素的位置是否合法
	if (i < 1 || i > L.length)
	{
		return false;//一旦走到return函数就结束了
	}
	e = L.data[i - 1];//首先保存要删除元素的值
	int j;
	for (j = i; j < L.length; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;//顺序表长度减1
	return true;
}

//查找某个元素的位置，找到了会返回对应位置，没找到就返回0
int LocateElem(SqList L, ElemType element)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		if (element == L.data[i])
		{
			return i + 1;//因为i是数组的下标，加1以后才是顺序表的下标
		}
	}
	return 0;//循环结束没找到
}

//顺序表的初始化及插入操作实战
int main()
{
	SqList L; //定义一个顺序表，变量L
	bool ret; //ret用来查看函数的返回值，布尔型是True，或者False
	//首先手动在顺序表中赋值 - 放置元素
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;//设置长度
	ret = ListInsert(L, 2, 60);//大驼峰命名法
	if (ret) //等价于if (true == ret)
	{
		printf("insert SqList success\n");
		PrintList(L);
	}
	else
	{
		printf("insert SqList failed\n");
	}

	printf("---------------------------------------------\n");

	ElemType del; ////删除的元素存入del内
	ret = ListDelete(L, 1, del);

	if (ret) //等价于if (true == ret)
	{
		printf("delete SqList success\n");
		printf("del element = %d\n", del);
		PrintList(L);//顺序表打印
	}
	else
	{
		printf("delete SqList failed\n");
	}

	
	int pos;//存储元素位置
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