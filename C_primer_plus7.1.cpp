#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days;
	int all_days;
	
	printf("enter the list of daily low temperatures.\n");
	printf("use celius,and enter q to quit .\n");
	while(scanf("%f",&temperature)==1)
	{
		all_days++;
		if (temperature<FREEZING)
			cold_days++;
	}
	if (all_days!=0)
		printf("%d days total:%.lf%%were below freezing.\n",all_days,100.0*(float)cold_days/all_days);
	if(all_days==0)
		printf("no data entered!\n");
	
	
	return 0;
}