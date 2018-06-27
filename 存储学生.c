#include <stdio.h>
#include <string.h>

struct Student
{
	char name[20];
	int age;
	char sex;
};

void addStudent(struct Student*);
void writeStuToFile(struct Student *); //函数声明
void readStuFromFile();

int main(int argc, char *argv[])
{
	struct Student stu[3];

	addStudent(stu);
	writeStuToFile(stu);
	readStuFromFile();
	
	return 0;
}

void addStudent(struct Student *stu){

	strcpy(stu[0].name,"Mike");
	stu[0].age=24;
	stu[0].sex='M';

	strcpy(stu[1].name,"wwj");
	stu[1].age=24;
	stu[1].sex='M';

	strcpy(stu[2].name,"Bob");
	stu[2].age=25;
	stu[2].sex='M';
}

void writeStuToFile(struct Student * stu){
	//打开文件
	// w+ - 以读写方式打开文件, 文件不存在会创建新的文件, 文件存在会首先清空原有内容
	FILE *fp=fopen("student.txt", "w+" );
	printf("sizeof(*stu)=%d\n",sizeof(*stu));

//size -- 这是要读取的每个元素的大小，以字节为单位。
//nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
//int fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
	for(int i=0;i<3;i++){
		int len=fwrite(&stu[i],sizeof(struct Student),1,fp);
		printf("len=%d\t",len);
		if(len==1){
			printf("写入文件成功\n");
		}else{
			printf("写入文件失败\n");
		}
	}

	fclose(fp);
}

void readStuFromFile(){
	
	//打开文件
	FILE *fp=fopen("student.txt", "a+" );
	struct Student stu;
	if(fp!=NULL){
		printf("打开文件成功\n");
	}else{
		printf("打开文件失败\n");
		fclose(fp);
		return ;
	}
	printf("sizeof(stu)=%d\n",sizeof(stu));

//	size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
//ptr -- 这是指向带有最小尺寸 size*nmemb 字节的内存块的指针
//size -- 这是要读取的每个元素的大小，以字节为单位。
//nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
	while(fread(&stu,sizeof(stu),1,fp)==1){
		printf("name=%s \t age=%d \t sex=%c \n",stu.name,stu.age,stu.sex);
	}

	fclose(fp);
}
