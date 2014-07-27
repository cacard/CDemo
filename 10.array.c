//
//	array
//

#include <stdio.h>

// 数组作为参数实则是个指针
void test(int array[])
{
    printf("->%d\r\n",sizeof(array));
}

void TestArrayAsParameter()
{
    int ary[] = {1,2,3};
    printf("->%d\r\n",sizeof(ary));
    test(ary);
}

int main(int argc,char* argv[])
{
	TestArrayAsParameter();
	return 0;
}
