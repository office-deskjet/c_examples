#include <stdio.h>

int global = 42;
static int static_global = 1337;

int foo()
{
    static a = 0;
    int i = 0;
    printf ("i: %d, a: %d global: %d\n", i, a, global);
    i++;
    a++;
}

int main(int argc, char **argv)
{
    foo();
    foo();
    foo();
    printf("global: %d\n", global);
    bar();

    return 0;
}
