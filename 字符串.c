#include <stdio.h>

void addStudentName(char ourName[][20]){
	printf("������ѧ��������\n");
	for(int i=0;i<3;i++){
		printf("ourName[%d]=",i);
		scanf("%s",ourName[i]);
	}
}

int main(int argc, char *argv[])
{
	//�����ַ�����ʱ����»�ֵ,���д����Ҫ��\0,�����ַ����Ľ�����־
	char stuName[]={'M','i','k','e','\0'};//�ַ�����ʵ����һ��һ�����ַ����
	char name[]={"zhangsan"};  //ϵͳĬ�ϸ�����ַ�����һ��\0

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
		printf("ourName[%d]=�������ѧ��������:%s\n",i,ourName[i]);
	}
	
	
	return 0;
}
