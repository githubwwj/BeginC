#include <stdio.h>

int main(int argc, char *argv[])
{
	int arr[3] = {3,5,7};

	int (*p)[3];  //����һ������ָ�� ָ����������ĵ�ַ
	p = &arr; //ָ����������ĵ�ַ��ָ��������Ԫ�ص�ַ���������

// *p <==> arr  //ָ������Ԫ�ص�ָ�� 
// *((*p) + 1)
	printf("p=%p \t *p=%p\n",p,*p); 
	printf("arr[0]=%d \t **p=%d \n",arr[0],**p);
	printf("*((*p)+1)=%d\n",*((*p)+1));  //��ȡ�����ֵ

	printf("sizeof(p)=%d\n",sizeof(p));

	return 0;
}
