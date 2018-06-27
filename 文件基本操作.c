#include <stdio.h>

int main(int argc, char *argv[])
{
	// FILE *fopen( const char *fname, const char *mode );
	// a - 以追加的方式写文件, 文件不存在会创建新的文件, 文件存在从文件尾开始写文件
	//打开文件
	FILE *fp=fopen("aa.txt", "a" );
//int fputs( const char *str, FILE *stream );
	if(EOF==fputs("Hello File",fp)){
		printf("文件写入失败");
	}
	//int rename( const char *oldfname, const char *newfname );
	//int fclose( FILE *stream );
	int fc=fclose(fp);
	if(fc==0){
		printf("文件关闭成功\n");
	}else{
		printf("文件关闭失败\n");
	}

	//int rename( const char *oldfname, const char *newfname );
	if(0==rename("aa.txt","as.txt")){
		printf("文件重命名成功\n");
	}else{
		printf("文件重命名失败\n");
	}
	
//	int remove( const char *fname );
	if(0==remove("as.txt")){
		printf("删除文件成功\n");
	}else{
		printf("删除文件失败\n");
	}
	return 0;
}
