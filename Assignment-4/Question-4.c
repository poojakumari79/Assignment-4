// 4. Write a program to print the first 10 odd natural numbers

#include<stdio.h>
int main()
{
	int i;
	printf("The first 10 odd natural numbers :\n");
	for(i=1;i<=20;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
