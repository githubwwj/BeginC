#include <stdio.h>

void simpleIf(){
	int a=-1;
	if(a){  //非零为真，0为假
		printf("a=%d",a);
	}else{
		printf("条件不满出");
	}
}

void cTalk(){
	
	int a = 10;
	if ( a>8 );
	{
	    printf("\na大于8");
	}

	// 不推荐
	if (a == 0) {
	}

	// 推荐
	if (0 == a) {
	}
	a==10;
	a>8;
	a<8;
}

void ageArea(){

	printf("\n请输入一个年龄数字\n");
	int age=0;
	scanf("%d",&age);
	// if(age>=0 && age<=10){
	// 	printf("%d岁是一个小孩子",age);
	// }else if(age>10 && age<=18){
	// 	printf("%d岁是一个青少年\n",age );
	// }else if(age>20 && age<=60){
	// 	printf("%d岁是一个壮年\n",age );
	// }else if(age>60 && age<80){
	// 	printf("%d岁今天依然年轻\n", age);
	// }else{
	// 	printf("%d岁周游世界\n", age);
	// }

	switch(age/10){
		case 0:
			printf("%d岁是一个小孩子",age);
			break;
		case 1:
			printf("%d岁是一个青少年\n",age );
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			printf("%d岁是一个壮年\n",age );
			break;
		case 6:
		case 7:
			printf("%d岁今天依然年轻\n", age);
			break;
		default:
			printf("%d岁今天依然年轻\n", age);
			break;
	}

}

void ageAreaSwitch(){
	
	printf("\n");

	int age=5;
	
	switch(age){
		case 0:
			printf("这是数字0\n");
		case 5:
			printf("这是数字5\n");
		case 10:
			printf("这是数字10\n");
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