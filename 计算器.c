#include <stdio.h> //<>：直接从库文件中查找头文件   stdio.h 标准的输入(键盘和鼠标等等)输出(屏幕等)头文件

/* 
  编译器完全忽略掉注释
  函数返回值 函数名(参数列表)
 {
    函数代表
 } 
*/
// 输入两个整数，计算两个数相加
int add(){
	int sum;  // 返回两个数相加的结果
	int a,b;

	printf("请输入两个数字做加法运算\n" );

	scanf("%d %d",&a,&b);
	// scanf("%d-%d",&a,&b);

	printf("a=%d,b=%d\n", a,b);

	sum = a + b;

	return sum;
}

int minus(){
	int result;
	int a,b;

	printf("请输入两个数字做减法计算\n" );
	scanf("%d %d",&a,&b);
	result = a - b;
	return result;
}

int mulitply(){
	int result;
	int a,b;

	printf("请输入两个数字做乘法计算\n" );
	scanf("%d %d",&a,&b);
	result = a * b;
	return result;
}

int divide(){
	int result;
	int a,b;

	printf("请输入两个数字做除法计算\n" );
	scanf("%d %d",&a,&b);
	result = a / b;
	return result;
}

void cal(){
	printf("请选择运算规则\n");
	int result;
	int isLoop=1;
	int calRule; //代表运算规则
	while(isLoop){
		printf("1 代表加法 2 代表减法 3 乘法  4 除法 5 代表退出\n");
		scanf("%d",&calRule);
		switch(calRule){
			case 1:
				result=add();

				break;
			case 2:
				result=minus();
				break;
			case 3:
				result=mulitply();
				break;
			case 4:
				result=divide();
			 	break;
			case 5:
				isLoop=0;
				break;
			default:
				isLoop=0;
				break;
		}
		if(calRule ==1 || calRule ==2 || calRule==3 || calRule ==4){
			printf("计算结果=%d\n",result );
		}
		
	}
	

	

}


int main(int argc, char const *argv[])
{
	
	cal();



	return 0;
}