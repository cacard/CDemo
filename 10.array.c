#include <stdio.h>

void test(int array[])
{
    printf("->%d\r\n",sizeof(array));
}

void TestArrayAsParameter()
{
    int ary[] = {1,2,3};
    printf("->%d\r\n",sizeof(ary));
    test(ary);
}
