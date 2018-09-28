
#include <stdio.h>

void func(void)
{
    printf("hello world!\n");
}

int main(int argc, char **argv)
{
    /*
     * exit(42)
     * bb 2a 00 00 00
     * b8 01 00 00 00
     * cd 80         
     * c3            
     *
     */
    char buff[16] = {0x90,0x90, 0x00,0x00,0x00,0x2a,0xbb,0x00,0x00,0x00,0x01,0xb8,0x80,0xcd,0xc3, 0x90}; 
    void (*func_ptr)();

    func_ptr = func;
    func_ptr();

    func_ptr = buff;
    func_ptr();

    return 0;
}
