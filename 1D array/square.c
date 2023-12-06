//Q.3 Write a Program to find square of each element from the given array.
#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	int x;
	int i;
	for(i=0; i<n;i++)
	{
		printf("enter value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n;i++)
	{
		a[x]=a[i]*a[i];
		printf("%d ",a[x]);
	}
	
}