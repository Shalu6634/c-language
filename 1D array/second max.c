#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	int i,x;
	
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{	
	  if(a[i]>0)
	  {
	     x=a[i];
	  }
	}
	x=a[n-2];
	printf("second max :%d ",x);
}