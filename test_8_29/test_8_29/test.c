#define _CRT_SECURE_NO_WARNINGS 1
//放在代码的第一行


//写代码
//1.写出主函数(main函数)
//100-500代码
//如何执行呢？ - C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口

//  //写个代码，在屏幕上打印hello world
//printf - 库函数 - 在屏幕上打印信息的
//printf 的使用,需要打招呼(引用头文件 stdio.h)

//
#include <stdio.h>//头函数
//
//int main()
//{
//	printf("Hello World!\n");
//
//	return 0;
//}

//  //编译+链接+运行代码
//  //快捷键:ctrl+f5
//  // 
//  //程序执行的太快，没有看到
//  //为了看到结果，设置属性(vs2013)? vs2022不用改

//  //数据类型
//  //计算机语言 - 写程序 - 解决生活中问题
//  //必须有能力来描述生活中的问题
//  //购物商场 - 上架商品，价格 - 15.6元 - 小数
//  //年龄 - 50
//  //C语言 - 浮点数 1.56*10^1
//  //		- 整型


//a
//'a' - 字符a

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long 
//	//long long
//	
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
	//printf("%d\n", 100);//打印一个整数 - %d
	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(char)); //ctrl+d 复制一行代码
//	printf("%d\n", sizeof(short)); 
//	printf("%d\n", sizeof(int)); 
//	printf("%d\n", sizeof(long)); 
//	printf("%d\n", sizeof(long long)); 
//	printf("%d\n", sizeof(float)); 
//	printf("%d\n", sizeof(double)); 
//
//	return 0;
//}

//int main()
//{
	//  //创建一个变量
	//  //指定类型 变量的名字 = 数值；
	//  //类型 变量的名字；//不推荐
	//int age = 20;
	//double weight = 99.8;

	//age = age + 1;
	//weight = weight - 10;////输入完后要打分号
	//printf("%d\n",age);////整形用%d
	//printf("%lf\n", weight);////双精度浮点型用%lf
	//return 0;
//}
//  //%d - 整形
//  //%f - float
//  //%lf - double


//全局变量 - {}外部定义的
//int a = 100;
//int main()
//{
//	//局部变量 - 成员变量 - {}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部变量优先
//	//不建议把全局变量和局部变量名字写成一样的
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//写两个代码求两个整数的和
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;////写;
	scanf("%d %d", &a, &b);//输入两个整数并赋值给变量a和变量b - 格式 - 存到a b中 地址//加"%d"双引号
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}