#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 1;
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
//	//在while循环中，break用于永久的终止循环
//
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{ 
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	//键入ctrl+z - getchar就读取结束（读到EOF）
	while ((ch = getchar()) != EOF)////getchar获取字符
		putchar(ch);//输出一个字符
		//printf("%c\n", ch);
	return 0;
}

