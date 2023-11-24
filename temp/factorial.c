//5. Write C program to calculate factorial of a number.
#include<stdio.h>
main()
{
	int n;
	printf("enterthe value of n:");
	scanf("%d",&n);
	int fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("factorial is : %d",fact);
}