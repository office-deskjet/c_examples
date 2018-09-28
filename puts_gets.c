#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int x = 0;
    int y = 1;
    char buf[16];
    gets(buf);
    printf("x = %08x and y = %08x\n", x, y);  




    return 0;
}
