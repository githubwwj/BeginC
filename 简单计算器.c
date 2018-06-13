#include <stdio.h>

// 函数的定义
int add(){
	int sum;  // 返回两个数相加的结果
	int a,b;

	printf("请输入两个数字做加法运算\n" );

	scanf("%d %d",&a,&b);
	// scanf("%d-%d",&a,&b);

	printf("a=%d,b=%d\n", a,b);

	sum = a + b;

	return sum;
}