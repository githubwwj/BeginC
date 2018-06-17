#include <stdio.h>

void addStuGrade(int  stuGrade[]){

	for(int i=0;i<3;i++){
		scanf("%d",&stuGrade[i]);
	}
}

int main(int argc, char *argv[])
{
	int a=10;
	//数据类型 * 变量名  定义指针
	int *p; //定义一个指针p  指针的目标是来存放地址的
	p = &a; //& 取地址符,获取a的地址存放到p

	printf("a的地址=%p \t p=%p  p的地址=%p\n",&a,p,&p);
	a=20;  //通过变量直接修改值成为直接引用
	*p = 30;  //*p 修改a的存储单元的值陈为间接引用
	printf("a=%d\n",a);

	int *q=&a;
	*q = 100;
	printf("a=%d\n",a);

	printf("请输入学生的成绩\n");
	//数组类型 函数名[常数];
	int stuGrade[3];  //数字的内存空间是连续的,数组名就是数组首地址
	addStuGrade(stuGrade);

	for(int i=0;i<3;i++){
		printf("stuGrade[%d]=%d \t 地址是=%p\n",i,stuGrade[i],&stuGrade[i]);
	}

	printf("--------------------------------\n");
	p=stuGrade;
	
	*(p+0) = 100;
	*(p+1) = 90;
	*(p+2) = 80;

	for(int i=0;i<3;i++){
		printf("stuGrade[%d]=%d \t 地址是=%p \t p的地址是=%p\n",i,stuGrade[i],&stuGrade[i],p);
	}
	
	printf("--------------------------------\n");

	*(stuGrade+0)=10;
	*(stuGrade+1)=20;
	*(stuGrade+2)=66;

	for(int i=0;i<3;i++){
		printf("stuGrade[%d]=%d \t 地址是=%p \t p的地址是=%p\n",i,stuGrade[i],&stuGrade[i],p);
	}
	return 0;
}
