#include <stdio.h>   //<>代表引入库文件
// #include ""  引入当前工程的头文件

int main(int argc, char const *argv[])
{
	//变量用来存储数据，值可以修改
	int a; //定义一个int变量，会申请4个字节的内存空间
	// type  argument_list
	int x=10,y=20;

	int area=x*y;

	//格式化字符串   argument_list  \t 制表符
	printf("%s \t %d\n","i am from c",area );

	//format string  argument_list
	scanf("%d",&a);

	a = a * a * a;
	printf("a的立方是=%d",a);




	return 0;
}