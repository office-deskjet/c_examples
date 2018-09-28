#include <stdio.h>

static void _my_func(void);

int main(int argc, char **argv)
{
    _my_func();

    return 0;
}

void _my_func(void)
{
    printf("hello world!\n");
}

