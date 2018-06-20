#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a=19;
	int b=5;
	double c=(double)a/(double)b;
	printf("argc=%d \t c=%lf\n",argc,c);

	
	for(int i=0;i<argc;i++){
		printf("argv[%d]=%s\n",i,argv[i]);
	}

	if(argc>2){
		char* p=argv[1];
		printf("p=%s\n",p);

		a=atoi(argv[1]);
		b=atoi(argv[2]);
		int res=a*b;
		printf("res=%d\n",res);
	}
	
	return 0;
}
