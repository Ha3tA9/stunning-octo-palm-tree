#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//作用域和生命周期

//作用域的概念
//哪里可以使用就是作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//int g_val = 2021; //全局变量
//int main()
//{
//	printf("1:%d\n", g_val);//第一次打印全局变量
//	printf("Hello World!\n");//执行性代码需要写到大括号内
//	{
//		printf("2:%d\n", g_val);//第二次打印全局变量
//
//		int a = 10;
//		printf("a = %d\n", a);//a的作用域 - a起作用
//	}
//	printf("3:%d\n", g_val);//第三次打印全局变量
//
//	return 0;
//}


//int main()
//{
//
//	printf("Hello World!\n");
//	/*{
//		int a = 10; //大括号内是a的作用域 - 在大括号内可以使用
//	}*/
//		printf("a = %d\n", a);//无法使用
//
//	return 0;
//}

//声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);//不能直接使用另一个源文件的全局变量，需要外部变量声明
//
//	return 0;
//}


//生命周期
//变量的生命周期：变量的创建和销回之间的时间段
//
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期

//int main()
//{
//	{
//		int a = 10;//局部范围
//		printf("%d\n", a);
//	}
//	//大括号外无法使用a
//	return 0;
//}


//常量
//#define MAX 10000;//定义MAX
//
//int main()
//{
//	//1.字面常量
//	3.14; 
//	10;//数字
//	'a';//字母''
//	"abcdef";//字符串""
//
//	//2.const修饰的常变量
//	const int num = 10;//const + 变量 - num就是常变量 - 具有常属性（不能改变的属性）
//	//num = 20;//可变 - +const后不可修改
//	//printf("num = %d\n", num);//20
//
//	int arr[10] = {0};//10个元素的数组
//
//	const int n = 10;//变量 - const修饰后常变量
//
//	int arr2[n] = {0};//n是变量/常变量，在这里都不行//此处需要常量
//	
//	//3.#define定义的标识符常量
//	MAX = 20000;//err
//	int n = MAX;//MAX不能改
//	printf("%d\n", n);//10000
//
//	return 0;
//}


	//4.枚举常量
	//可以一一列举的常量

	//性别
//enum Sex
//{
//	//这种枚举类型的变量未来的可能取值
//	//枚举常量
//	MALE = 3,//用，隔开//赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;//只能赋之前三个枚举常量里的一个
//	printf("%d\n", s);//打印出来值0，默认为0
//	//MALE = 3;//err
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//} 


//字符串就是一串字符 - 用双引号括起来的一串字符

//int main()
//{
//	"abcdef";
//	"Hello World";
//	return 0;
//}

//F10逐过程调试
//int main()
//{
//	//字符数组 - 数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0字符
//	//\0是字符串的结束标志
//
//	//char arr[] = "Hello";//[]不写，根据=后的内容初始化[]
//	char arr1[] = "abc";//双引号 - 一串字符
//	char arr2[] = { 'a','b','c','\0' };//单引号 - 一个字符
//	//char arr2[] = { 'a','b','c' };
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));//求arr1字符串长度
//	printf("%d\n", strlen(arr2));//求arr2字符串长度
//	//int len = strlen("abc");//string legth字符串长度
//	//printf("%d\n", len);
//	//打印字符串
//	//printf("%s\n", arr1);//%s输出字符串
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	//printf("c:\test\test.c");
//	printf("ab\ncd");
//	return 0;
//}

//int main()
//{
//	//printf("(are you ok\?\?)");//??) -- ] -三字母词
//	//(are you ok]
//	//printf("%c\n", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a");
//	return 0;
//}	
//printf在打印数据的时候，可以指定打印的格式
//printf("%d", 100);
//printf("%c", 'a');
//printf("%s", "abc");


//int main()
//{
//	//printf("%c", '\130');//8进制的130是十进制的多少呢？
//	//X -- ASCII码值是88
//	//printf("%c\n", '\101');//A - 65 - 8进制是：101
//	//printf("%c\n", '\x30');//16进制 - 48 - '0'
//	//printf("%d\n", strlen("abc"));//字符长度 - 3
//	printf("%d\n", strlen("c:\test\328\test.c"));//1.一个转义字符算一个字符 2.8进制没有8
//	return 0;
//}

//注释是用来解释复杂代码的
//

///*
//int main()
//{
//	//int a = 10;//C++的注释风格
//	
//	/*
//	int b = 0;
//	*/     //C语言的注释风格 - 不支持嵌套注释
//	
//	return 0;
//}
//*/