#define _CRT_SECURE_NO_WARNINGS 1
//Description
//初始化顺序表（顺序表中元素为整型），里边的元素是1, 2, 3，然后通过scanf读取一个元素（假如插入的是6），插入到第2个位置，打印输出顺序表，每个元素占3个空格，格式为1  6  2  3，然后scanf读取一个整型数，是删除的位置（假如输入为1），然后输出顺序表  6  2  3，假如输入的位置不合法，输出false字符串。提醒，Language一定要选为C++。
//
//Input
//第一次输入插入的元素值，第二次输入删除的位置
//
//Output
//假如插入的元素为6，那么输出为
//1  6  2  3
//
//假如删除的位置为1，那么输出为
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

#define MaxSize 50 //最大长度
typedef int ElemType; //统一类型

typedef struct //静态分配
{
	ElemType data[MaxSize];
	int length;
}SqList;



bool ListInsert(SqList &L, int i, ElemType element)
{
	if (i < 1 || i > L.length + 1)//是否合法
	{
		return false;
	}
	if (L.length == MaxSize)//空间已满
	{
		return false;
	}
	for (int j = L.length; j >= i; j--)//把数据往后移动
	{
		L.data[j] = L.data[j - 1]; //下标j就是表中j+1位置
	}
	L.data[i - 1] = element; //下标i-1就是表中i的位置
	L.length++; //插入后表长+1
	return true;
}

bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i < 1 || i > L.length + 1)//是否合法
	{
		return false;
	}
	e = L.data[i - 1];//保存要删除的元素
	for (int j = i; j < L.length; j++)//把数据往前移动
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;//删除后表长-1
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

//在子函数中改变主函数中对应的变量，要改就加引用。
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
	ElemType del;//存储删除的元素
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