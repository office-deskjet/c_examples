#include <stdio.h>
#include <string.h>

#define MAX_SIZE 128

#define _STR_ "string macro\0"
#define LOG(fmt, args...) fprintf(stdout, "[critical_restore] "fmt"\n", ##args)

int main(int argc, char **argv)
{
    char str[MAX_SIZE];
    //strcpy(str, "Hello world!");
    snprintf(str, 150, "Hello world!");


    printf("%s 123\n", str);

    char *str2 = "I did not  null terminate";

    printf("%s\n", str2);

    LOG("Printing a %s inside printf", _STR_); 

    printf("hello world!\n");

    return 0;
}
