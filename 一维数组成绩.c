#include <stdio.h>

int x;  //全部变量，和整个应用程序的生命周期是一样的
int *stu=NULL; //成员变量系统会自动初始化值

void printScore(const int *p,int len){
	for(int i=0;i<len;i++){
//		p[i]=0;   const修饰的数组 内容只读不能写
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
	int y=0;  //局部变量需要手动初始化值
	int *q=NULL;  //局部变量 需要手动初始化
	printf("x=%d,y=%d\n",x,y);
	printf("stu=%p,q=%p",stu,q);
	
	return 0;
}
