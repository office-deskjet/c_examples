#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main(int argc, char **argv)
{
    bool _true_ = true;
    bool _false_ = false;

    assert(_true_);
    printf("You see me Now!\n");

    assert(_false_);
    printf("Now you don't!!\n");
    return 0;
}
