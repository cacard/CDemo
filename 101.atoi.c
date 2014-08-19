//
//	string => int
//
//	gcc -lm
//
//	TODO
//	- 边界检查和无效字符检查
//	- 溢出检查
//	- 符号检查和判断
//	- float?
//	- 

#include <stdio.h>
#include <unistd.h>
#include <string.h> 	// strlen
#include <math.h>	// pow(x,y)

// e.g.:'2'=>2
int charToInt(char c)
{
	return (int)c-48;
	// 进一步
	// return c-'0';
}

int atoi(char* str)
{
	// 边界检查
	if(str==NULL){ // 是否为空
		return 0;
	}
	
	int len=strlen(str);
	int result=0;
	int flag=1;		// 正or负
	int i=0;

	for(;i<len;i++){
		if(i==0){ // 符号判断
			if(str[0]=='+'){
				continue;
			}else if(str[0]=='-'){
				flag=-1;
				continue;
			}
		}

		result+=charToInt(str[i])*(pow(10,len-1-i)); // 高位=高位数字x10^(len-1-i)，有无符号不影响	
	}

	return result*flag;

}

// K&R's 
vid atoi2(char s[])
{
	int i,n;
	n=0;
	for (i=0; s[i]>='0' && s[i] <= '9';++i)
		n = 10*n + (s[i] - '0');		// 正常人的思维能“原创”地想到使用这种方法？
	
	return 0;
}

void testAtoi()
{
	char* str1="12345";
	printf("%d\r\n",atoi(str1));

	char* str2="+54321";
	printf("%d\r\n",atoi(str2));

	char* str3="-54321";
	printf("%d\r\n",atoi(str3));
}

void testCharToInt()
{
	printf("testCharToInt()\r\n");
	char charArray[10]={'0','1','2','3','4','5','6','7','8','9'};
	int i=0;
	for(;i<10;i++){
		printf("->%d\r\n",charToInt(charArray[i]));
	}
}


int main(int argc,char* argv[])
{
	testAtoi();
	//testCharToInt();
	return 0;
}
