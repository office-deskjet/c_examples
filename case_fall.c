#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    int a = 3;

    if (argc >= 2)
        a = atoi(argv[1]);

    switch (a)
    {
        case 1:
            printf("case 1\n");
        case 2:
        case 3:
            printf("case 3\n");
            break;
        case 4:
            printf("case 4\n");
            break;

        default:
            printf("defualt\n");

    }


    return 0;
}
