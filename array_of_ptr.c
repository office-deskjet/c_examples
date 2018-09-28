#include <stdio.h>

#define SIZE 4
int main(int argc, char **argv)
{

    int arr1[SIZE] = {1, 2, 3, 4};
    int arr2[SIZE] = {5, 6, 7, 8};

    int* arry_of_ptr[] = {arr1, arr2, NULL};

    // first [] selcets entry of array_of_ptr, second the value of that array.
    //printf("%d\n", arry_of_ptr[1][3]);


    int i = 0;
    int j = 0;
    int *tmp = NULL;
    while (NULL != arry_of_ptr[i])
    {
        tmp = arry_of_ptr[i];
        for (; j < SIZE; j ++)
        {
            printf("%d ", tmp[j]);
        }
        printf("\n");
        
        i++;
        j = 0;
    }


    printf("hello world!\n");

    return 0;
}
