#include<stdio.h>
int main(void)
{
	const int secret_code=13;
	int code_entered;
	
	printf("to enter the triskaidekaphobia therapy club,\n");
	printf("please enter the secred code number:");
	scanf("%d",&code_entered);
	while(code_entered!=secret_code)
	{
		printf("to enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number:");
		scanf("%d",&code_entered);
		
	}
	printf("congratulations!you are cured!\n");
	
	return 0;
}