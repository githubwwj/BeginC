#include <stdio.h>

//#include "one.h"
#ifndef _ONE_H_
#define _ONE_H_
void one();  //����һ������one

#endif

//void one();
//#include "two.h"
#ifndef _ONE_H_
#define _ONE_H_
void one();  //����һ������one

#endif

#ifndef _TWO_H_
#define _TWO_H_
void two(); //����һ��two����
#endif

//void one();//one��������ֽ�����,�����˱���Ч��
//void two();


int main(int argc, char *argv[])
{
	printf("�ļ�����\n");
	
	return 0;
}
