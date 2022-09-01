#include <stdio.h>;
//int main()
//{
//	printf("Hello World!");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 100);
//	return 0;
//}

#include<stdio.h>
int main()
{
	//printf("%d\n", 100);//打印一个整数 - %d
	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(long double));
	return 0;
}