#include <stdio.h>

int x;  //ȫ��������������Ӧ�ó��������������һ����
int *stu=NULL; //��Ա����ϵͳ���Զ���ʼ��ֵ

void printScore(const int *p,int len){
	for(int i=0;i<len;i++){
//		p[i]=0;   const���ε����� ����ֻ������д
		int score= p[i];
		
		printf("stuScore[%d]=%d\n",i,score);
	}
}

int main(int argc, char *argv[])
{
	
	int stuScore[5]={80,85,90,45,55};

	printScore(stuScore,5);

	const int a=10;
	//a=20;  
	int y=0;  //�ֲ�������Ҫ�ֶ���ʼ��ֵ
	int *q=NULL;  //�ֲ����� ��Ҫ�ֶ���ʼ��
	printf("x=%d,y=%d\n",x,y);
	printf("stu=%p,q=%p",stu,q);
	
	return 0;
}
