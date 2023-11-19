#include<stdio.h>
main()
{
	int age;
	printf("enter the value of n:");
	scanf("%d",&age);
	if(age>=18 && age<100)
	{
		printf("you can vote");
	}
	else if(age<18)
	{
		printf("you cannot vote");
	}
	else
	{
		printf("enter the valid age");
	}
}