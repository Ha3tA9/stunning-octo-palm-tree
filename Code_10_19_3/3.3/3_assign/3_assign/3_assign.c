#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 1, b = 2;
//	//a + 25 = b;//������� - lvalue required as left operand of assignment
//	//������� ������һ����ֵ - ���ʽa+25����һ����ֵ
//
//	//д����
//	b = a + 25;//�������Ϊb
//
//	return 0;
//}
//
////iNum = iNum + 5;
////�����޸�Ϊ
////iNum += 5;

int main()
{
	int a = 1, b = 2;
	//a = a + 3;
	//���Լ�дΪ��
	a += 3;
	b *= 5;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}