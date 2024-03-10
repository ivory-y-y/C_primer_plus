#include<stdio.h>

int main(void)

{
	int n,int n2, int n3;//不能写在同一行，应该是int n,n2,n3
	/*该程序有多出错误   //漏掉了*/符号
	n=5;
	n2=n*n;
	n3=n2*n2;
	printf("n=%d,n squared=%d,n cubed=%d\n",n,n2,n3);
	
	return 0;	
}