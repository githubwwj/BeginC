#include <stdio.h>

#define IN 1  // ������
#define OUT 0 // ������

int main(int argc, char *argv[])
{
	//ͨ��getchar()�����Ӽ�����������һ���ַ�
	int wordCount=0;  // ��������
	int spaceCount=0; // �ո�����
	int lineCount=0; //  ����
	int tabCount=0;  //  �Ʊ������
	printf("wordCount=%d,spaceCount=%d\n",wordCount,spaceCount);
	
	int c=0;
	int wordState=OUT;  
	while( (c=getchar()) !=EOF){
		if(c == ' '){
			spaceCount++;
			wordState=OUT;
		}else if(c == '\n'){
			wordState=OUT;
			lineCount++;
		}else if(c == '\t'){
			wordState=OUT;
			tabCount++;
		}else if(wordState==OUT){
			wordState = IN;
			wordCount++;
		}
	}
	printf("wordCount=%d,spaceCount=%d,lineCount=%d,tabCount=%d\n",wordCount,spaceCount,lineCount,tabCount);
	return 0;
}
