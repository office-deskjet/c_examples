#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char *str1 = "foo\n";
    uint8_t *str2 = "hello world!\n";

    str1 = (char *)str2;

    printf("%s", str1);

    return 0;
} 
