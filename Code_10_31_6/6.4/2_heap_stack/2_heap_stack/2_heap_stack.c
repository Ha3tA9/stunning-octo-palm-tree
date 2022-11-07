#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//堆和栈的差异

//复试！
//函数栈空间释放后，函数内的所有局部变量消失
//低级错误
char* print_stack()//栈空间stack
{
	char c[100] = "I am print_stack func";//栈空间在子函数结束后被释放了
	char *p;
	p = c;
	puts(p);//可以打印出I am print_stack func
	return p;
}
//堆空间不会因为函数执行结束而释放
char* print_malloc()//堆空间heap
{
	char* p = (char*)malloc(100);//堆空间在整个进程中一直有效，不因为函数结束而消亡
	strcpy(p, "I am print malloc func");
	puts(p);
	return p;
}

int main()
{
	char *p;
	p = print_stack();//数据放在栈空间
	puts(p);//子函数中造的数据到主函数中打印出乱码
	//是因为栈空间已经被释放掉了
	p = print_malloc();//数据放在堆空间
	puts(p);
	free(p);//只有free时，堆空间才会释放
	return 0;
}