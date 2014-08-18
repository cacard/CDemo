//
//	测试编译器指令重排
//
//	gcc -S 默认编译:
//		 movl    %eax, value
//	         movl    $1, isValueUpdated
//
//	gcc -o2 开启优化:
//		movl    $1, isValueUpdated
//		movl    %eax, value
//

int value=0;
int isValueUpdated=0;

void m(int x)
{
	value=x;// update the valuei
	asm volatile("" ::: "memory"); // 放置一个Barrier避免优化重排
	isValueUpdated=1; // mark
}

int main(int argc,char* argv[])
{
	m(1);
}
