#include <stdio.h>

int main(){
	
	int fahr=0;  //华氏温度
	int celsius=0; //摄氏温度
	int lower=0;  //温度表的下限
	int upper=300; //温度表上线
	int step=20;  //步长

//圆括号 ( )、方括号 [ ]、花括号 { }
//	℃=(5/9) * (f-32);           5 * (f-32)  /9
	while(fahr <= upper){
		celsius = 5 * (fahr-32)/9;    //每一行代码我们称之为语句
		printf("%3d\t%6d\n",fahr,celsius);   //循环体   %3d  至少占3个字符宽度
		fahr = fahr +step;
	}

	

	return 0;
}