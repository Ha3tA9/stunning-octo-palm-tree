#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//	//输入密码
//	char password[20] = { 0 };//存放20个字符，默认0
//	printf("请输入密码:>");
//	scanf("%s", password);//数组名代表数组首元素的地址，不需要另外取地址
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//把'\n'读取走
//
//	//清理缓冲区中的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;//清理字符
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//数字字符的两端（ASCII码值48-57）
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 10;//初始化
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 5)//判断部分
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i += 2;//调整部分
	}
	return 0;
}