//
//	cache-line test
//
//	perf stat -e L1-dcache-loads-misses -e L1-dcache-load -e cycles xxx.out 
//

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE=9999999;
char ary[BUFFER_SIZE] __attribute__ ((aligned (64))) = {0};

int main(int argc,char* argv[])
{
	int step=1; // 步长,测试时可按 1,2 ... 64,128,256 .. 查看 cache hit / cache-miss
	int stepcount=0;

	int i=0;
	int j=0;
	for(;i<20;i++){
		for(;j<BUFFER_SIZE;j+=setp){
			setpcount++;
			ary[j]=1; // 写
		}
	}

	printf("setp count=%d\r\n",stpecount);

	return 0;
}
