#include <stdio.h>  
#include "�򵥼�����.h"  //����ͷ�ļ��еĺ�������
 //��������ļ���·�����ȴӵ�ǰ���̲������ͷ�ļ�,�ҵ����ͷ�ļ���ֱ�Ӱ������Ĵ����������
//�ӱ�����·��ȥ��������ļ�
//��ϵͳ�Ļ�������ȥ����


int minus();

int main(int argc, char const *argv[])
{
	int result=add();
	printf("result=%d\n",result );

	result=minus();
	printf("result=%d\n",result );
	
	return 0;
}

int minus(){
	int result;
	int a,b;

	printf("������������������������" );
	scanf("%d %d",&a,&b);
	result = a - b;
	return result;
}