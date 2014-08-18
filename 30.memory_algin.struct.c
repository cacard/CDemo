//
//	struct 的字节对齐
//

#include <stdio.h>

struct Node1
{
    int a;
    char b;
    int c;
};

struct Node2
{
    int a;
    char b;
    char c;
    int d;
};

struct Node3
{
    char c;
};

struct Node4
{
    int a;
    char b;
} n4;

void TestMemoryAlign(void)
{
    struct Node1 n;
    printf("->%d\r\n",sizeof(n)); // ->12

    struct Node2 nn;
    printf("->%d\r\n",sizeof(nn)); // ->16

    struct Node3 nnn;
    printf("->%d\r\n",sizeof(nnn)); // -> 1

    printf("->%d\r\n",sizeof(n4));  // ->8
}

