#include <stdio.h>

typedef int Integer; //给int类型取一个别名为Integer
typedef float Float;
typedef short Short;
typedef char * String;
typedef double Double;
typedef unsigned int UInteger;

Integer add(Integer a,Integer b){
	return a+b;
}

int main(int argc, char *argv[])
{
	
	int a=10;

	Integer b=20;
	Integer res=add(a,b);
	printf("res=%d\t",res);

	String s1="Hello typedef";

	printf("s1=%s\n",s1);

	unsigned int age=10;
	UInteger height=175;

	printf("height=%d \t age=%d\n",height,age);
	return 0;
}
