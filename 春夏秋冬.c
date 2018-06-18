#include <stdio.h>

int main(int argc, char *argv[])
{
	enum season { spring=500,summer=505,fall,winter} sea; //定义了一个枚举
	//spring=500,summer=505,fall,winter 都是常量
	enum season s;

	

	printf("spring=%d\n",spring);
	for(int i=spring;i<=winter;i++){
		printf("%d\n",i);
	}
	printf("winter=%d\n",winter);

	sea = fall;
	printf("sea=%d",sea);
	
	return 0;
}
