//Q.2 Write a Program to perform the addition operation of two 2D arrays & store it in another array.
// Keep in mind that both array sizes must be the same.
#include<stdio.h>
main()
{
	int n,x,y; 
	printf("enter n:");
	scanf("%d",&n);
	printf("enter x:");
	scanf("%d",&x);
	int a[n][x];
	int i,j,sum[n][x];
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
		 printf("enter:a[%d][%d]",i,j);
		 scanf("%d",&a[i][j]);
		}
	}
	int b[n][x];
	printf("enter n:");
	scanf("%d",&n);
	printf("enter x:");
	scanf("%d",&x);
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("enter:b[%d][%d]",i,j);
		    scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<x; j++ )
		{
			sum[n][x]=a[i][j]+b[i][j];
		    printf("%d ",sum[n][x]);
		}
		printf("\n");
    }
}
