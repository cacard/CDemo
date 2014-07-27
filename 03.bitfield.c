//
//	bit field
//

#include <stdio.h>
#include <stdlib.h>

struct _s{
	int a:1;
};

int main()
{
	printf("%d\r\n",sizeof(struct _s));
	return 0;
}
