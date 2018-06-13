#include <stdio.h>


/*
   函数返回值 函数名（参数列表）
   {
	  code;
   }
	被调用函数在调用函数之前
*/
void gradeIf(){
	printf("请输入学习成绩(满分100)\n");
	int grade;
	int isLoop=1;

	/*
	  if(条件表达式){
			code//
	  }else if(条件表达式){
		code
	  }else{
		
	  }
	*/
	while(isLoop){
		scanf("%d",&grade);
		if(grade>=90 && grade<=100){
			printf("%d分是%s\n",grade,"学习棒棒的" );
		}else if(grade>=80 && grade<90){
			printf("%d分是%s\n",grade,"不错的，中等分数" );
		}else if(grade>=70 && grade<80){
			printf("%d分是%s\n",grade,"有待提高" );		
		}else if(grade>=0 && grade<=60){
			printf("%d分是%s\n",grade,"很大的成长空间" );
		}else{
			isLoop=0;
			printf("您输入与了一个非法的数字\n");
		}
	}
	
}

void gradeSwitch(){
	printf("请输入学习成绩(满分100)\n");
	int grade;
	int isLoop=1;
	/**
	  switch(整型表达式){
			case 数值：
				break;
			case 数值:
			default:
					break;
	  }
	*/
	while(isLoop){
		scanf("%d",&grade);
		switch(grade/10){
			case 10:
			case 9:
				printf("%d分是%s\n",grade,"学习棒棒的" );
				break;
			case 8:
				printf("%d分是%s\n",grade,"不错的，中等分数" );
				break;
			case 7:
				printf("%d分是%s\n",grade,"有待提高" );		
				break;
			case 6:
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
				printf("%d分是%s\n",grade,"很大的成长空间" );
				break;
			default:
				printf("您输入与了一个非法的数字\n");
				isLoop=0;
					break;
		}

	}
}


int main(int argc, char const *argv[])
{
	gradeIf();  //调用函数
	// gradeSwitch();

	return 0;
}