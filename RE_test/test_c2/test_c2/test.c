//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int age = 20;
//	double weight = 99.8;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}

//#include<stdio.h>
//
//int global = 2022;//全局变量 - {}外部定义的
//int main()
//{
//	int local = 2021;//局部变量 - {}内部定义的
//	//再定义与全局变量global同名的局部变量
//	int global = 2023;//局部变量
//	printf("global = %d\n", global);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &a, &b);//输入两个整数并赋值给变量a和变量b
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//int g_val = 2022;//全局变量
//int main()
//{
//	printf("1:%d\n", g_val);//第一次打印全局变量
//	printf("Hello World!\n");//执行性代码需要写到大括号内
//	{
//
//		printf("2:%d\n", g_val);//第二次打印全局变量
//
//		int a = 10;
//		printf("a = %d\n", a);//a的作用域 - a起作用
//	}
//	printf("3:%d\n", g_val);//第三次打印全局变量
//	return 0;
//}

//int main()
//{
//	printf("Hello World\n");
//	{
//		int a = 10;//大括号内是a的作用域
//	}
//	printf("a = %d\n", a);//大括号外无法使用
//	return 0;
//}

//声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//F10逐过程调试
//int main()
//{
//	//字符数组 - 数组是一组相同类型的元素
//	char arr[] = "Hello";//[]不写，根据=后的内容初始化[]
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//字符串在结尾的位置隐藏了一个\0字符
//	//\0是字符串的结束标志
//	char arr1[] = "abc";//双引号 - 一串字符
//	char arr2[] = { 'a','b','c' ,'\0'};// 单引号 - 一个字符
//
//	//打印字符串
//	printf("%s\n", arr1);//%s输出字符串
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>//strlen函数需要引用头文件string.h
//int main()
//{
//	//求字符串长度
//	int len = strlen("abc");//string length计算字符串长度
//	printf("%d\n", len);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,'\0'};
//
//	//求字符串长度
//	printf("%d\n", strlen(arr1));//求arr1字符串长度
//	printf("%d\n", strlen(arr2));//求arr2字符串长度
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("c:\test\test.c\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("ab\ncd");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("(are you ok\?\?)");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%c\n", '\'');
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%s\n", "abc");//打印字符串
//	printf("%s\n", "a");//打印单个字符
//	printf("%s\n", "\"");//打印双引号" - 转义字符\"
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("c:\\test\\test.c");//转义\\
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%c\n", '\130');
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%c\n", '\x30');
//	return 0;
//}

#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
/*C语言风格注释
int Sub(int x, int y)
{
	return x-y:
}
*/
int main()
{
	//C++注释风格
	//int a = 10;
	//调用Add函数，完成加法
	printf("%d\n", Add(1, 2));
	return 0;
}