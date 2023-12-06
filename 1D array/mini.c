#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=1; i<n; i++)
	{
			if(a[0]>a[i])
	    	{
			   a[0]=a[i];
		    }

	}
	printf("%d ",a[0]);
}