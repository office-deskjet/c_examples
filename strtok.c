#include <stdio.h>
#include "string.h"

int main(int argc, char **argv)
{
    char* parse_me = "10 11 12 13";

    printf("%s\n", parse_me);

    strtok(parse_me, " ");

    char* tok;

    tok = strtok(NULL, " ");

    if (tok != NULL)
        printf("%s\n", tok);
    else
        printf("it was null.\n");

    return 0;
}
