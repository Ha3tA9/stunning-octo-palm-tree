#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//char c[10] = { 'I','a','m','h','a','p','p','y' };//不好用
//	char c[10] = "Iamhappy";//用这种
//	return 0;
//}


//模拟printf("%s",c)操作
void print(char d[])//不需要输入数组长度
{
	int i = 0;
	while (d[i])//当循环到结束符时，循环结束
	{
		printf("%c", d[i]);
		i++;
	}
	printf("\n");
}

//如何初始化字符数组，字符串如何输出
//输出字符串乱码时，要去查看字符数组中是否存储了结束符
int main()
{
 	char c[6] = "hello";
	char d[5] = "how";
	printf("%s\n",c);//使用%s来输出一个字符串，直接把数组名放过来
	printf(d);

	return 0;
}