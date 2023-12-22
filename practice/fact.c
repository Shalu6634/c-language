#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int f=1;
	while(n>1)
	{
		f=f*n;
		n--;
	}
	printf("factorial is :%d",f);
}