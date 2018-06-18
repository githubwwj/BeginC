#include <stdio.h>

int employee[3]={101,102,103};  //定义一个一维数组

void modifyEmpNo(int *emp[3]){
	for(int i=0;i<3;i++){
		*(emp+i) = employee+i;
		**(emp+i) = 22;
	}
}

int main(int argc, char *argv[])
{

	for(int i=0;i<3;i++){
		printf("employee+%d=%p \t &employee[%d]=%p\n",i,employee+i,i,&employee[i]);
		// employee+0=00404004      &employee[0]=00404004
		// employee+1=00404008      &employee[1]=00404008
		// employee+2=0040400C      &employee[2]=0040400C
	}

	int *emp[3]; //定义了一个指针数组
	for(int i=0;i<3;i++){
		printf("emp+%d=%p \t &emp[%d]=%p\n",i,emp+i,i,&emp[i]);
	}

	modifyEmpNo(emp);
	for(int i=0;i<3;i++){
		printf("employee[%d]=%d \t **(emp+%d)=%d emp[%d][%d]=%d\n",
			i,employee[i],i,**(emp+i),i,i,emp[i][i]);
		// employee[0]=22   **(emp+0)=22 emp[0][0]=22
		// employee[1]=22   **(emp+1)=22 emp[1][1]=22
		// employee[2]=22   **(emp+2)=22 emp[2][2]=-3
	}
	return 0;
}
