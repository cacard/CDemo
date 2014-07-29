//
//	指令重排测试
//
//	单核 a,b=0,1
//	双核 

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

int x=0;
int y=0;

int a,b;

void* thread1()
{
	x=1;
	a=y;

	return NULL;
}

void* thread2()
{
	y=1;
	b=y;

	return NULL;
}

int main(int argc,char* argv[])
{
	pthread_t t1,t2;
	int r1,r2;
	r1=pthread_create(&t1,NULL,thread1,NULL);
	r2=pthread_create(&t2,NULL,thread2,NULL);
	
	if(r1<0||r2<0){
		perror("error when create thread1 or thread2");
	}else{
		// join
		pthread_join(t1,NULL);
		pthread_join(t2,NULL);
	}

	printf("a=%d,b=%d\r\n",a,b);
	
	return 0;
}
