/**
* ��ָ��ṹ���ָ��Ϊ��ʱ����Ȼ���Եõ��ṹ���Ա�ĵ�ַ��ֻ���޷����ʳ�Ա��
* see:http://coolshell.cn/articles/11377.html
*/


#include <stdio.h>

struct str{
    int len;
    char s[0];
};

struct foo {
    struct str *a;
};

int TestDemo1()
{
    struct foo f = {0}; // �൱�� NULL����0x00000000

    printf("%p\r\n",&(f.a->len)); // 0x00000000�����ֱ�ӷ��� f.a->len �����
    printf("%p\r\n",f.a->s); // 0x00000004 ���￴���������Ƿ��� struct str �ĳ�Ա����ʵ�����ַ����Ϊ�������Ǹ�ָ�롣

    /*
    if(f.a->s)
    {
        printf(f.a->s);
    }
    */
    return 0;
}
