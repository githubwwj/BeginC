#include <stdio.h>


//基本思想：相邻的两个数做比较，较大的数不断的往后移，
//第一轮比较完之后得到最大的数，第二轮比较之后得到次大的数，以此类推

void bubbleSort(int *,int);
void printArr(int[],int );

int main(int argc, char *argv[])
{
	
	//3   2   4   1
	//2   3   1   4    第一轮比较完之后得到最大的数
	//2   1   3   4    第二轮比较完之后得到次大的数
	//1   2   3   4    第三轮比较完之后排序完成
	int arrLen=6;
	int arr[6]={3,2,4,1,30,15};
	printArr(arr,arrLen);
	bubbleSort(arr,arrLen);
	printArr(arr,arrLen);
	return 0;
}

//arr数组    n 数组长度
void bubbleSort(int *arr,int n){
	for(int i=0;i<n-1;i++){

		//1 代表排序完成   0 排序未完成
		short isSort=1; //是否排序完成   

		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=0;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				isSort=0;  //排序未完成
			}
		}
		if(isSort){
			break;
		}
	}
}

void printArr(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]=%d  ",i,arr[i]);
	}
	printf("\n");
}