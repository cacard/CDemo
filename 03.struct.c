/*
* Struct的一般使用方法
* 要点：
* 1. 内部变量的Heap内存初始化问题
* 2. 使用完毕后的Heap内存销毁问题
*/

#include <stdio.h>

struct _Node
{
    char * name;
    int age;
};

typedef struct _Node Node;

// 初始化（分配内存）
void initNode(Node * p,const char * name,const int age)
{
    (*p).name=(char *)malloc(sizeof(char)*(strlen(name)+1));    // char是byte char，是一个byte
    strcpy(p->name,name);
    p->age=age;
}

// 销毁
void deleteNode(Node * p)
{
    free(p->name);
}

void testStruct()
{
    Node node; // 在Stack上分配结构体
    initNode(&node,"cacard",29);
    printf("->%s\r\n",node.name);
    deleteNode(&node);

    Node * pNode = (Node *)malloc(sizeof(Node));    // 在Heap上分配结构体
    initNode(pNode,"lcq",29);
    printf("->%s\r\n",pNode->name);
    deleteNode(pNode);
    free(pNode);

    // 原始方式
    struct _Node _node;
    _node.name="jack";
    printf("->%s\r\n",_node.name);

    struct _Node * p = &_node;
    printf("->%s\r\n",p->name);
    p=NULL;
}

