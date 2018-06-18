#include <stdio.h>

int main(int argc, char *argv[])
{
	int arr[5] = {3,5,7,9,10};

	printf("&arr=%p,arr=%p\n",&arr,arr);
	
	int (*p)[5] ;  //数组指针  

	p = &arr;  //数组指针指向整个数组
	//&a 是整个数组的首地址，a是数组首元素的首地址
	//在C 语言里，赋值符号“=”号两边的数据类型必须是相同的，如果不同需要显示或隐式的类型转换。


	printf("%d \t p=%p\n",sizeof(*p),p);

	for(int i=0;i<3;i++){
		
		
	}
	
	
	return 0;
}
