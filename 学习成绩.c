#include <stdio.h>


/*
   ��������ֵ �������������б�
   {
	  code;
   }
	�����ú����ڵ��ú���֮ǰ
*/
void gradeIf(){
	printf("������ѧϰ�ɼ�(����100)\n");
	int grade;
	int isLoop=1;

	/*
	  if(�������ʽ){
			code//
	  }else if(�������ʽ){
		code
	  }else{
		
	  }
	*/
	while(isLoop){
		scanf("%d",&grade);
		if(grade>=90 && grade<=100){
			printf("%d����%s\n",grade,"ѧϰ������" );
		}else if(grade>=80 && grade<90){
			printf("%d����%s\n",grade,"����ģ��еȷ���" );
		}else if(grade>=70 && grade<80){
			printf("%d����%s\n",grade,"�д����" );		
		}else if(grade>=0 && grade<=60){
			printf("%d����%s\n",grade,"�ܴ�ĳɳ��ռ�" );
		}else{
			isLoop=0;
			printf("����������һ���Ƿ�������\n");
		}
	}
	
}

void gradeSwitch(){
	printf("������ѧϰ�ɼ�(����100)\n");
	int grade;
	int isLoop=1;
	/**
	  switch(���ͱ��ʽ){
			case ��ֵ��
				break;
			case ��ֵ:
			default:
					break;
	  }
	*/
	while(isLoop){
		scanf("%d",&grade);
		switch(grade/10){
			case 10:
			case 9:
				printf("%d����%s\n",grade,"ѧϰ������" );
				break;
			case 8:
				printf("%d����%s\n",grade,"����ģ��еȷ���" );
				break;
			case 7:
				printf("%d����%s\n",grade,"�д����" );		
				break;
			case 6:
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
				printf("%d����%s\n",grade,"�ܴ�ĳɳ��ռ�" );
				break;
			default:
				printf("����������һ���Ƿ�������\n");
				isLoop=0;
					break;
		}

	}
}


int main(int argc, char const *argv[])
{
	gradeIf();  //���ú���
	// gradeSwitch();

	return 0;
}