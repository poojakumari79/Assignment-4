// 10. Write a program to print a table of 5.

#include<stdio.h>
int main()
{
	int i,product;
	printf("Table of five :\n");
	for(i=1;i<=10;i++)
	{
		product=5*i;
		printf("5 * %d = %d\n",i,product);
	}
	return 0;
}
