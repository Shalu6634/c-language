#include<stdio.h>
main()
{
	int x=1;
	int n;
	int fact=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	do
	{
      fact=fact*x;
      x++;
      
	}while(x<=n);
	
	printf("%d",fact);
	
}