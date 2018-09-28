#include <stdio.h>

int main(int argc, char **argv)
{
    int foo = 2;
    int b;
    printf("hello world!\n");

    switch (foo)
    {
        case 1:
            // NOPE
            //int a = 42;
            printf("case 1\n");
            break;
        case 2:
            // OK
            {
                int a = 42;
                printf("case 2 a:%d\n", a);
                break;
            }
        case 3:
            b = 42;
            printf("case 3\n");
            break;
        case 4:
                break;

        default:
            printf("default\n");
    }

    return 0;
}
