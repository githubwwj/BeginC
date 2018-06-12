#include <stdio.h>

int qq;
static int sq=10; 

void add(int a,int b){
	qq=a+b;
	printf("%d\n", qq);

}

void sum(){
	//静态变量第一次初始化，以后就不会再初始化了
	//静态局部变量生命周期为整个源程序，但是只能在函数内使用
	//静态全局变量生命周期为整个源程序，但是只能在当前文件内使用，不能再其它的文件内使用
	static int y=10; 

	y++;
	printf("y=%d\n",y );
}

int main(int argc, char const *argv[])
{
	const float PI=3.1415926;
	#define i 10
	// #define int x 这样的写法是错的

	int a=10,b=20;
	printf("%.4f \t %d  \t %d\n", PI,i,a);

	printf("qq=%d\n",qq );

	add(a,b);

	int g=0;
	for ( ; g < 5; ++g)
	{
		sum();
		
	}

	return 0;
}

