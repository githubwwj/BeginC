#include <stdio.h>

void addStuGrade(int  stuGrade[]){

	for(int i=0;i<3;i++){
		scanf("%d",&stuGrade[i]);
	}
}

int main(int argc, char *argv[])
{
	int a=10;
	//�������� * ������  ����ָ��
	int *p; //����һ��ָ��p  ָ���Ŀ��������ŵ�ַ��
	p = &a; //& ȡ��ַ��,��ȡa�ĵ�ַ��ŵ�p

	printf("a�ĵ�ַ=%p \t p=%p  p�ĵ�ַ=%p\n",&a,p,&p);
	a=20;  //ͨ������ֱ���޸�ֵ��Ϊֱ������
	*p = 30;  //*p �޸�a�Ĵ洢��Ԫ��ֵ��Ϊ�������
	printf("a=%d\n",a);

	int *q=&a;
	*q = 100;
	printf("a=%d\n",a);

	printf("������ѧ���ĳɼ�\n");
	//�������� ������[����];
	int stuGrade[3];  //���ֵ��ڴ�ռ���������,���������������׵�ַ
	addStuGrade(stuGrade);

	for(int i=0;i<3;i++){
		printf("stuGrade[%d]=%d \t ��ַ��=%p\n",i,stuGrade[i],&stuGrade[i]);
	}

	printf("--------------------------------\n");
	p=stuGrade;
	
	*(p+0) = 100;
	*(p+1) = 90;
	*(p+2) = 80;

	for(int i=0;i<3;i++){
		printf("stuGrade[%d]=%d \t ��ַ��=%p \t p�ĵ�ַ��=%p\n",i,stuGrade[i],&stuGrade[i],p);
	}
	
	printf("--------------------------------\n");

	*(stuGrade+0)=10;
	*(stuGrade+1)=20;
	*(stuGrade+2)=66;

	for(int i=0;i<3;i++){
		printf("stuGrade[%d]=%d \t ��ַ��=%p \t p�ĵ�ַ��=%p\n",i,stuGrade[i],&stuGrade[i],p);
	}
	return 0;
}
