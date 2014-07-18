/**
* 	ʹ��malloc����Heap�ϵķ���
* 	Ҫ��:
* 	1.����Ƿ����ɹ�
* 	2.ָ����ڴ��ͷָ�벻Ҫ��ʧ
* 	3.free()�ͷ�
* 	4.p=NULL������Ϊ��ָ��
*/

#include <stdio.h>


// malloc : memory allocation
void testMalloc()
{
    const int count=10;
    int * p = (int *)malloc(sizeof(int)*count); // �����ڴ�

    if(p!=NULL) // ����ڴ��Ƿ����ɹ�
    {
        printElements(p,count); // ��ӡδ��ʼ����Ԫ��
        initElements(p,count);
        printElements(p,count);
        free(p);    // �ͷ��ڴ�
        p=NULL;     // ��ָ������ΪNULL
    }
    else
    {
        printf("memory allocation failed.");
    }
}



