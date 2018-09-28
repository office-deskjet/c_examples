#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *old = "abc";
    char *new = "efg";

    strncpy(old, new, 12);

    return 0;
}
