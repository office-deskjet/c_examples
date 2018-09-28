#include <stdio.h>

#define SIZE 5
#define TWO 2

#define TRUE 1
#define FLAG TRUE
int main(int argc, char **argv)
{

    int arr[SIZE] = {THREE};

#if (FLAG == TRUE)
    arr[1] = TWO;
#endif 

    printf("hello world!\n");

    return 0;
}
