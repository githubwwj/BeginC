#include <stdio.h>

int main(){
	
	//第一部分 初始化  int fahr=0; 只执行一次
	//第二部分 循环条件
	//第三部分 执行步长
	for(float fahr=0;fahr<300;fahr=fahr+20){
		//5 * (f-32)  /9
		//循环体
		//int celsius= 5 * (fahr-32) /9;
//		printf("%d\t%d\n",fahr,celsius);
//		float celsius = 5.0 * (fahr-32)/9.0;
		float celsius = 5.0/9 * (fahr-32);
		printf("%3.0f\t%6.1f\n",fahr,celsius);

	}

	return 0;
}


