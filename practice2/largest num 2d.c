#include<stdio.h>
main()
{
	int n,x;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter x:");
	scanf("%d",&x);
	int a[n][x];
	int i,j,max=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
	    {
	    	printf("a[%d][%d]:",i,j);
	    	scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
		    if(a[i][j]>max)
		    {
		    	max=a[i][j];
			}
		}
	}
	printf("maximum number is :%d ",max);
	
}