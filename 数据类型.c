#include <stdio.h> //引入标准输入输出头文件

int main(int argc, char const *argv[])
{
	printf("char类型字节数=%d\n",sizeof(char));  //\n 代表换行     java 2个字节
	// %代表占位符  %d 输出一个int  %s 输出一个字符串   %c输出一个字符  %f输出一个浮点型

	printf("short类型字节数=%d\n",sizeof(short));  //java 2个字节
	printf("int类型字节数=%d\n",sizeof(int));  
	printf("long类型字节数=%d\n",sizeof(long));
	printf("float类型字节数=%d\n",sizeof(float));
	printf("double类型字节数=%d\n",sizeof(double));

	int*p;
	char*cp;

	printf("int型指针字节数=%d\n",sizeof(p));
	printf("char型指针字节数=%d\n",sizeof(cp));
//----------JAVA语言数据类型---------
// byte类型字节数=1
// boolean类型字节数=1
// char类型字节数=2
// short类型字节数=2
// int类型字节数=4
// long类型字节数=8
// float类型字节数=4
// double类型字节数=8
//----------JAVA语言数据类型---------
	

//----------c语言数据类型---------
// 	char类型字节数=1
// short类型字节数=2
// int类型字节数=4
// long类型字节数=4
// float类型字节数=4
// double类型字节数=8
// int型指针字节数=4
// char型指针字节数=4
//----------c语言数据类型---------


	return 0;
}