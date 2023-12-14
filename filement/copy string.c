//Copy one string into another
#include<stdio.h>
main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	char x[n],y[n];
	for(i=0; i<n; i++)
	{
		printf("enter : a[%d]",i);
		scanf("%s",&x[i]);
	}
	for(i=0; i<n; i++)
	{
		y[i]=x[i];
	}
	for(i=0; i<n; i++)
	{
		printf("%c ",y[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%c ",x[i]);
	}
}
