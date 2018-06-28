#include <stdio.h>

struct Student
{
	char name[20];
	int age;
	char sex;
};

void readStuFromFile(){
	
	//打开文件
	FILE *fp=fopen("student.txt", "a+" );
	struct Student stu;
//	void perror(const char *str) 
	if(fp!=NULL){
		perror("文件打开状态");
//		printf("打开文件成功\n");
	}else{
		perror("文件打开状态");
//printf("打开文件失败\n");
		fclose(fp);
		return ;
	}
	printf("sizeof(stu)=%d\n",sizeof(stu));

//	size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
//ptr -- 这是指向带有最小尺寸 size*nmemb 字节的内存块的指针
//size -- 这是要读取的每个元素的大小，以字节为单位。
//nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
	while(fread(&stu,sizeof(stu),1,fp)==1){
//		int ferror( FILE *stream )
		if(0!=ferror(fp)){
			perror("文件读取状态");
		}
		printf("name=%s \t age=%d \t sex=%c \n",stu.name,stu.age,stu.sex);
	}
//	int feof( FILE *stream );
	if(0!=feof(fp)){
		printf("文件读取完毕\n");
	}else{
		perror("文件读取状态");
	}

	fclose(fp);
}

int main(int argc, char *argv[])
{
//	 int feof( FILE *stream );
	readStuFromFile();
	
	
	return 0;
}
