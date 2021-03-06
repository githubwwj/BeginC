// ShowUserDlll.cpp: 定义控制台应用程序的入口点。
#include "stdafx.h"
#include <Windows.h>
typedef int  (*FUC)(int a, int b);

int main()
{
	//显示加载动态链接库
	//加载动态链接库
	HINSTANCE firstDLL= LoadLibrary(L"D:\\code\\src\\FirstDLL\\Debug\\FirstDLL.dll");
	printf("firstDll=%d\n", firstDLL);

	//通过函数地址获取函数
	FUC add=(FUC)GetProcAddress(firstDLL, "add");
	FUC sub=(FUC)GetProcAddress(firstDLL,"sub");

	//有了add函数地址调用函数
	int result=add(99, 100);
	printf("add(99, 100)=%d\n", result);

	//有了sub函数地址调用函数
	result = sub(98, 35);
	printf("sub(98, 35)=%d\n", result);

	//释放动态链接库
	FreeLibrary(firstDLL);
	getchar();
    return 0;
}

