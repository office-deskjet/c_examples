#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char **argv)
{
    typedef enum
    {
        ZERO = 0,
        ONE,
        TWO,
        SIZE
    } count_t;

    int my_array[SIZE] = {5};
    int i;

    for (i = 0; i < SIZE; i++)
        printf("%d\n", my_array[i]);

    return 0;
}
