#include <stdio.h>

int main(int argc, char *argv[])
{
	enum season { spring=500,summer=505,fall,winter} sea; //������һ��ö��
	//spring=500,summer=505,fall,winter ���ǳ���
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
