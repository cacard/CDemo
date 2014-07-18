
// 初始化元素值
void initElements(int * p,const int count)
{
    int i=0;
    for(;i<count;i++)
    {
        *p=i;
        p++;
    }
}

// 打印元素
void printElements(int * p,const int count)
{
    int i=0;
    for(;i<count;i++)
    {
        printf("->%d\n",*p);
        p++;
    }
}





