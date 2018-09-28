#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 10;

print:
    printf("Hello world!\n");
    i--;

    if (i > 0)
       goto print; 

    return 0;
}
