#include<stdio.h>
main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	char a[n],b[n];
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%s",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		b[i]=a[i];
	}
	for(i=0; i<n; i++)
	{
		printf("%c",b[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%c",a[i]);
	}
}