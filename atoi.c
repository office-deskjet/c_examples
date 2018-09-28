#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *num = "42";
    int number = atoi(num);

    printf("%d\n", number);

    // segfault
/*
    num = NULL;
    number = atoi(num);
    printf("%d\n", number);
*/
    return 0;
}
