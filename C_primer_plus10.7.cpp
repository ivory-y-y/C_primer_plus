#include<stdio.h>
#define MONTHS 12
#define YEARS 5
int main(void)
{
	const float rain[YEARS][MONTHS]=
	{
		{4.3,4.3,4.3,3.0,3.0,3.0},
		{2.3,2.4,2.3,2.3,5.4,2.1},
		{2.3,5.3,1.2,5.3,1.2,4.1},
		{2.2,3.2,1.2,3.2,3.2,1.3},
	};
	int year ,month;
	float subtot,total;
	
	printf("YEAR	RAINFALL	(inches)\n");
	for(year=0,total=0;year<YEARS;year++)
	{
		for (month=0,subtot=0;month<MONTHS;month++)
			subtot+=rain[year][month];
		printf("%5d%15.lf\n",2010+year,subtot);
		total+=subtot;
	}
	printf("\n the yearly average is %.lf inches.\n\n",total/YEARS);
	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
	printf(" Nov Dec\n");
	
	for (month=0;month<MONTHS;month++)
	{
		for(year=0,subtot=0;year<YEARS;year++)
			subtot+=rain[year][month];
		printf("%4.lf",subtot/YEARS);
		
	}
	printf("\n");
	
	return 0;
}