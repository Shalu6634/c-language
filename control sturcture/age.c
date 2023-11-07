#include<stdio.h>
main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age>100)
		{
		  printf("tum kon ho");	
		}
		else
		{
			printf("you entered valid age");
		}
	}
	else
	{
		if(age==0)
		{
		  printf("you entered neutral age");
		}
		else
		{
			printf("you enterd negative age");
		}
	}
}