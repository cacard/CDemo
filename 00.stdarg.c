//
//	stdarg.h
//
//	variable argument
//
//	http://pubs.opengroup.org/onlinepubs/007908799/xsh/stdarg.h.html
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

// 至少一个参数
void variable_arguement(int a,...)
{
	va_list vl;// pointer
	va_start(vl,a); // pointer to 1st arguement

	// 1st
	printf("->%d\r\n",a); // 第一个参数直接从参数列表中获取

	// 2st:后续参数通过va_arg获取
	int v2=va_arg(vl,int);
	printf("->%d\r\n",v2);

	// next
	int v3=va_arg(vl,int);
	printf("->%d\r\n",v3);

	// end
	va_end(vl);
}

int main(int argc,char* argv[])
{
	variable_arguement(1,2,3,4,5);
	return 0;
}
