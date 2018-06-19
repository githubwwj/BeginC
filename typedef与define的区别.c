#include <stdio.h>

int main(int argc, char *argv[])
{
	typedef char * Char1; //适合定义数类型,#define 只是字符串的替换
	#define Char2 char *

	Char1 s1,s2;
	//char *s1;
	//char*s2;

	Char2 s3,s4;
	//char *s3;
	//char s4;  
	
	//char *s3; char s4;   <==>  char *s3,s4;

	printf("sizeof(s1)=%d  \t sizeof(s2)=%d\tsizeof(s3)=%d\tsizeof(s4)=%d\n",
		sizeof(s1),sizeof(s2),sizeof(s3),sizeof(s4));




	
	return 0;
}
