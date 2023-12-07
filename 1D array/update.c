#include<stdio.h>
main()
{
	int n,x,i;
	printf("enter the value of n:");
	scanf("%d",&n);
    int a[n];
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}	
	printf("enter  number x:");
	scanf("%d",&x);
	int y;
	printf("enter  position y:");
	scanf("%d",&y);
	a[y]=x;
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}