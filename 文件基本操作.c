#include <stdio.h>

int main(int argc, char *argv[])
{
	// FILE *fopen( const char *fname, const char *mode );
	// a - ��׷�ӵķ�ʽд�ļ�, �ļ������ڻᴴ���µ��ļ�, �ļ����ڴ��ļ�β��ʼд�ļ�
	//���ļ�
	FILE *fp=fopen("aa.txt", "a" );
//int fputs( const char *str, FILE *stream );
	if(EOF==fputs("Hello File",fp)){
		printf("�ļ�д��ʧ��");
	}
	//int rename( const char *oldfname, const char *newfname );
	//int fclose( FILE *stream );
	int fc=fclose(fp);
	if(fc==0){
		printf("�ļ��رճɹ�\n");
	}else{
		printf("�ļ��ر�ʧ��\n");
	}

	//int rename( const char *oldfname, const char *newfname );
	if(0==rename("aa.txt","as.txt")){
		printf("�ļ��������ɹ�\n");
	}else{
		printf("�ļ�������ʧ��\n");
	}
	
//	int remove( const char *fname );
	if(0==remove("as.txt")){
		printf("ɾ���ļ��ɹ�\n");
	}else{
		printf("ɾ���ļ�ʧ��\n");
	}
	return 0;
}
