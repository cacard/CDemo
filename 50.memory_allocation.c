/**
* 	使用malloc在在Heap上的分配
* 	要点:
* 	1.检查是否分配成功
* 	2.指向该内存的头指针不要丢失
* 	3.free()释放
* 	4.p=NULL，设置为空指针
*/

#include <stdio.h>


// malloc : memory allocation
void testMalloc()
{
    const int count=10;
    int * p = (int *)malloc(sizeof(int)*count); // 分配内存

    if(p!=NULL) // 检查内存是否分配成功
    {
        printElements(p,count); // 打印未初始化的元素
        initElements(p,count);
        printElements(p,count);
        free(p);    // 释放内存
        p=NULL;     // 将指针设置为NULL
    }
    else
    {
        printf("memory allocation failed.");
    }
}



