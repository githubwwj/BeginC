#include <stdio.h>

int main(){
	
	//��һ���� ��ʼ��  int fahr=0; ִֻ��һ��
	//�ڶ����� ѭ������
	//�������� ִ�в���
	for(float fahr=0;fahr<300;fahr=fahr+20){
		//5 * (f-32)  /9
		//ѭ����
		//int celsius= 5 * (fahr-32) /9;
//		printf("%d\t%d\n",fahr,celsius);
//		float celsius = 5.0 * (fahr-32)/9.0;
		float celsius = 5.0/9 * (fahr-32);
		printf("%3.0f\t%6.1f\n",fahr,celsius);

	}

	return 0;
}


