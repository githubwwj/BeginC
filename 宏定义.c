#include <stdio.h>  //#include �ļ�����Ԥ����ָ��

//#�������Ԥ����ָ��,���׼��C�������
//#define ���� �滻�ַ���
//1 ���������ĺ궨��
#define PI 3.14
#define RADIUS 100
#define GIRTH PI * RADIUS * 2

//2 �������ĺ궨��
#define average(a,b) (a+b)/2

//#define multi(a,b) a*b  //����������������д���Ǵ��
#define multi(a,b) (a)*(b)  //(3+4)*(5)

#define divider(a,b) (a)/(b)  //(30+15)/(10+5)

int main(int argc, char *argv[])
{
	int girth=2 * PI * RADIUS; //����Բ���ܳ�
	float g=GIRTH;  //3.14 * 100 * 2
	printf("girth=%d \t GIRTH=%.1f \n",girth,g);

	int average=average(10,20); // (10+20)/2
	printf("average=%d\n",average);

	int multiply=multi(3+4,5);
	printf("multiply=%d\n",multiply);

	int d=divider(30+15,10+5);
	printf("d=%d\n",d);

	#undef PI  //��PI��������ȡ����
	//int a=PI;

	
	return 0;
}
