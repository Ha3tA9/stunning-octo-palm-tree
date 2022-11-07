#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//malloc需要使用的头文件
#include <string.h>

int main()
{
	int size;//size代表我们要申请多大字节的空间
	char* p;//void*类型的指针是不能偏移的，因此自己不会去定义无类型指针
	scanf("%d", &size);//输入要申请的空间大小
	//注意指针本身大小，和其指向的空间大小，是两码事，不能和前面的变量类比去理解！

	//malloc返回的void*代表无类型指针
	//使用malloc动态申请堆空间
	p = (char*)malloc(size); //强制类型转换与p的类型一致
	//p[0] = 'H';
	//p[1] = 'O';
	//p[2] = 'W';
	//p[3] = '\0';
	strcpy(p, "malloc success");
	puts(p);
	//不用时要free！释放申请的空间！
	//释放申请的空间时，给的地址，必须是最初malloc返回给我们的地址
	free(p); //free时必须使用malloc申请时返回的指针值，不能进行任何偏移
	printf("free success\n");
	return 0;
}