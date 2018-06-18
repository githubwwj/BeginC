#include <stdio.h>

int add(void *a,void *b){
	int result=0;
	result= *(int*)a + *(int *)b;
	return result;
}

int main(int argc, char *argv[])
{
	int a=100;
	int b=15;
	void *p=&a; //void * 可以指向任何类型
	
	printf("a=%d\n",*(int *)p);

	int res=add(&a,&b);
	printf("res=%d\n",res);
	
	return 0;
}
