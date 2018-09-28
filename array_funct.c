#include <stdio.h>

void func(int *array, int size);

int main(int argc, char **argv)
{
    int my_array[] = {1,2,3,4};

    func(my_array, sizeof(my_array)/sizeof(my_array[0]));

    return 0;
}

void func(int *array, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}
