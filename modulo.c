#include <stdio.h>

int main(int argc, char **argv)
{
    int i = ( -1 % 5);

    // this won't be printed because of leading nul byte
    printf("i=%d!\n", i);

    return 0;
}
