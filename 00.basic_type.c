//
//	基本类型
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h> // C99,so you can using:_Bool/true/false

int main(int argc,char* argv[])
{
	// bool
	// 0==false
	// !0==true

	// using <stdbool>
	_Bool __bool=true;

	//
	short a; 
	short int __a;

	int b;

	long c;
	long int __c;

	signed short aa; // signed short int aa;
	signed int bb;
	signed long cc;
	printf("sizeof short:%d\r\n",sizeof(a));
	printf("sizeof int:%d\r\n",sizeof(b));
	printf("sizeof long:%d\r\n",sizeof(c));
	printf("sizeof signed short:%d\r\n",sizeof(aa));
	printf("sizeof signed int:%d\r\n",sizeof(bb));
	printf("sizeof signed long:%d\r\n",sizeof(cc));
	printf("over\n");
	return 0;
}
