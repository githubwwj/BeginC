#include <stdio.h>

struct Birthday
{
	int year;   //4���ֽ�
	short month;  //2���ֽ�
	short day;	//2���ֽ�
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
//	1984��5��29��

	printf("name=%s \t age=%d \t year=%d \t month=%d \t day=%d\n",
		user.name,user.age,user.birthday.year,user.birthday.month,user.birthday.day);

	printf("siezoef(Birthday)=%d",sizeof(struct Birthday));
	return 0;
}
