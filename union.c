#include <stdio.h>

//struct  enum  union
union User{
	char *name;
	int age;
	double money;
};
//union ������ĳ�Ա��ͬʹ��һ���ڴ�ռ�,��ĳ��ʱ��,ʹ���ĸ���Ա,�ĸ���Ա��Ч


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
