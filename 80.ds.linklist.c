/*
 * LinkList练习
 * 要点：typedef/结构元素的初始化和Heap内存分配/元素的销毁
 */

 #include <stdio.h>

 typedef struct _Node
 {
     struct _Node * next;
     int data;
 } Node;

 typedef struct _LinkList
 {
     struct _Node * head;
     struct _Node * tail;
     int count;
 } LinkList;

void initLinkList(LinkList * ll)
{
    ll->head=NULL;
    ll->tail=NULL;
    ll->count=0;
}

 // 添加元素
 void AddElement(LinkList * ll,int data)
 {
     Node * pNode = (Node *)malloc(sizeof(Node));
     if(pNode==NULL)
     {
         printf("exception:malloc failed.");
         return;
     }
     else
     {
         pNode->next=NULL;
         pNode->data=data;

         if(ll->head==NULL) // 如果添加的是LinkList的第一个元素，初始化head
         {
             ll->head=pNode;
             ll->tail=pNode;
         }
         else
         {
              ll->tail->next=pNode; // 设置上个结点的next指向新结点
              ll->tail=pNode;       // 更新tail
         }

         ll->count++;
     }

 }

 void PrintNewLinkList(LinkList * ll)
 {
    if(ll==NULL)
    {
        return;
    }

    printf("count:%d\r\n",ll->count);

    Node * p = ll->head;

    while(p!=NULL)
    {
        printf("->%d\r\n",p->data);
        p=p->next;
    }
 }

 void TestNewLinkList()
 {
     LinkList ll;
     initLinkList(&ll);

     AddElement(&ll,1);
     AddElement(&ll,2);
     AddElement(&ll,3);

     PrintNewLinkList(&ll);
 }


