#include<stdio.h>
#define PRAISE "your are  an extraodinary being."
int main()
{
	char name[40];
	
	printf("What is your name?");
	scanf("%s",name);
	printf("Hello,%s.%s\n",name,PRAISE);
	
	return 0;
}