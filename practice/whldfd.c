#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int ld=n%10;
	int x=0;
	while(n>9)
	{
		n=n/10;
		x++;
	}
	printf("first digit:%d\nsum of :%d",n,n+ld);
}