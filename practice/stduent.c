#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(n>=80 && n<=90)
	{
		printf("grade A");
	}
	else if(n>=70 && n<=80)
	{
		printf("grade B");
	}
	else if(n>=50 && n<=60)
    {
    	printf("grade c");
    }

	
}