#include<stdio.h>
main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	
	if(age==18)
	{
		printf("you can vote");
    }
	else if(age<=18)
	{
		printf("you can not vote");
	}
	else if(age>=18 && age<=100)
	{
		printf("you can vote");
	}
	else if(age<0)
	{
	    printf("age is negative ");
	}
	else if(age==0)
	{
	    printf("age is neutral");
	}
	else if(age>100)
	{
		printf("you can not vote");
	}
}
