#include <stdio.h>

extern int global;
extern int static_global;

void bar()
{
    printf("global: %d\n", global);
    // below line won't compile because static_global is unreachable b/c static.
    //printf("static_global: %d\n", static_global);
}
