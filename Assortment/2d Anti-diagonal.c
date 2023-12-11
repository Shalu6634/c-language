#include<stdio.h>
main()
{
	int n,x; 
	printf("enter the value of n:");
	scanf("%d",&n);
    printf("enter the value of x:");
	scanf("%d",&x);
	int a[n][x];	
	int i,j;
	int sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	j=2;
	for(i=0; i<3; i++)
	{
		sum=sum+a[i][j];
		j--;
	}
	printf("sum is :%d",sum);
}