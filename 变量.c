#include <stdio.h>   //<>����������ļ�
// #include ""  ���뵱ǰ���̵�ͷ�ļ�

int main(int argc, char const *argv[])
{
	//���������洢���ݣ�ֵ�����޸�
	int a; //����һ��int������������4���ֽڵ��ڴ�ռ�
	// type  argument_list
	int x=10,y=20;

	int area=x*y;

	//��ʽ���ַ���   argument_list  \t �Ʊ��
	printf("%s \t %d\n","i am from c",area );

	//format string  argument_list
	scanf("%d",&a);

	a = a * a * a;
	printf("a��������=%d",a);




	return 0;
}