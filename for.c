#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;

    // every part of the for statement is optional

    for (int j = 0; j < 5; j++)
        printf("j=%d\n", j);

    // i is not updated :
    for (; i < 10; i++)
    {
        printf("%d\n", i);
        if (i > 4)
            break;
    }

    printf("%d\n", i);

    return 0;
}
