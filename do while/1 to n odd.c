#include<stdio.h>
main()
{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",x);
		x=x+2;
		
	}while(n>=x);
}