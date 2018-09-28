#include <stdio.h>

int global;

int main(int argc, char **argv)
{

    int i;
    int *ptr;

    if (!ptr)
        printf("pointer is null: %p\n", ptr);

    struct name_of_struct
    {
        int a;
        int *ptr;
        double bar;
    } var_of_struct;


    printf("i=%d\n", i);
    printf("global=%d\n", global);
    printf("a=%d\n", var_of_struct.a);
    printf("*ptr=%d\n", *var_of_struct.ptr);
    printf("ptr=%p\n", var_of_struct.ptr);
    printf("bar=%x\n", var_of_struct.bar);

    return 0;
}
