/**
* 当指向结构体的指针为空时，依然可以得到结构体成员的地址，只是无法访问成员。
* see:http://coolshell.cn/articles/11377.html
*/


#include <stdio.h>

struct str{
    int len;
    char s[0];
};

struct foo {
    struct str *a;
};

int TestDemo1()
{
    struct foo f = {0}; // 相当于 NULL，即0x00000000

    printf("%p\r\n",&(f.a->len)); // 0x00000000。如果直接访问 f.a->len 则出错
    printf("%p\r\n",f.a->s); // 0x00000004 这里看起来好像是访问 struct str 的成员，其实是其地址，因为数组名是个指针。

    /*
    if(f.a->s)
    {
        printf(f.a->s);
    }
    */
    return 0;
}
