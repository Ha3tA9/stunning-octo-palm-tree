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
//	//��whileѭ���У�break�������õ���ֹѭ��
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
	//����ctrl+z - getchar�Ͷ�ȡ����������EOF��
	while ((ch = getchar()) != EOF)////getchar��ȡ�ַ�
		putchar(ch);//���һ���ַ�
		//printf("%c\n", ch);
	return 0;
}

