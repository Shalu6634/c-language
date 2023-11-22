#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(; n>=1; n--)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
	}
}