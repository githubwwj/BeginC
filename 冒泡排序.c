#include <stdio.h>


//����˼�룺���ڵ����������Ƚϣ��ϴ�������ϵ������ƣ�
//��һ�ֱȽ���֮��õ����������ڶ��ֱȽ�֮��õ��δ�������Դ�����

void bubbleSort(int *,int);
void printArr(int[],int );

int main(int argc, char *argv[])
{
	
	//3   2   4   1
	//2   3   1   4    ��һ�ֱȽ���֮��õ�������
	//2   1   3   4    �ڶ��ֱȽ���֮��õ��δ����
	//1   2   3   4    �����ֱȽ���֮���������
	int arrLen=6;
	int arr[6]={3,2,4,1,30,15};
	printArr(arr,arrLen);
	bubbleSort(arr,arrLen);
	printArr(arr,arrLen);
	return 0;
}

//arr����    n ���鳤��
void bubbleSort(int *arr,int n){
	for(int i=0;i<n-1;i++){

		//1 �����������   0 ����δ���
		short isSort=1; //�Ƿ��������   

		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=0;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				isSort=0;  //����δ���
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