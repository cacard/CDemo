/*
 * 链表结构实现缓存项管理
 *
 * 查找速度慢，O(n)
 */


struct Node
{
    struct Node * next;
    struct CacheObject * value;
};

void * CreateLinkList()
{
    struct Node * p=NULL;

    return p;
}

void * Add(struct Node * lastNode,CacheObject obj)
{

}

void * Get(char * key)
{

}

// 更新
void * Set(char * key,CacheObject * obj)
{

}
