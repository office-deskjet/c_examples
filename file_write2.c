#include <stdio.h>

int main(int argc, char **argv)
{

    int array[5] = {0, 154, 12, -124, 9999};
    char buffer[16];
    FILE *fp;
    int i;

    fp = fopen("dat.txt", "w");

    for (i = 0; i < 5; i++)
    {
        snprintf(buffer, 16, "%d\n", array[i]);
        fputs(buffer, fp);
    }

    fclose(fp);

    return 0;
}
