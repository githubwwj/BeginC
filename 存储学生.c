#include <stdio.h>
#include <string.h>

struct Student
{
	char name[20];
	int age;
	char sex;
};

void addStudent(struct Student*);
void writeStuToFile(struct Student *); //��������
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
	//���ļ�
	// w+ - �Զ�д��ʽ���ļ�, �ļ������ڻᴴ���µ��ļ�, �ļ����ڻ��������ԭ������
	FILE *fp=fopen("student.txt", "w+" );
	printf("sizeof(*stu)=%d\n",sizeof(*stu));

//size -- ����Ҫ��ȡ��ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//nmemb -- ����Ԫ�صĸ�����ÿ��Ԫ�صĴ�СΪ size �ֽڡ�
//int fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
	for(int i=0;i<3;i++){
		int len=fwrite(&stu[i],sizeof(struct Student),1,fp);
		printf("len=%d\t",len);
		if(len==1){
			printf("д���ļ��ɹ�\n");
		}else{
			printf("д���ļ�ʧ��\n");
		}
	}

	fclose(fp);
}

void readStuFromFile(){
	
	//���ļ�
	FILE *fp=fopen("student.txt", "a+" );
	struct Student stu;
	if(fp!=NULL){
		printf("���ļ��ɹ�\n");
	}else{
		printf("���ļ�ʧ��\n");
		fclose(fp);
		return ;
	}
	printf("sizeof(stu)=%d\n",sizeof(stu));

//	size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
//ptr -- ����ָ�������С�ߴ� size*nmemb �ֽڵ��ڴ���ָ��
//size -- ����Ҫ��ȡ��ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//nmemb -- ����Ԫ�صĸ�����ÿ��Ԫ�صĴ�СΪ size �ֽڡ�
	while(fread(&stu,sizeof(stu),1,fp)==1){
		printf("name=%s \t age=%d \t sex=%c \n",stu.name,stu.age,stu.sex);
	}

	fclose(fp);
}
