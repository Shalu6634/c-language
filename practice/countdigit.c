//to count num of digits in a number
#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int x=0;
	while(n>0)
	{
		n=n/10;
		x++;
	}
	printf("count digit :%d ",x);
}