#include <stdio.h>
#include "define.h"
//#define MACRO(x) ( (x) + 4 )
#define foo 1
#define KB 2*1024
int main(int argc, char **argv)
{
    char buff[KB] = {0};
    printf("hello world!\n");
    printf("%d\n", MACRO(2));
    printf("%d\n", MACRO(foo));
    printf("%d\n", KB);

    return 0;
}
