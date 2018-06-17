#include <stdio.h>

#define IN 1  // 单词内
#define OUT 0 // 单词外

int main(int argc, char *argv[])
{
	//通过getchar()函数从键盘中输入下一个字符
	int wordCount=0;  // 单词数量
	int spaceCount=0; // 空格数量
	int lineCount=0; //  行数
	int tabCount=0;  //  制表符数量
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
