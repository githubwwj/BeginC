#include <stdio.h>

// FILE *fopen( const char *fname, const char *mode );

// r - 以只读方式打开一个文件, 该文件必须存在
// w - 以只写方式打开一个文件, 文件不存在会创建新的文件, 文件存在会首先清空原有内容
// a - 以追加的方式写文件, 文件不存在会创建新的文件, 文件存在从文件尾开始写文件
// r+ - 以读写方式打开文件, 文件不存在不会创建新的文件
// w+ - 以读写方式打开文件, 文件不存在会创建新的文件, 文件存在会首先清空原有内容
// a+ - 以追加方式读写文件, 文件不存在会创建新的文件, 文件存在从文件尾开始写文件

int main(int argc, char *argv[])
{
	//打开文件
	FILE *fp=fopen("文件拷贝.c", "r" );

	//打开要拷贝的文件
	FILE *destfp=fopen("test.c","w");

	if(fp!=NULL){
		printf("打开文件成功\n");
	}else{
		printf("打开文件失败\n");
		return 0;
	}

	if(destfp!=NULL){
		printf("打开目标文件成功\n");
	}else{
		printf("打开目标文件成功\n");
	}

//	int fgetc( FILE *stream );
	int ch=0;
	//从文件中读取一个字符
	while(EOF!=(ch=fgetc(fp))){
		putchar(ch);
//		int fputc( int ch, FILE *stream );
		//把字符写到另一个文件中
		if(EOF==fputc(ch,destfp)){
			printf("文件写入发生错误\n");
		}
	}

// int fclose( FILE *stream );

	ch=fclose(fp);
	if(ch==0){
		printf("文件关闭成功\n");
	}else{
		printf("文件关闭失败\n");
	}

	ch=fclose(destfp);
	if(ch==0){
		printf("文件关闭成功\n");
	}else{
		printf("文件关闭失败\n");
	}
	return 0;
}
