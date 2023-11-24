//4. Write C program to find sum of first and last digit of a number.
#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int ld=n%10;
	
	while(n>9)
	{
		n/=10;
		
	}
	printf("%d",n+ld);
}