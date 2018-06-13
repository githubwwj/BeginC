#include <stdio.h>

//arr 代表形参，不会创建新数组，和实参是完全一样的
void addStudentNo(int arr[]){
	printf("arr=地址%#p\n",arr);
	printf("请输入学生的编号,每输入一个学生的编号,请回车\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
}

//内存的基本单位是字节，酒店以房间为单位，每个字节都有编号，
//每个房间也都有编号，字节编号的成为地址，酒店房间的编号我们也成为地址

int main(int argc, char *argv[])
{
	//数组定义：数组类型 数组名[长度];

	int studentNoArr[5];  //定义一个学生编号数组
	//数组在内存中是连续的

	int arr[3]={1,2,3};
	int arrLen=sizeof(arr)/sizeof(int);
	for(int i=0;i<arrLen;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}

	printf("数组大小=%d\n",sizeof(studentNoArr));
	//0x0028FF28

	for(int i=0;i<5;i++){
		printf("studentNoArr[%d]地址=%#p\n",i,&studentNoArr[i]);
	}

	addStudentNo(studentNoArr); //studentNoArr 代表实参

	
	for(int i=0;i<5;i++){
		printf("studentNoArr[%d]=%d\n",i,studentNoArr[i]);
	}

//	int [5]arr;
	
	return 0;
}
