#include <stdio.h>

#define MAX 100
int main(int argc, char *argv[])
{
	#undef MAX  //ȡ��MAX��������
	//int a=MAX;
	#define MAX 100
	//��������:Ԥ����׶���δ������������,���뵽����
	//#����Ԥ����
	#if MAX==0
	{
		printf("MAX����0\n");
	}
	#elif MAX>0
	{
		printf("MAX����0\n");
	}
	#else
		printf("MAXС��0\n");
	#endif
//��ͬ�ڰ����д�����뵽����֮��	printf("MAX����0\n");

	#if defined(MAX)
	{
		int res=10+30;
		printf("MAX=%d \t res=%d\n",MAX,res);
	}
	#endif

	#ifndef a
			printf("a������SSFDSFSDF\n");
	#endif
	return 0;
}
