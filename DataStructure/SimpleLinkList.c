/*
简单的链表练习
author:licunqing@gmail.com

要点：
1. 结点通过malloc分配，而不是采用局部变量。
2. 访问struct字段的两种方式，第一种是 (*p).field，第二种是p->field。
3. 指针初始化为NULl。
4. 复杂指针的参数传递可以采用 void *，然后使用强制转换。
*/

#include <stdio.h>

// 结点
struct Node
{
    struct Node * next;     // 下一个元素指针
    int data;   // 结点值
};

// 采用递归的方式打印链表
void PrintLinkList(struct Node * p)
{
    if(p==NULL)
    {
        return;
    }

    printf("->%d\r\n",p->data); // p->data 等同于 (*p).data

    PrintLinkList(p->next);   // 递归
}


// 为链表添加一个元素
// 返回值：新创建的结点地址
void * AddNode(struct Node *lastNode/*最后一个结点地址*/,int newNodeValue/*新结点值*/)
{
    struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));    // malloc在heap上分配。不要在stack上分配
    (*newNode).data=newNodeValue;
    (*newNode).next=NULL;

    if(lastNode!=NULL)
    {
        (*lastNode).next=newNode;
    }

    return newNode;
}

// 创建LinkList，返回一个void*指针
void * CreateLinkList()
{
    struct Node * headerPointer=NULL; // 头结点指针
    struct Node * footerPointer=NULL; // 尾结点指针

    int i=0;
    for(;i<100;i++)
    {
        if(i==0)
        {
            headerPointer = (struct Node *)AddNode(headerPointer,i);
            footerPointer=headerPointer;
        }
        else
        {
            footerPointer=(struct Node *)AddNode(footerPointer,i);
        }
    }

    return headerPointer;
}

void Test()
{
    struct Node * p = (struct Node *)CreateLinkList();
    PrintLinkList(p);
}

