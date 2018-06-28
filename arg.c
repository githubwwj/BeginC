#include <stdio.h>
#include <stdarg.h>

void func(char *fmt, ...)
{
    va_list ap;

    va_start(ap, fmt);

    while (*fmt)
    {
        switch(*fmt)
        {
            case 'd':
                fprintf(stdout, "%d\n", (int)va_arg(ap, int));
                break;
            case 'c':
                fprintf(stdout, "%c\n", (char)va_arg(ap, int));
                break;
            case 's':
                fprintf(stdout, "%s\n", (char *)va_arg(ap, char *));
                break;
            default:
                fprintf(stderr, "error fmt\n");
        }
        fmt ++;
    }
    va_end(ap);
}

int main ( int argc, char *argv[] )
{
    func("dcs", 10, 's', "hello");
    return 0;
}               