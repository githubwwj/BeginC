#include <stdio.h>

//struct  enum  union
union User{
	char *name;
	int age;
	double money;
};
//union 共用体的成员共同使用一块内存空间,在某个时刻,使用哪个成员,哪个成员有效


int main(int argc, char *argv[])
{
	printf("user size=%d\n",sizeof(union User));

	union User user;
	user.name="hello";
	printf("user.name=%s \t  user=%p\n",user.name,&user);

	user.age=4;

	user.money=20;

	printf("user.name=%p \t user.age=%p \t user.money=%p\n",&user.name,&user.age,&user.money);

	printf("user.money=%.0lf\n",user.money);
	
	return 0;
}
