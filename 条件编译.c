#include <stdio.h>

#define MAX 100
int main(int argc, char *argv[])
{
	#undef MAX  //取消MAX的作用域
	//int a=MAX;
	#define MAX 100
	//条件编译:预编译阶段这段代码的条件满足,加入到编译
	//#代表预编译
	#if MAX==0
	{
		printf("MAX等于0\n");
	}
	#elif MAX>0
	{
		printf("MAX大于0\n");
	}
	#else
		printf("MAX小于0\n");
	#endif
//等同于把这行代码加入到编译之中	printf("MAX大于0\n");

	#if defined(MAX)
	{
		int res=10+30;
		printf("MAX=%d \t res=%d\n",MAX,res);
	}
	#endif

	#ifndef a
			printf("a不存在SSFDSFSDF\n");
	#endif
	return 0;
}
