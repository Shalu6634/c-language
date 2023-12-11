#include<stdio.h>
main()
{
	//9. Wap to find sum of diagonal element in 2d array.
	int r,c;
	printf("enter the value of r:");
	scanf("%d",&r);
	printf("enter the value of c:");
	scanf("%d",&c);
	int a[r][c];
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int sum=0;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==j)
			{

				sum=sum+a[i][j];
			}
		}
	}
	printf("sum is :%d",sum);
}