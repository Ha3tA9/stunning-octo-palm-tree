#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//Description
//输入一个整型数，存入变量i，通过子函数change把主函数的变量i除2，然后打印i，例如如果输入的为10，打印出5，如果输入的为7，打印出3
//
//Input
//一个整型数
//
//Output
//对应整型数除2后的商
//
//Sample Input 1
//10
//
//Sample Output 1
//5
//
//Sample Input 2
//7
//
//Sample Output 2
//3

void change(int *p)//相当于p = &i，*p = *&i，等价于i
{
	*p = *p / 2;
}


int main()//AC
{
	int i;
	scanf("%d", &i);
	change(&i);
	printf("%d\n", i);
	return 0;
}

//Description
//输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，
//字符串的输入长度小于最初输入的整型数大小，最后输出输入的字符串即可
//（无需考虑输入的字符串过长，超过了内存大小）；
//注意下面问题：
//
//char* p;
//scanf("%d", &n);
//p = malloc(n);
//scanf("%c", &c);//注意在scanf和gets中间使用scanf("%c",&c),去除换行
//gets(p);
//注意：OJ不支持fflush(stdin)清空标准输入缓冲区操作
//
//
//Input
//一个整型数和一个字符串，例如
//10
//hello
//
//
//Output
//输出输入的字符串，上面输入的是hello，那么输出hello
//
//Sample Input 1
//10
//hello
//
//Sample Output 1
//hello

int main()//AC
{
	char *p;
	int n;//存储申请多少个字节的空间大小
	char c;
	scanf("%d", &n);
	p = malloc(n);
	scanf("%c", &c);//注意在scanf和gets中间使用scanf("%c",&c)
	gets(p);//如果不通过上面的scanf去消除\n,gets不会卡住
	puts(p);
	return 0;
}