#include <stdio.h>

//#include "one.h"
#ifndef _ONE_H_
#define _ONE_H_
void one();  //声明一个函数one

#endif

//void one();
//#include "two.h"
#ifndef _ONE_H_
#define _ONE_H_
void one();  //声明一个函数one

#endif

#ifndef _TWO_H_
#define _TWO_H_
void two(); //声明一个two函数
#endif

//void one();//one这个函数又进来了,降低了编译效率
//void two();


int main(int argc, char *argv[])
{
	printf("文件包含\n");
	
	return 0;
}
