#include <stdio.h>
#include <stdlib.h>
#include "MemoryLeak.c"

int main()
{
    printf("Hello world!\n");

    int * p = NULL;
    char * pp = NULL;
    int * ppp = 0;
    printf("%p",ppp);

    return 0;
}

