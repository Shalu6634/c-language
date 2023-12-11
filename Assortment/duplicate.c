//1. WAP to get the array and count & remove all duplicate values in the array.
#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	int i ,j,count=0;;
	for(i=0;i<n;i++)
	{
		printf("enter value a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			  a[i]=0;
			  count++;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		if(a[i]!=0)
		{
			printf("%d",a[i]);
		}
	}
	

}