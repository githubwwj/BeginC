#include <stdio.h>  
#include "简单计算器.h"  //引入头文件中的函数声明
 //搜索这个文件的路径是先从当前工程查找这个头文件,找到这个头文件后，直接把声明的代码插入这行
//从编译器路径去查找这个文件
//从系统的环境变量去查找


int minus();

int main(int argc, char const *argv[])
{
	int result=add();
	printf("result=%d\n",result );

	result=minus();
	printf("result=%d\n",result );
	
	return 0;
}

int minus(){
	int result;
	int a,b;

	printf("请输入两个数字做减法计算" );
	scanf("%d %d",&a,&b);
	result = a - b;
	return result;
}