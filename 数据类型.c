#include <stdio.h> //�����׼�������ͷ�ļ�

int main(int argc, char const *argv[])
{
	printf("char�����ֽ���=%d\n",sizeof(char));  //\n ������     java 2���ֽ�
	// %����ռλ��  %d ���һ��int  %s ���һ���ַ���   %c���һ���ַ�  %f���һ��������

	printf("short�����ֽ���=%d\n",sizeof(short));  //java 2���ֽ�
	printf("int�����ֽ���=%d\n",sizeof(int));  
	printf("long�����ֽ���=%d\n",sizeof(long));
	printf("float�����ֽ���=%d\n",sizeof(float));
	printf("double�����ֽ���=%d\n",sizeof(double));

	int*p;
	char*cp;

	printf("int��ָ���ֽ���=%d\n",sizeof(p));
	printf("char��ָ���ֽ���=%d\n",sizeof(cp));
//----------JAVA������������---------
// byte�����ֽ���=1
// boolean�����ֽ���=1
// char�����ֽ���=2
// short�����ֽ���=2
// int�����ֽ���=4
// long�����ֽ���=8
// float�����ֽ���=4
// double�����ֽ���=8
//----------JAVA������������---------
	

//----------c������������---------
// 	char�����ֽ���=1
// short�����ֽ���=2
// int�����ֽ���=4
// long�����ֽ���=4
// float�����ֽ���=4
// double�����ֽ���=8
// int��ָ���ֽ���=4
// char��ָ���ֽ���=4
//----------c������������---------


	return 0;
}