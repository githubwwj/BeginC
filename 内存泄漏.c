#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//��̬�����ڴ�ռ�����ڴ�й©
	//��̬������ڴ治������ڴ�й©
	int *arr=malloc(sizeof(int)*10);

//	Ұָ�룺���������ģ�����δ֪���ڴ�ռ�
	//arr[10]  ���ʲ����Լ����ڴ�ռ�,����Ұָ��
	//���ʲ������Լ����ڴ�ռ�����Σ��
	for(int i=0;i<10;i++){
		printf("arr[%d]=%d\t",i,arr[i]);
	}
	
	printf("arr[10]=%p\n",arr[10]);

	//�ͷ��ڴ�
	free(arr);
	
	return 0;
}