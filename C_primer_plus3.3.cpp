#include<stdio.h>
int main(void)

{
	int x=100;
	
	printf("dec=%d;octal=%o;hex=%x\n",x,x,x);
	printf("dec=%d;octal=%#o;hex=%#x\n",x,x,x);//显示0，0x，0X进制数前缀%#o，%#X
	
	return 0;
	
}