#include <stdio.h>

// FILE *fopen( const char *fname, const char *mode );

// r - ��ֻ����ʽ��һ���ļ�, ���ļ��������
// w - ��ֻд��ʽ��һ���ļ�, �ļ������ڻᴴ���µ��ļ�, �ļ����ڻ��������ԭ������
// a - ��׷�ӵķ�ʽд�ļ�, �ļ������ڻᴴ���µ��ļ�, �ļ����ڴ��ļ�β��ʼд�ļ�
// r+ - �Զ�д��ʽ���ļ�, �ļ������ڲ��ᴴ���µ��ļ�
// w+ - �Զ�д��ʽ���ļ�, �ļ������ڻᴴ���µ��ļ�, �ļ����ڻ��������ԭ������
// a+ - ��׷�ӷ�ʽ��д�ļ�, �ļ������ڻᴴ���µ��ļ�, �ļ����ڴ��ļ�β��ʼд�ļ�

int main(int argc, char *argv[])
{
	//���ļ�
	FILE *fp=fopen("�ļ�����.c", "r" );

	//��Ҫ�������ļ�
	FILE *destfp=fopen("test.c","w");

	if(fp!=NULL){
		printf("���ļ��ɹ�\n");
	}else{
		printf("���ļ�ʧ��\n");
		return 0;
	}

	if(destfp!=NULL){
		printf("��Ŀ���ļ��ɹ�\n");
	}else{
		printf("��Ŀ���ļ��ɹ�\n");
	}

//	int fgetc( FILE *stream );
	int ch=0;
	//���ļ��ж�ȡһ���ַ�
	while(EOF!=(ch=fgetc(fp))){
		putchar(ch);
//		int fputc( int ch, FILE *stream );
		//���ַ�д����һ���ļ���
		if(EOF==fputc(ch,destfp)){
			printf("�ļ�д�뷢������\n");
		}
	}

// int fclose( FILE *stream );

	ch=fclose(fp);
	if(ch==0){
		printf("�ļ��رճɹ�\n");
	}else{
		printf("�ļ��ر�ʧ��\n");
	}

	ch=fclose(destfp);
	if(ch==0){
		printf("�ļ��رճɹ�\n");
	}else{
		printf("�ļ��ر�ʧ��\n");
	}
	return 0;
}
