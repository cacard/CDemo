
// ��ʼ��Ԫ��ֵ
void initElements(int * p,const int count)
{
    int i=0;
    for(;i<count;i++)
    {
        *p=i;
        p++;
    }
}

// ��ӡԪ��
void printElements(int * p,const int count)
{
    int i=0;
    for(;i<count;i++)
    {
        printf("->%d\n",*p);
        p++;
    }
}





