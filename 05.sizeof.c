//
//	sizeof
//

#include <unistd.h>
#include <stdio.h>

int main()
{
	// 指针的sizeof均是4（32bit os）
	int a=1;
	char* pChar="hello";
	int* pInt=&a;

	printf("sizeof char*:%d\r\n",sizeof(pChar));
	printf("sizeof int*:%d\r\n",sizeof(pInt));

	return 0;
}
