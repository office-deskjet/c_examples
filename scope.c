#include <stdio.h>

int main(int argc, char **argv)
{

    int i = 42;

    if ( i > 0 ) {
        int x = 24;
        printf("i:%d x:%d\n", i, x);
    }

    // error: 'x' undeclared (first use in this function)
    //printf("i:%d x:%d\n", i, x);


    return 0;
}
