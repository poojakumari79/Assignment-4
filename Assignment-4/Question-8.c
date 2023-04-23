// 8. Write a program to print squares of the first 10 natural numbers.

#include<stdio.h>
int main()
{
	int i,square;
	printf("squares of the first 10 natural numbers:\n");
	for(i=1;i<=10;i++)
	{
		square=i*i;
		{	
		printf("square of %d is %d\n",i,square);
	}
	}
	return 0;
}
