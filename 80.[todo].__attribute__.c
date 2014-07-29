//
//	GCC __attribute__
//
//


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// variable attribute
//	- 必须是2的次方
int ary_heap[2] __attribute__((aligned (0x1000))) = {0,1};

void test_aligned_heap()
{
	printf("ary_heap,%p,%p\r\n",&ary_heap[0],&ary_heap[1]); //0x804b000,0x804b004
}

void test_aligned()
{
	int a[2] __attribute__((aligned (0x1000))) = {1,2}; // 无效,加上static有效。即在stack上分配无法对齐
	printf("local array:%p,%p\r\n",&a[0],&a[1]);

	//静态变量
	static int b __attribute__((aligned (0x1000))) = 1;
	printf("local int:%p\r\n",&b);
}


struct _s{
	int a;
	char b;
	int c;
} __attribute__((aligned (0x1000)));

void test_struct_aligned()
{
	static struct _s s;
	printf("struct:%p\r\n",&s);
}

int main(int argc,char* argv[])
{
	test_aligned_heap();
	test_aligned();
	test_struct_aligned();
	return 0;
}
