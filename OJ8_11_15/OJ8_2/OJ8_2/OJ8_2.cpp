#define _CRT_SECURE_NO_WARNINGS 1
//Description
//ʹ��C++�����ã�ע���ύʱ�Ѵ���ѡΪC++���������������ַ�ָ�� char* p, Ȼ�����Ӻ�����malloc����ռ䣨��СΪ100���ֽڣ���ͨ��fgets��ȡ�ַ�����Ȼ�����������н��������Ҫ���Ӻ���ʹ��C++�����ã�ע����C++�дӱ�׼�����ȡ�ַ�������Ҫʹ��fgets(p, 100, stdin)
//
//Input
//����һ���ַ��������� I love C language
//
//Output
//����������I love C language����ô���Ҳ��I love C language
//
//Sample Input 1
//I love C language
//
//Sample Output 1
//I love C language
//
//Sample Input 2
//how are you
//
//Sample Output 2
//how are you

#include <stdio.h>
#include <stdlib.h>

//���Ӻ���Ҫ�޸��������е�p����ô�ͼ����á�
void modify_pointer(char *&p)//void����Ҫд����ֵ
{
	p = (char*)malloc(100);//����ռ�
	fgets(p, 100, stdin);//���ʹ��fgets�������һ��ָ��������м������ָ��ָ��Ŀռ��С
	//stdin�����׼���� - fgets��ȫ - gets�����Խ�磬����ȫ
}

int main()//AC
{
	char *p = NULL;
	modify_pointer(p);
	puts(p);
	free(p);//����Ŀռ䲻ʹ�ú�ǵ�free��
	return 0;
}