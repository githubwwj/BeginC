#include <stdio.h>

// �����Ķ���
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