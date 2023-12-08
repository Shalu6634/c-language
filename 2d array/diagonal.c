//Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
#include<stdio.h>
main()
{
	int r,c;
	printf("enter r:");
	scanf("%d",&r);
	printf("enter c:");
	scanf("%d",&c);
	int a[r][c];
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0;j<c; j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(i=0; i<r; i++)
	{
		for(j=0;j<c; j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("%d",sum);
	
}