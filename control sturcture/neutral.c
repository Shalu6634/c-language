#include<stdio.h>
main()
{
	int x;
	printf("enter the value of x:");
	scanf("%d",&x);
	
	if(x>0)
	{
		printf("value is positive");
	}
	else
	{
	  	if(x<0)
	  {
	  	printf("value is negative");
	  }
	  else
	  {
	  	printf("value is neutral");
	  }
	}
}