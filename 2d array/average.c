//Q.2 Write a Program to find the average of a 1D array.
#include<stdio.h>
main()
{
	int n,x;
	printf("enter row:");
	scanf("%d",&n);
	printf("enter column:");
	scanf("%d",&x);
	int a[n][x];
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0;j<x; j++)
		{
		    printf("enter a[%d][%d]:",i,j);
		    scanf("%d",&a[i][j]);                       
		}
	}
	float  sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
		  sum =sum+a[i][j];
	    }
	}
	int b=n*x;
	printf(" average num :%f",sum/b);
}