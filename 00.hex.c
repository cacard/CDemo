//
//	HEX
//

#include <stdio.h>
#include <unistd.h>

int main(int argc,char* argv[])
{
	// hex
	int a=0x00;	// 0x00000000
	int b=0x01;	// 0x00000001
	int c=0x0001;	// 0x00000001
	int d=0x12;	// 0x00000012
	int e=0x1234;	// 0x00001234 = 1x16^3+2x16^2+3*16^1+4*16^0=

	printf("%d,%d,%d,%d,%d\r\n",a,b,c,d,e);


	// 


	return 0;
}
