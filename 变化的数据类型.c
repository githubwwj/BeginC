#include <stdio.h>

struct Stu
{
	char *name;
	int age;
};

typedef struct point
{
	int x;
	int y;
}Point;

typedef struct Stu Student; //����Ϊѧ���ṹ������Ȣ��һ������Ϊ Student
typedef struct Stu *SP;

void printStu(SP s){

	printf("name=%s \t age=%d  name=%s \t age=%d\n",
		s->name,s->age,(*s).name,(*s).age);
}

int main(int argc, char *argv[])
{
	
	Student stu;  //��һ��ѧ���ṹ����� stu

	stu.name="Jeeny";
	stu.age=24;

	printStu(&stu);

	Point point; //����struct point�ṹ�����
	point.x=10;
	point.y=100;
	printf("x=%d \t y=%d\n",point.x,point.y);
	return 0;
}
