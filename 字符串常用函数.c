#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{
	
	char stuName[]={"Mike Jeeny Bob LiLi"}; //系统默认会加一个 \0 作为字符串的结束标志
	
	char destName[100];

//char *strcpy(char *dest, const char *src)
//void *memset(void *str, int c, size_t n)
//	size_t strlen(const char *str)
	printf("destName len=%d\n",strlen(stuName));
	memset(destName,'\0',strlen(destName));
	strcpy(destName,stuName);

	printf("destName=%s\n",destName);

//	void *memchr(const void *str, int c, size_t n) 

	char *ret=memchr(stuName,'B',strlen(stuName));
	printf("ret=%s\n",ret);


	

//	int strcmp(const char *str1, const char *str2)
	memset(destName,'a',strlen(destName));
	printf("destName=%s\n",destName);
	int com=strcmp(stuName,destName);
	printf("com=%d\n",com);

	int a='a';
	int a1='A';
	printf("a=%d \t A=%d\n",a,a1);
	
	
	return 0;
}
