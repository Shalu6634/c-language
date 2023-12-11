//7. Write a C program to find the largest number in array.[2D]

#include<stdio.h>

void main()
{
	int n,x;
	
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	int a[n][x];
	int i;
	int j;
	int max=0;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("Enter the value of a[%d][%d] :",i,j);
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
			if(a[i][j] > max)
		    {
			    max = a[i][j];
		    }
		}
	}
	printf("max is : %d",max);
}
