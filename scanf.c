#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    char str[4];
    unsigned int hex;

    printf("Enter digit, string, hex: ");
    scanf("%3d %3s %3x", &i, str, &hex);
    printf("You entered: %3d %3s %3x \n", i, str, hex);


    return 0;
}
