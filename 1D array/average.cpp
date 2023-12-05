//Q.2 Write a Program to find the average of a 1D array.
#include<stdio.h>
main()
{
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int sum=0;
	
	for(i=0; i<n; i++)
	{
		sum =sum+a[i];
	}
	printf(" average num :%d",sum/n);
}n