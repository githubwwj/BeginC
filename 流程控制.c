#include <stdio.h>

void simpleIf(){
	int a=-1;
	if(a){  //����Ϊ�棬0Ϊ��
		printf("a=%d",a);
	}else{
		printf("����������");
	}
}

void cTalk(){
	
	int a = 10;
	if ( a>8 );
	{
	    printf("\na����8");
	}

	// ���Ƽ�
	if (a == 0) {
	}

	// �Ƽ�
	if (0 == a) {
	}
	a==10;
	a>8;
	a<8;
}

void ageArea(){

	printf("\n������һ����������\n");
	int age=0;
	scanf("%d",&age);
	// if(age>=0 && age<=10){
	// 	printf("%d����һ��С����",age);
	// }else if(age>10 && age<=18){
	// 	printf("%d����һ��������\n",age );
	// }else if(age>20 && age<=60){
	// 	printf("%d����һ��׳��\n",age );
	// }else if(age>60 && age<80){
	// 	printf("%d�������Ȼ����\n", age);
	// }else{
	// 	printf("%d����������\n", age);
	// }

	switch(age/10){
		case 0:
			printf("%d����һ��С����",age);
			break;
		case 1:
			printf("%d����һ��������\n",age );
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			printf("%d����һ��׳��\n",age );
			break;
		case 6:
		case 7:
			printf("%d�������Ȼ����\n", age);
			break;
		default:
			printf("%d�������Ȼ����\n", age);
			break;
	}

}

void ageAreaSwitch(){
	
	printf("\n");

	int age=5;
	
	switch(age){
		case 0:
			printf("��������0\n");
		case 5:
			printf("��������5\n");
		case 10:
			printf("��������10\n");
	}
}

void simpleWhile(){
	int count = 5;
	while(count>0){
		printf("%d\n",count );
		count--; //count = count -1 ;
		if(count==3){
			break;
		}
	}


	count=0;
	do{
		count++;
		printf("count++=%d\n",count );
	}while(count<5);

	for(int j=0;j<5;j++){
		printf("j=%d\n",j );
	}

	for(int x=0,y=0;x<3;x++,y+=2){
		for(int j=0;j<10;j++){
			if(j==1){
				break;
			}
		}
		if(x==1){
			break;
		}

		printf("x=%d\t y=%d\n",x,y );
	}

	for(int x=0;x<5;x++){
		if(x%2==0){
			continue;
		}
		printf("continue=====x=%d\n", x);
	}
}

int main(int argc, char const *argv[])
{
	
	simpleIf();
	cTalk();
	// ageArea();
	ageAreaSwitch();
	simpleWhile();

	return 0;
}