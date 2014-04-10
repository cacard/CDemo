/*
�򵥵�������ϰ
author:licunqing@gmail.com

Ҫ�㣺
1. ���ͨ��malloc���䣬�����ǲ��þֲ�������
2. ����struct�ֶε����ַ�ʽ����һ���� (*p).field���ڶ�����p->field��
3. ָ���ʼ��ΪNULl��
4. ����ָ��Ĳ������ݿ��Բ��� void *��Ȼ��ʹ��ǿ��ת����
*/

#include <stdio.h>

// ���
struct Node
{
    struct Node * next;     // ��һ��Ԫ��ָ��
    int data;   // ���ֵ
};

// ���õݹ�ķ�ʽ��ӡ����
void PrintLinkList(struct Node * p)
{
    if(p==NULL)
    {
        return;
    }

    printf("->%d\r\n",p->data); // p->data ��ͬ�� (*p).data

    PrintLinkList(p->next);   // �ݹ�
}


// Ϊ�������һ��Ԫ��
// ����ֵ���´����Ľ���ַ
void * AddNode(struct Node *lastNode/*���һ������ַ*/,int newNodeValue/*�½��ֵ*/)
{
    struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));    // malloc��heap�Ϸ��䡣��Ҫ��stack�Ϸ���
    (*newNode).data=newNodeValue;
    (*newNode).next=NULL;

    if(lastNode!=NULL)
    {
        (*lastNode).next=newNode;
    }

    return newNode;
}

// ����LinkList������һ��void*ָ��
void * CreateLinkList()
{
    struct Node * headerPointer=NULL; // ͷ���ָ��
    struct Node * footerPointer=NULL; // β���ָ��

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

