#include <stdio.h>

void addStudentName(char ourName[][20]){
	printf("请输入学生的名字\n");
	for(int i=0;i<3;i++){
		printf("ourName[%d]=",i);
		scanf("%s",ourName[i]);
	}
}

int main(int argc, char *argv[])
{
	//定义字符串的时候出事化值,这个写法呢要加\0,代表字符串的结束标志
	char stuName[]={'M','i','k','e','\0'};//字符串其实就是一个一个的字符组成
	char name[]={"zhangsan"};  //系统默认给这个字符串加一个\0

	int len=sizeof(stuName);
	printf("stuName len=%d\n",len);


	for(int i=0;i<sizeof(stuName);i++){
		printf("%c",stuName[i]);
	}
	printf("\n");

	printf("%s\n",stuName);
	printf("%s\n",name);


	char ourName[3][20];

	addStudentName(ourName);

	for(int i=0;i<3;i++){
		printf("ourName[%d]=您输入的学生名字是:%s\n",i,ourName[i]);
	}
	
	
	return 0;
}
