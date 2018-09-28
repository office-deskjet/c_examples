#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
    uint32_t big = 0xDEAD4EAD;
    printf("%d\n", big);
    printf("%u\n", big);

    // gives warning
    printf("Omitting the delimiter.\n", big);

    return 0;
}
