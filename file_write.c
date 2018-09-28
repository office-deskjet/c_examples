#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

#define DATFILE "./data.txt"

int main(int argc, char **argv)
{

    int fd;
    char buffer[8];
    ssize_t written = 0;
    int str_len = 0;
    int a = 1337;
    int b = -99;
    int c = 42;
    int d = 9000;

    fd = open(DATFILE, O_RDWR|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);

    if (fd < 0)
    {
        printf("problem creating file\n");
        printf("errno:%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    str_len = snprintf(buffer, 8, "%d\n", a);
    written = write(fd, (void*)buffer, str_len);
    //memset(buffer, 0, 8);
/*
    str_len = snprintf(buffer, 8, "%d\n", b);
    written += write(fd, (void*)buffer, str_len);
    //memset(buffer, 0, 8);

    str_len = snprintf(buffer, 8, "%d\n", c);
    written += write(fd, (void*)buffer, str_len);

    str_len = snprintf(buffer, 8, "%d\n", d);
    written += write(fd, (void*)buffer, str_len);
*/
    printf("bytes written:%zd\n", written);
    close(fd);

    return 0;
}
