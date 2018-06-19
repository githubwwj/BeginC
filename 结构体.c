#include <stdio.h>

//定义一个用户结构体,结构体类型名User
struct User
{
	char *name;
	int age;
	int height;
	char sex;
}ourUser; //定义一个User结构体的时候指定一个变量

//通过结构体指针修改一个结构体变量的数据
void modifyUser(struct User *p){

	printf("sizeof(user)=%d\n",sizeof(p));

	p->name="Bob";
	p->age=1;
//	(*p) ==> user
	(*p).height=50;
	(*p).sex='X';

}

int main(int argc, char *argv[])
{
	struct User user;
	printf("sizeof(user)=%d\n",sizeof(user));

	user.name="麦当劳";
	user.age=63;
	user.height=10;
	user.sex='M';

	modifyUser(&user);
	//ourUser={"kdj",66,15,'M'};
	ourUser.name="kdj";
	ourUser.age=66;
	struct 
	{
		 char *name;
		 int age;
	}stu;  //直接定义结构体变量，不指定类型名

	stu.name="Mike";
	stu.age=30;
	
	struct User myUser[2]={{"Mike",25,175,'M'},{"Jenny",24,170,'F'}};
	printf("name=%s age=%d\n",ourUser.name,ourUser.age);

	printf("user.name=%s \t user.age=%d \t user.height=%d \t user.sex=%c \n",user.name,user.age,user.height,user.sex);

	printf("name=%s age=%d\n",stu.name,stu.age);

	for(int u=0;u<2;u++){
		printf("myUser[%d].name=%s  myUser[%d].age=%d  myUser[%d].height=%d  myUser[%d].sex=%c\n",
			u,myUser[u].name,u,myUser[u].age,u,myUser[u].height,u,myUser[u].sex);
	}

	
	return 0;
}
