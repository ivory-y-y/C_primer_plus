#include <stdio.h>

int main(void)
{
	int feet , fathoms;//fathoms意思为英寻,等价于int feet;int fathoms;两条声明语句
	
	fathoms=2;
	feet =6*fathoms;//乘法，查找变量fathoms，乘以6，赋值给变量feet英尺
	printf("There are %d feet in %d fathoms!\n.",feet,fathoms);//双引号里的输出主体里有两个%d，双引号外按顺序写入feet，fathoms，三者都是printf()函数里的内容需要用,分隔开
	printf("Yes,I said %d feet!\n",6*fathoms);//说明该打印的值不一定是变量，
	
	return 0;
}