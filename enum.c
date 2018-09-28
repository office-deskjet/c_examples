#include <stdio.h>

int main(int argc, char **argv)
{
    // enum with a name of NAME
    enum NAME
    {
        zero = -4,
        one,
        two = 2,
        three,
    } var;

    // var not assigned. default value is 0;
    printf("var %d\n", var);

    // anonymous enum, it has no name 
    enum 
    {
        START = 0,
        FIRST,
        SECOND,
        STOP,
    };



    printf("hello world!\n");

    printf("%d %d %d\n", one, two, three);

    var = three;
    printf("var %d\n", var);
    var = 55;
    printf("var %d\n", var);

    return 0;
}
