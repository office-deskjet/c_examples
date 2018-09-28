#include <stdio.h>

void foo(void);

void bar(void);


int main(int argc, char **argv)
{
    printf("bar: %x, foo: %x\n", bar, foo);
    bar();
    return 0;
}

void bar(void)
{
    void foo(void);
    printf("I am bar @ %x\n", &bar);
    printf("I am have foo @ %x\n", &foo);
}

void foo(void)
{
    printf("I am foo @ %x\n", &foo);
}
