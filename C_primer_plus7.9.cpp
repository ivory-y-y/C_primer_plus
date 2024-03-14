#include<stdio.h>
int main(void)
{
	const float MIN=0.0f;
	const float MAX=100.0f;
	
	float score;
	float total=0.0f;
	int n=0;
	float min=MAX;
	float max=MIN;
	
	printf("enter the first score(q to quit):");
	while(scanf("%f",&score)==1)
	{
		if (score<MIN||score>MAX)
		{
			printf("%0.lf is an invalid value.try again:",score);
			continue;
		}
		printf("Accepting%0.lf:\n",score);
		min=(score<min)?score:min;
		max=(score>max)?score:max;
		total+=score;
		n++;
		printf("enter next score(q to quit):");
	
	}
	if(n>0)
	{
		printf("Average of %d score is %0.lf.\n",n,total/n);
		printf("Low=%0.lf,high=%0.lf",min,max);
		
	}
	else
		printf("No valid scores were entered.\n");
		
	return 0;
}