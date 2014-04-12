/*
* Struct��һ��ʹ�÷���
* Ҫ�㣺
* 1. �ڲ�������Heap�ڴ��ʼ������
* 2. ʹ����Ϻ��Heap�ڴ���������
*/

#include <stdio.h>

struct _Node
{
    char * name;
    int age;
};

typedef struct _Node Node;

// ��ʼ���������ڴ棩
void initNode(Node * p,const char * name,const int age)
{
    (*p).name=(char *)malloc(sizeof(char)*(strlen(name)+1));    // char��byte char����һ��byte
    strcpy(p->name,name);
    p->age=age;
}

// ����
void deleteNode(Node * p)
{
    free(p->name);
}

void testStruct()
{
    Node node; // ��Stack�Ϸ���ṹ��
    initNode(&node,"cacard",29);
    printf("->%s\r\n",node.name);
    deleteNode(&node);

    Node * pNode = (Node *)malloc(sizeof(Node));    // ��Heap�Ϸ���ṹ��
    initNode(pNode,"lcq",29);
    printf("->%s\r\n",pNode->name);
    deleteNode(pNode);
    free(pNode);

    // ԭʼ��ʽ
    struct _Node _node;
    _node.name="jack";
    printf("->%s\r\n",_node.name);

    struct _Node * p = &_node;
    printf("->%s\r\n",p->name);
    p=NULL;
}

