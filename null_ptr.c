#include <stdio.h>

int main(int argc, char **argv)
{
    int bob = 42;
    int *ptr1 = &bob;
    int *ptr2 = NULL;

    printf("bob: %x : %d\n", &bob, bob);
    printf("ptr1: %x: %d\n", ptr1, *ptr1);
    printf("ptr2: %x \n", ptr2);

    return 0;
}
