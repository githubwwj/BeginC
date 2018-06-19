#include <stdio.h>

struct Birthday
{
	int year;   //4个字节
	short month;  //2个字节
	short day;	//2个字节
};

struct User
{
	char *name;
	int age;
	//year month day
	struct Birthday birthday;
};

int main(int argc, char *argv[])
{
	
	struct User user;

	user.name="wbq";
	user.age=34;
	user.birthday.year=1984;
	user.birthday.month=5;
	user.birthday.day=29;
//	1984年5月29日

	printf("name=%s \t age=%d \t year=%d \t month=%d \t day=%d\n",
		user.name,user.age,user.birthday.year,user.birthday.month,user.birthday.day);

	printf("siezoef(Birthday)=%d",sizeof(struct Birthday));
	return 0;
}
