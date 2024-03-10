#include<stdio.h>

int main(void)
{
	float weight;
	float value;
	
	printf("Are you worth your weight in platinum?\n");
	printf("Let us check it out.\n");
	printf("Please enter your weight in pounds:");
	
	/*获取用户的输入*/
	scanf("%f",&weight);//scanf()函数用于读取用户键盘输入的值，&后面的weight是变量名，%f是我们赋予的值直接传递的对象，然后%f传参给weight
	/*假设每盎司单位面包$1700*/
	/*14.5833用于把英镑常衡盎司转换为金衡盎司*/
	value =1700.0*weight*14.5833;
	printf("Your weight in platinum is worth $%.2f.\n",value);//%.2f表示保留两位小数
	printf("Your are easily worth that ！If platinum prices drop,\n");
	printf("eat more to maitain you value.\n");
	return 0;
}