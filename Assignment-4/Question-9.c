// 9. Write a program to print cubes of the first 10 natural numbers.

#include<stdio.h>
int main()
{
	int i,cube;
	printf("cube of the first 10 natural numbers:\n");
	for(i=1;i<=10;i++)
	{
		cube=i*i*i;
		{	
		printf("cube of %d is %d\n",i,cube);
	}
	}
	return 0;
}
