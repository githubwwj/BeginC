#include <stdio.h>

int main(int argc, char *argv[])
{
	int arr[5] = {3,5,7,9,10};

	printf("&arr=%p,arr=%p\n",&arr,arr);
	
	int (*p)[5] ;  //����ָ��  

	p = &arr;  //����ָ��ָ����������
	//&a ������������׵�ַ��a��������Ԫ�ص��׵�ַ
	//��C �������ֵ���š�=�������ߵ��������ͱ�������ͬ�ģ������ͬ��Ҫ��ʾ����ʽ������ת����


	printf("%d \t p=%p\n",sizeof(*p),p);

	for(int i=0;i<3;i++){
		
		
	}
	
	
	return 0;
}
