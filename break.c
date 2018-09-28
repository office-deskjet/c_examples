#include <stdio.h>

int main(int argc, char **argv)
{
    int foo = 0;

    switch (foo)
    {
        case 0:
        {
            int i = 0;
            for (; i < 5; i++)
            {
                printf("for loop: %d\n", i);
                if (3 == i)
                {
                    printf("BREAK!\n");
                    break;
                }

            }
            printf("Out side of for loop!\n");
            printf("Inside case!\n");
        }
        break;

        default: break;
    }
    printf("Out side of switch!\n");

    if (1)
    {
        printf("inside of IF \n");
        // break only works for loops and switches
        //break;
        printf("will you see me? \n");
    }

    printf("Out side of if!\n");

    return 0;
}
