#include<stdio.h>
#include"dependency1.h"
#include"Dependencies/dependency2.h"
int main()
{
	int x = 10;
	int y = 20;
	printf("The larger number is %d.", larger(x,y));
	printf("The smaller number is %d.", smaller(y,x));
	return 0;
}