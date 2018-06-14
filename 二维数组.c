#include <stdio.h>


void addStuNo(int stuArr[][4]){

	printf("请输入学生的编号,输入一个学生编号后,按回车即可\n");

	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			printf("stuArr[%d][%d]=",i,j);
			scanf("%d",&stuArr[i][j]);
		}
	}

}

int main(int argc, char *argv[])
{
	int stuArrNo[2][4];  //定义一个二位数组  两行四列

	int arr[][3]={1,2,3,4,5,6};


	printf("arr[0][0]=%d\n",arr[0][0]);

	//addStuNo(stuArrNo);

	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			printf("stuArrNo[%d][%d]=%d\n",i,j,stuArrNo[i][j]);
		}
	}
	
	return 0;
}
