#include <stdio.h>
#include <string.h>

void modifyStuName(char (*p)[4][10]){
	// *p <==>  stuName
//	(*p)[0]="xxx";
//	strcpy((*p)[0],"xxx");
//	printf("(*p)[0]=%s\n",(*p)[0]);
	for(int i=0;i<4;i++){
		strcpy((*p)[i],"***");
	}
	for(int s=0;s<4;s++){
		printf("*((*p)+i)=%s \t (*p)[%d]=%s\n",*((*p)+s),s,(*p)[s]);
		// *((*p)+i)=***    (*p)[0]=***
		// *((*p)+i)=***    (*p)[1]=***
		// *((*p)+i)=***    (*p)[2]=***
		// *((*p)+i)=***    (*p)[3]=***
	}
}

int main(int argc, char *argv[])
{
	char stuName[4][10]={"Mike","Jenny","Bob","LiLi"};

	for(int i=0;i<4;i++){
		printf("stuName[%d]=%s\n",i,stuName[i]);
	}
	modifyStuName(&stuName);
	for(int i=0;i<4;i++){
		printf("stuName[%d]=%s\n",i,stuName[i]);
	}
	
	return 0;
}
