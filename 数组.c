#include <stdio.h>

//arr �����βΣ����ᴴ�������飬��ʵ������ȫһ����
void addStudentNo(int arr[]){
	printf("arr=��ַ%#p\n",arr);
	printf("������ѧ���ı��,ÿ����һ��ѧ���ı��,��س�\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
}

//�ڴ�Ļ�����λ���ֽڣ��Ƶ��Է���Ϊ��λ��ÿ���ֽڶ��б�ţ�
//ÿ������Ҳ���б�ţ��ֽڱ�ŵĳ�Ϊ��ַ���Ƶ귿��ı������Ҳ��Ϊ��ַ

int main(int argc, char *argv[])
{
	//���鶨�壺�������� ������[����];

	int studentNoArr[5];  //����һ��ѧ���������
	//�������ڴ�����������

	int arr[3]={1,2,3};
	int arrLen=sizeof(arr)/sizeof(int);
	for(int i=0;i<arrLen;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}

	printf("�����С=%d\n",sizeof(studentNoArr));
	//0x0028FF28

	for(int i=0;i<5;i++){
		printf("studentNoArr[%d]��ַ=%#p\n",i,&studentNoArr[i]);
	}

	addStudentNo(studentNoArr); //studentNoArr ����ʵ��

	
	for(int i=0;i<5;i++){
		printf("studentNoArr[%d]=%d\n",i,studentNoArr[i]);
	}

//	int [5]arr;
	
	return 0;
}
