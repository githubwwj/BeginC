#include <stdio.h> //<>��ֱ�Ӵӿ��ļ��в���ͷ�ļ�   stdio.h ��׼������(���̺����ȵ�)���(��Ļ��)ͷ�ļ�

/* 
  ��������ȫ���Ե�ע��
  ��������ֵ ������(�����б�)
 {
    ��������
 } 
*/
// ���������������������������
int add(){
	int sum;  // ������������ӵĽ��
	int a,b;

	printf("�����������������ӷ�����\n" );

	scanf("%d %d",&a,&b);
	// scanf("%d-%d",&a,&b);

	printf("a=%d,b=%d\n", a,b);

	sum = a + b;

	return sum;
}

int minus(){
	int result;
	int a,b;

	printf("������������������������\n" );
	scanf("%d %d",&a,&b);
	result = a - b;
	return result;
}

int mulitply(){
	int result;
	int a,b;

	printf("�����������������˷�����\n" );
	scanf("%d %d",&a,&b);
	result = a * b;
	return result;
}

int divide(){
	int result;
	int a,b;

	printf("������������������������\n" );
	scanf("%d %d",&a,&b);
	result = a / b;
	return result;
}

void cal(){
	printf("��ѡ���������\n");
	int result;
	int isLoop=1;
	int calRule; //�����������
	while(isLoop){
		printf("1 ����ӷ� 2 ������� 3 �˷�  4 ���� 5 �����˳�\n");
		scanf("%d",&calRule);
		switch(calRule){
			case 1:
				result=add();

				break;
			case 2:
				result=minus();
				break;
			case 3:
				result=mulitply();
				break;
			case 4:
				result=divide();
			 	break;
			case 5:
				isLoop=0;
				break;
			default:
				isLoop=0;
				break;
		}
		if(calRule ==1 || calRule ==2 || calRule==3 || calRule ==4){
			printf("������=%d\n",result );
		}
		
	}
	

	

}


int main(int argc, char const *argv[])
{
	
	cal();



	return 0;
}