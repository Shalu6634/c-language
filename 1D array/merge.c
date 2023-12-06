//.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array.
// Keep in mind that both array sizes can be different.
#include<stdio.h>
main()
{
	int x,y,i;
	printf("enter the size of array:");
	scanf("%d",&x);
	printf("enter the size of array2:");
	scanf("%d",&y);
	int n=x;
	int a[x],b[y],c[x+y];
	
	for(i=0; i<x; i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<y; i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<x; i++)
	{
		c[i]=a[i];
	}
	for(i=0; i<y; i++)
	{
		c[n]=b[i];
		n++;
	}
	for(i=0; i<x+y; i++)
	{
		printf("%d ",c[i]);
	}
	
	
	
}