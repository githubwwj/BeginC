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

typedef struct Stu Student; //重新为学生结构体类型娶了一个别名为 Student
typedef struct Stu *SP;

void printStu(SP s){

	printf("name=%s \t age=%d  name=%s \t age=%d\n",
		s->name,s->age,(*s).name,(*s).age);
}

int main(int argc, char *argv[])
{
	
	Student stu;  //顶一个学生结构体变量 stu

	stu.name="Jeeny";
	stu.age=24;

	printStu(&stu);

	Point point; //定义struct point结构体变量
	point.x=10;
	point.y=100;
	printf("x=%d \t y=%d\n",point.x,point.y);
	return 0;
}
