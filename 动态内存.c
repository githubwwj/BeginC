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
	//��̬����һ���������ڴ�ռ��ڶ���,��С��40���ֽ�
	int *arr=malloc(sizeof(int)*10);

	printf("sizeof(arr)=%d\n",10*sizeof(int));

	//�ڴ�����,���ڴ��е�ֵȫ������Ϊ0
	memset(arr,0,sizeof(int)*10);

	for(int i=0;i<10;i++){
		printf("arr[%d]=%d \t",i,arr[i]);
	}

	printf("-------------\n");
	
	addData(arr,10);	

//	void *realloc(void *address, int newsize); 
	//���·����ڴ�ռ�
	//�ú������·����ڴ棬���ڴ���չ�� newsize��
	arr=realloc(arr,sizeof(int)*20);

	//addData(arr);	

	for(int i=0;i<20;i++){
		printf("arr[%d]=%d \t",i,arr[i]);
	}
	//void free(void *address); 
	//�ͷŶ��ڴ�ռ�,һ����Ҫ����
	free(arr);
	
	return 0;
}
