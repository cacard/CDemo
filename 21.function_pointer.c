//
//	函数指针
//
//	可当做函数委托，委托指向某个函数
//

#include <stdio.h>
#include <stdlib.h>

void some_function_1(int x,int y)
{
	printf("in function1,x+y=%d\r\n",x+y);
}

void some_function_2(int x,int y)
{
	printf("in function2,x*y=%d\r\n",x*y);
}

// 可看做工厂
void factory(int x,int y)
{
	void (*function_pointer)(int,int);
	function_pointer=some_function_1;
	function_pointer(x,y);
	(*function_pointer)(x,y); // 可解引用
	function_pointer=some_function_2;
	function_pointer(x,y);
}

// 转型
void test_cast()
{
	void* p=NULL;
	p=some_function_1;
	((void(*)(int,int))p)(5,5); // 把void*转化成指针函数
	(*(void(*)(int,int))p)(6,6);// 可解引用
}

int main(int argc,char* argv[])
{
	factory(1,2);
	test_cast();
	exit(0);
}
