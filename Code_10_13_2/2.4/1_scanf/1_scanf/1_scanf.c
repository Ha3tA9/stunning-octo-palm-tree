#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//scanf用来读取标准输入，scanf把标准输入内的内容，需要放到某个变量空间里，因此变量必须取地址
//scanf会阻塞，是因为标准输入缓冲区是空的

//scanf %d %f 发现里边有\n空格，忽略
//scanf %c 不忽略内容
int main()
{
	int i = 10;
	char c;
	float f;
	scanf("%d", &i);//注意一定要取地址
	printf("i = %d\n", i);//把标准缓冲区中的整型数读走了

	//rewind(stdin);//清空标准输入缓冲区

	//scanf("%c", &c);//读取走了转义字符\n!!!
	//printf("c = %c\n", c);//没有等待输入c - 输出了换行!!!

	scanf("%f", &f);//忽略转义字符\n
	printf("f = %f\n", f);

	//fflush(stdin);//清空标准输入缓冲区
	return 0;
}//直接运行程序卡住 - 阻塞