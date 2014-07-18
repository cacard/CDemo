
#include <stdio.h>
#include <stdlib.h>

struct NodeX
{
    int a;
    int b;
};

void TestRelativeAddress()
{
    // 仅声明了指针
    struct NodeX * x; // 非NULL也可
    printf("address:<x,%p><x->a,%p><x->b,%p>",x,&(x->a),&(x->b)); // 可以访问空指针对应的结构体的成员变量地址
}
