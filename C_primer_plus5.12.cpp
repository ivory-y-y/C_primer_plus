#include<stdio.h>
#define MAX 100
int main(void)
{
	int count = MAX+1;
	
	while(--count>0)
	{
		printf("%d bottle of spring water on the wall,""%d bottles o string water !\n",count,count);
		printf("Take one down and pass it  around,\n");
		printf("%d bottles of spring water!\n\n",count-1);
	}
	return 0;
}