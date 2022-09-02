#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int input = 0;//输入的值
	printf("上学:>\n");
	printf("你要好好学习吗(1/0)？:>");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("好offer\n");
	}	
	else
	{
		printf("卖红薯\n");
	}
		
	return 0;
}

//上学 - 30000行代码 - 找一个不错的工作

//int main()
//{
//	int line = 0;
//	//循环
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);//显示写代码的行数
//		line++;//名为line的变量增加1 - line = line + 1;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}

//Add(int x, int y)//创建两个整型来接收num1和num2
//{
//	int z = 0;
//	z = x + y;
//	return z;//返回整型z
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数的方式解决
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
//	//数组 - 一组相同类型的元素的集合
//	//10个整型1-10存起来
//	//数组是用下标来访问的
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//集合
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认初始化为0
//	return 0;
//}

//int main()
//{
//	//0表示假，非0表示真
//	int a = 0;
//	int b = 10;
//	//！把真变成假、假变成真
//	printf("%d\n", !a);//1
//	printf("%d\n", !b);//0
//	return 0;
//}

//int main()
//{
//	if (a)
//	{
//		//如果a为真，则..
//	}
//	if (!a)
//	{
//		//如果a为假，则..
//	return 0;
//}

//int main()
//{
//	//sizeof是一个操作符
//	//不是函数，函数后()不能省略，通常sizeof后()不省略
//	//计算类型或者变量的大小的
//	int a = 10;
//	printf("%d\n", sizeof(int));//sizeof求类型后()不可省略，整型占4个字节
//	printf("%d\n", sizeof a);//sizeof求变量后()可省略，整型占4个字节
//	return 0;
//}

//int main()
//{
//	//10*4 = 40
//	int arr[10] = { 0 };
//	//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr));//10个元素占40个字节
//	printf("%d\n", sizeof(arr[0]));//第1个元素占4个字节
//	//计算数组元素的个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//40/10 = 10
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//~ 按位取反
//	printf("%d\n", ~a);//-1
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++ - 先++，后使用
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++ - 先使用，后++
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//不建议研究 - 浪费时间研究错误的代码
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
//	//强制类型转换
//	//不推荐使用
//	int a = (int)3.14;//括号中写类型
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;//1
//	int b = 5;//1
//	int c = a && b;//1 - c为真
//	return 0;
//}

//int main()
//{
//	int a = 3;//1
//	int b = 0;//0
//	//需要两者都满足
//	int c = a && b;//0 - c为假
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
//	max = a > b ? a : b;//条件操作符（三目操作符）
//
//	printf("%d\n", max);//3
//
//	return 0;
//}

//int main()
//{
//	//(2, 4 + 5, 6);//逗号表达式
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	//		 a = 5		c = 1	   b = 3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	//a = 5, c = 1, b = 3, **d = 3**
//	printf("%d\n", d);//3
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//			下标0,1,2,3,4,5,6,7,8,9
//	printf("%d\n", arr[5]);//6 - []下表引用操作符 - [5]对应第六个元素
//	return 0;
//}

//int main()
//{
//	//调用函数的时候，函数名后的() - 函数调用操作符
//	printf("Hello\n");//接受一个操作数
//	//	  ↑       ↑
//	printf("%d\n",100);//接受两个操作数
//	return 0;
//}

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;//无符号整型变量
//	u_int num2 = 100;//unsigned int被重定义为u_int - 别名
//	return 0;
//}

//void test()
//{	
//		//每次进入范围创建局部变量a
//	int a = 1;//创建a=1
//	a++;
//	printf("%d ", a);//打印2
//}
//	//每次走出范围销毁局部变量a
//int main()
//{
//	int i = 0;
//	while (i < 10) {
//	test();//调用test函数 - 创建局部变量a，销毁局部变量a
//	i++;
//
//	}
//	return 0;
//}


////extern声明外部符号 - 类型+名字
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	//用static修饰全局变量后，即使声明也无法使用
//
//	return 0;
//}

////声明函数
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
