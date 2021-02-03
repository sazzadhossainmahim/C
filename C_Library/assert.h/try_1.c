#include <stdio.h>
#include <assert.h>

int magic(int size, int *ptr);

int main(void)
{
    int a = 4;
    int *ptr = &a;
    magic(10, ptr);
    puts("done");
    return 0;
}

int magic(int size, int *ptr)
{
    assert(ptr != NULL);
    assert(size >= 30);
}