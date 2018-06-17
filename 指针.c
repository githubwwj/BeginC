#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int a=100;
	int *p=&a;

	//指针变量 存放的就是地址变量
	printf("a的地址是%x,p存放的值是%x,p的地址是=%x\n",&a,p,&p);

	*p = 20; //*p 是一级指针

	printf("a=%d\n",a);
	int **q= &p;   //二级指针指向一级指针的地址
	**q =199;
	printf("a=%d,*p=%d,**q=%d\n",a,*p,**q);

	return 0;
}
