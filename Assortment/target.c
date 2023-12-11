#include<stdio.h>
main()
{
	//6. Write a program in C to find a pair of target value given by user.
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a [n], i,j;
    for(i=0; i<n; i++)
    {
    	printf("enter a[%d]:",i);
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1; j<n;j++)
		{
			if(a[i]+a[j]==5)
			{
				printf("(%d,%d)",a[i],a[j]);
			}
	    }
	}
}