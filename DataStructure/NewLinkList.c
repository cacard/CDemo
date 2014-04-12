/*
 * LinkList��ϰ
 * Ҫ�㣺typedef/�ṹԪ�صĳ�ʼ����Heap�ڴ����/Ԫ�ص�����
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

 // ���Ԫ��
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

         if(ll->head==NULL) // �����ӵ���LinkList�ĵ�һ��Ԫ�أ���ʼ��head
         {
             ll->head=pNode;
             ll->tail=pNode;
         }
         else
         {
              ll->tail->next=pNode; // �����ϸ�����nextָ���½��
              ll->tail=pNode;       // ����tail
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


