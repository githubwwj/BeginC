#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//动态分配内存空间造成内存泄漏
	//静态申请的内存不会造成内存泄漏
	int *arr=malloc(sizeof(int)*10);

//	野指针：存放是随机的，访问未知的内存空间
	//arr[10]  访问不是自己的内存空间,产生野指针
	//访问不属于自己的内存空间会造成危险
	for(int i=0;i<10;i++){
		printf("arr[%d]=%d\t",i,arr[i]);
	}
	
	printf("arr[10]=%p\n",arr[10]);

	//释放内存
	free(arr);
	
	return 0;
}