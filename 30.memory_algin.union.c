//
//	union的对齐
//

#include <stdio.h>
#include <unistd.h>

int main(int argc,char* argv[])
{
	union u1{
		char a;
	} _u1;

	union u2{
		char a[5];
		char b[2];
	} _u2;

	union u3{
		int a;
		char c;
	} _u3;

	printf("sizeof u1:%d\r\nsizeof u2:%d\r\nsizeof u3:%d\r\n",sizeof(_u1),sizeof(_u2),sizeof(_u3));

	return 0;
}
