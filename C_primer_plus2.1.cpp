#include <stdio.h>//抬头，头文件，表示引用，复制粘贴stdio.h文件的所有内容都输入在代码位置

int main(void)//函数头，标准定义的主函数，一定从main()函数开始执行，int表示主函数main的返回类型

{
	int num;//声明
	
	num=1;//赋值
	printf("I am a simple ");//调用了标准库里的printf()函数，和python不同的print，多出的f表示这是一种格式化输出
	printf("computer.\n");/*\n 表示换行 */
	printf("My favorite number is %d because it is first.\n",num);/*%d表示填充的num的位置，%提醒打印的变量d表示十进制整数*/
	
	return 0;//一种跳转语句
}