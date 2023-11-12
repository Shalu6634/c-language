#include<stdio.h>
main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if(age>0)
	{
		if(age<18)
		{
			printf("you can not vote");
		}
		else
		{
			printf("you can vote");
		}
	}
	else
	{
		if(age<0)
		{
			printf("age is negative");
			
		}
		else
		{
			printf("age is neutral");
		}
	}
}