#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

void addData(int * a,int num){

	for(int i=0;i<num;i++){
		a[i] = i+10;
	}
}
int main(int argc, char *argv[])
{
	//void *malloc(int num); 
	//动态创建一块连续的内存空间在堆上,大小是40个字节
	int *arr=malloc(sizeof(int)*10);

	printf("sizeof(arr)=%d\n",10*sizeof(int));

	//内存设置,把内存中的值全部设置为0
	memset(arr,0,sizeof(int)*10);

	for(int i=0;i<10;i++){
		printf("arr[%d]=%d \t",i,arr[i]);
	}

	printf("-------------\n");
	
	addData(arr,10);	

//	void *realloc(void *address, int newsize); 
	//重新分配内存空间
	//该函数重新分配内存，把内存扩展到 newsize。
	arr=realloc(arr,sizeof(int)*20);

	//addData(arr);	

	for(int i=0;i<20;i++){
		printf("arr[%d]=%d \t",i,arr[i]);
	}
	//void free(void *address); 
	//释放堆内存空间,一定不要忘记
	free(arr);
	
	return 0;
}
