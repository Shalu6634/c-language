#include<stdio.h>

int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n+sum(n-1);
}
void main()
{
    int n;
    printf("enter the value of n:");
	scanf("%d",&n);
	printf("sum is :%d",sum(n));
}