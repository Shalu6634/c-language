#include<stdio.h>

main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("value is positive");
	}
	else if(n<0)
	{
	    printf("value is negative");	
	}
	else
	{
		printf("value is neutral");
	}
}