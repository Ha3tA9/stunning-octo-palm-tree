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
//	//��������
//	char password[20] = { 0 };//���20���ַ���Ĭ��0
//	printf("����������:>");
//	scanf("%s", password);//����������������Ԫ�صĵ�ַ������Ҫ����ȡ��ַ
//	printf("��ȷ������(Y/N):>");
//	//��������
//	//getchar();//��'\n'��ȡ��
//
//	//���������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;//�����ַ�
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//�����ַ������ˣ�ASCII��ֵ48-57��
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 10;//��ʼ��
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
//	while (i <= 5)//�жϲ���
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
		i += 2;//��������
	}
	return 0;
}