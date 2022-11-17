#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void modify_pointer(int *&p, int *q)//引用必须和变量紧邻
{
	p = q;
}

int main()
{
	int *p = NULL;//0
	int i = 10;
	int *q = &i;
	modify_pointer(p, q);
	printf("after modify_pointer *p = %d\n", *p);
	return 0;//当进程已结束，退出代码不为0，那么代表进程异常结束
}

#include <stdio.h>
void modify_pointer(int **p, int *q)//相对于C++这里是int **p;
{
	*p = q;//这里的写法和例1.2中的是非常类似的
}

int main()
{
	int *p = NULL;
	int i = 10;
	int *q = &i;
	modify_pointer(&p, q);//相对于C++这里是&p
	printf("after modify_pointer *p = %d\n", *p);
	return 0;
}