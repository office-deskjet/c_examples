#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DATFILE "cal_type_data.txt"

int main(int argc, char **argv)
{

    FILE *input;
    char buffer[8];
    int size;
    int *array;
    int i;

    input = fopen(DATFILE, "r");

    if (input == NULL)
    {
        fprintf(stderr, "error, abort\n");
        return -1;
    }
    
    fgets(buffer, 8, input);
    size = atoi(buffer);

    array = (int*)malloc(sizeof(int) * size);

    for (i = 0; i < size; i++)
    {
        fgets(buffer, 8, input);
        array[i] = atoi(buffer);
    }

    fclose(input);

    for (i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}
