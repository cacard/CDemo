//
//	函数返回指针-指针函数
//

#include <stdio.h>
#include <stdlib.h>

// 返回局部变量指针
// 编译器警告:warning: function returns address of local variable
int* return_local()
{
	int a=1;
	return &a;
}

// 返回全局变量
int b=2;
int* return_global()
{
	b++;
	return &b;
}

// 返回参数地址
// 同样编译器警告，参数实为local variable。
int* return_arguement(int x)
{
	x++;
	return &x;
}

int main(int argc,char* argv[])
{
	int* p=return_local();
	printf("%d\r\n",*p);

	int* p2=return_global();
	printf("%d\r\n",*p2);

	int* p3=return_arguement(4);
	printf("%d\r\n",*p3);

	exit(0);
}
