#include <stdio.h>

#define FEATURE_ON 1
#define FEATURE_OFF 0

int main(int argc, char **argv)
{

#if CPPUTEST == FEATURE_OFF
    printf("hello world!\n");
#endif

    return 0;
}
