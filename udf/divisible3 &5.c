//2 Write a Program to check if a given number is divisible by 
//both 3 & and 5 or not by using UDF
#include<stdio.h>
int  check()
{
	int x;
	printf("enter the value of x:");
	scanf("%d",&x);
	if(x%5==0 && x%3==0)
	{
		printf("%d is divisible by 3 and 5");
	}
	else if(x%3==0)
	{
		printf("%d is divisible by 3");
	}
	else if(x%5==0)
	{
		printf("%d is divisible by 5");
	}
	else
	{
		printf("%d is not divisible by 3 and 5:");
	}
	
	return x;
}
main()
{
	check();
}