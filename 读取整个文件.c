#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//打开文件
	FILE *fp=fopen("指针.c", "a+" );
	// int fseek( FILE *stream, long offset, int origin );
	// SEEK_SET	文件的开头
	// SEEK_CUR	文件指针的当前位置
	// SEEK_END	文件的末尾
	if(0==fseek(fp,0,SEEK_END)){
		printf("文件指针在末尾\n");
	}else{
		printf("文件指针移动失败\n");
	}
	//得到文件长度
	long fileLen=ftell(fp);
	printf("fileLen=%d",fileLen);
	char buff[fileLen];

//	void *memset( void *buffer, int ch, size_t count );
	memset(buff,'\0',fileLen);
//	fseek(fp,0,SEEK_SET);
//void rewind( FILE *stream );
	rewind(fp);
	
//	int fread( void *buffer, size_t size, size_t num, FILE *stream );
	int len=fread(buff,sizeof(char),fileLen,fp);
	
	printf("len=%d\n",len);

	printf("%s",buff);

	fclose(fp);
	
	return 0;
}
