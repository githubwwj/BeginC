#include <stdio.h>  //#include 文件包含预处理指令

//#代表的是预处理指令,与标准的C语句区别
//#define 宏名 替换字符串
//1 不带参数的宏定义
#define PI 3.14
#define RADIUS 100
#define GIRTH PI * RADIUS * 2

//2 带参数的宏定义
#define average(a,b) (a+b)/2

//#define multi(a,b) a*b  //计算两个数相乘这个写法是错的
#define multi(a,b) (a)*(b)  //(3+4)*(5)

#define divider(a,b) (a)/(b)  //(30+15)/(10+5)

int main(int argc, char *argv[])
{
	int girth=2 * PI * RADIUS; //计算圆的周长
	float g=GIRTH;  //3.14 * 100 * 2
	printf("girth=%d \t GIRTH=%.1f \n",girth,g);

	int average=average(10,20); // (10+20)/2
	printf("average=%d\n",average);

	int multiply=multi(3+4,5);
	printf("multiply=%d\n",multiply);

	int d=divider(30+15,10+5);
	printf("d=%d\n",d);

	#undef PI  //把PI的作用域取消掉
	//int a=PI;

	
	return 0;
}
