#include <stdio.h>

void butler(void);//函数原型

int main(void)
{
	printf("I will summon the butler function.\n");//函数调用
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	
	return 0;
} 

void butler(void)//函数定义开始，void等于空bulter(),不带任何参数没有任何返回值
{
	printf("You rang,sir?\n");
}