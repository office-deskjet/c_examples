#include <stdio.h>

#define LEN 5

int main(int argc, char **argv)
{
    int my_array[LEN] = {1,2,3,4,5};

    int size = sizeof(my_array);

    int len = sizeof(my_array)/sizeof(my_array[0]);

    printf("size of array in bytes: %d, number of elements: %d\n", size, len);

    return 0;
}
