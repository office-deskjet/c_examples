#include <stdio.h>

#define ITERATIONS 6

int hash ( int input ) {
    int h = 0;
    int a = ( input / 1000) + 1;
    int b = ( input % 100 + input % 10) * 10;
    int c = ( input % 5) * 1000;
    h = a + b + c;
    printf("a:%d b:%d c:%d h:%d\n", a, b, c, h);
    return h ;
}

int main(int argc, char* argv[])
{
    int i;
    int hashes[ITERATIONS] = {0};
    int seed = 22344;
     
    printf("hash itr:0 ");
    hashes[0] = hash(seed);

    for (i = 0; i < ITERATIONS - 1; i++)
    {
        printf("hash itr:%d ", i + 1);
        hashes[i + 1] = hash(hashes[i]);
    }
}
