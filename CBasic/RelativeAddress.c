
#include <stdio.h>
#include <stdlib.h>

struct NodeX
{
    int a;
    int b;
};

void TestRelativeAddress()
{
    // ��������ָ��
    struct NodeX * x; // ��NULLҲ��
    printf("address:<x,%p><x->a,%p><x->b,%p>",x,&(x->a),&(x->b)); // ���Է��ʿ�ָ���Ӧ�Ľṹ��ĳ�Ա������ַ
}
