#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
    FILE *fp;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "value of errno:%d\n", errno);
        fprintf(stderr, "Error opening file: %s\n", stderror(errno));
    }
    else
    {
        fclose(fp);
    }
    return (0);
}