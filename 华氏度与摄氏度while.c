#include <stdio.h>

int main(){
	
	int fahr=0;  //�����¶�
	int celsius=0; //�����¶�
	int lower=0;  //�¶ȱ������
	int upper=300; //�¶ȱ�����
	int step=20;  //����

//Բ���� ( )�������� [ ]�������� { }
//	��=(5/9) * (f-32);           5 * (f-32)  /9
	while(fahr <= upper){
		celsius = 5 * (fahr-32)/9;    //ÿһ�д������ǳ�֮Ϊ���
		printf("%3d\t%6d\n",fahr,celsius);   //ѭ����   %3d  ����ռ3���ַ����
		fahr = fahr +step;
	}

	

	return 0;
}