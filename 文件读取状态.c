#include <stdio.h>

struct Student
{
	char name[20];
	int age;
	char sex;
};

void readStuFromFile(){
	
	//���ļ�
	FILE *fp=fopen("student.txt", "a+" );
	struct Student stu;
//	void perror(const char *str) 
	if(fp!=NULL){
		perror("�ļ���״̬");
//		printf("���ļ��ɹ�\n");
	}else{
		perror("�ļ���״̬");
//printf("���ļ�ʧ��\n");
		fclose(fp);
		return ;
	}
	printf("sizeof(stu)=%d\n",sizeof(stu));

//	size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
//ptr -- ����ָ�������С�ߴ� size*nmemb �ֽڵ��ڴ���ָ��
//size -- ����Ҫ��ȡ��ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//nmemb -- ����Ԫ�صĸ�����ÿ��Ԫ�صĴ�СΪ size �ֽڡ�
	while(fread(&stu,sizeof(stu),1,fp)==1){
//		int ferror( FILE *stream )
		if(0!=ferror(fp)){
			perror("�ļ���ȡ״̬");
		}
		printf("name=%s \t age=%d \t sex=%c \n",stu.name,stu.age,stu.sex);
	}
//	int feof( FILE *stream );
	if(0!=feof(fp)){
		printf("�ļ���ȡ���\n");
	}else{
		perror("�ļ���ȡ״̬");
	}

	fclose(fp);
}

int main(int argc, char *argv[])
{
//	 int feof( FILE *stream );
	readStuFromFile();
	
	
	return 0;
}
