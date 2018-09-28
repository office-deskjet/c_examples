#include <stdio.h>

int main(int argc, char **argv)
{
    putchar(0x00);
    putchar(0x31);
    putchar(0x33);
    putchar(0x33);
    putchar(0x37);
    putchar(0x0a);

    // this won't be printed because of leading nul byte
    printf("\x00hello world!\n");

    return 0;
}
