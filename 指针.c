#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int a=100;
	int *p=&a;

	//ָ����� ��ŵľ��ǵ�ַ����
	printf("a�ĵ�ַ��%x,p��ŵ�ֵ��%x,p�ĵ�ַ��=%x\n",&a,p,&p);

	*p = 20; //*p ��һ��ָ��

	printf("a=%d\n",a);
	int **q= &p;   //����ָ��ָ��һ��ָ��ĵ�ַ
	**q =199;
	printf("a=%d,*p=%d,**q=%d\n",a,*p,**q);

	return 0;
}
