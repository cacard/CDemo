//
//

#include <stdio.h>

void compare()
{
	char* a="abc";
	char* b="xyz";

	if(a>b){
		printf("a>b\r\n");
	}

	if(a<b){
		printf("a<b\r\n");
	}


}

int main(int argc,char* argv[])
{
	compare();
	return 0;
}
