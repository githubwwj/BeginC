#include <stdio.h>

int main(int argc, char *argv[])
{
	int arr[3] = {3,5,7};

	int (*p)[3];  //定义一个数组指针 指向整个数组的地址
	p = &arr; //指向整个数组的地址和指向数组首元素地址是有区别的

// *p <==> arr  //指向数组元素的指针 
// *((*p) + 1)
	printf("p=%p \t *p=%p\n",p,*p); 
	printf("arr[0]=%d \t **p=%d \n",arr[0],**p);
	printf("*((*p)+1)=%d\n",*((*p)+1));  //获取数组的值

	printf("sizeof(p)=%d\n",sizeof(p));

	return 0;
}
