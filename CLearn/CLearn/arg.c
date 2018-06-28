#include <stdio.h>
#include <stdarg.h>
#include "逻辑运算.h"


// format 传递的参数类型
// ... 代表可变参数
void myPrintf(char *format, ...) {
	va_list ap;
	va_start(ap, format);
	while (*format) {
		switch (*format)
		{
			case 'c': {
					char c = va_arg(ap, char);
					fprintf(stdout, "c=%c\n", c);
					break;
				}
			case 'd': {
					int a = va_arg(ap, int);
					fprintf(stdout, "d=%d\n", a);
					break;
				}
			case 's':{
					char *str=va_arg(ap, char*);
					fprintf(stdout, "str=%s\n", str);
					break;
				}
		default:
			break;
		}
		format++;
	}
	va_end(ap);
}



int main() {

	char *str = "cds";
	//myPrintf(str, 'a',10,"hello arg");

	logic();


	getchar();

	return 0;
}


