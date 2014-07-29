//
//	main()递归
//

#include <stdio.h>

static int c=0;

int main(int argc,char* argv[])
{
	printf("->main(),c=%d\r\n",c);

	if(c>10){
		return 0;
	}

	c++;

	main(1,NULL);
}
