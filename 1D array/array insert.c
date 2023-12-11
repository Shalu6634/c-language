#include<stdio.h>
main()
{
	int n,x,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n; i++)
	{
        printf("enter the a[%d]:", i);
        scanf("%d",&a[i]);
	}
	printf("enter the value of x:");
	scanf("%d",&x);
	a[n]=x;
	for(i=0; i<=n; i++)
	{
	   printf("%d",a[i]);
	}
}
