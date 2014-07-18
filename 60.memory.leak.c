#include <stdio.h>

void testMemoryLeak()
{
    int _1M = 1024*1024;
    int _100M=_1M*100;
    int _1G=_1M*1024;

    int i=0;
    for(;i<100;i++)
    {
        char * p = (char *)malloc(_100M);
        printf("p_address:%p\r\n",p);
        free(p);
    }
}
