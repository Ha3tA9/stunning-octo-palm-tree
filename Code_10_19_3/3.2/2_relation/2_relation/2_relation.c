#define _CRT_SECURE_NO_WARNINGS 1
//关系运算符 - 优先级小于算术运算符
#include <stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a))
//	{
//		if (3 < a < 10)//不对！ - 运算顺序从左往右 - 3<a为真即1，1<10为真1 - 3<a为假即0，1<10为真1
//			//因此永远为1！
//		{
//			printf("a is between 3 and 10\n");
//		}
//		else
//		{
//			printf("a is not between 3 and 10\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int a;
	while (scanf("%d", &a))
	{
		if (3 < a && a < 10)//逻辑与！
		{
			printf("a is between 3 and 10\n");
		}
		else
		{
			printf("a is not between 3 and 10\n");
		}
	}
	return 0;
}
