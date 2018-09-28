#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int *array_ptr[5];
    int i = 0;
    int j = 0;

    for (; i < 5; i++)
    {
        array_ptr[i] = (int*)malloc(sizeof(int) * 5);
    }

    for (i = 0; i < 5; i++)
    {
        array_ptr[i][i] = i + 1;
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d", array_ptr[i][j]);
        }
        printf("\n");
    }


    printf("hello world!\n");

    return 0;
}
