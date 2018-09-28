#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DATFILE "cal_type_data.txt"

int main(int argc, char **argv)
{

    FILE *input;
    char buffer[8];
    int a,b,c;

    input = fopen(DATFILE, "r");

    if (input == NULL)
    {
        fprintf(stderr, "error, abort\n");
        return -1;
    }
    
    fgets(buffer, 8, input);
    a = atoi(buffer);
    
    fgets(buffer, 8, input);
    b = atoi(buffer);

    fgets(buffer, 8, input);
    c = atoi(buffer);

    printf("a=%d, b=%d, c=%d \n", a, b, c);
    if (a > c)
        printf("yes\n");

    fclose(input);

    return 0;
}
