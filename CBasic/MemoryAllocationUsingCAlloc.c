/*
* calloc
* ��˼��Alloc + Clear
* �ڴ��ڷ���ʱ����ʼ��Ϊ0
*/

#include <stdio.h>
#include "Common.h"

void testCalloc()
{
    const int count = 10;
    int * p = (int *)calloc(count,sizeof(int));

    if(p!=NULL)
    {
        printElements(p,count);
        free(p);
        p=NULL;
    }
    else
    {
        printf("memory allocation failed.");
    }

}
