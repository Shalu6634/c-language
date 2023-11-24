#include<stdio.h>
main()
{
	//3. Write C program to count number of digits in a number.
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int count=0;
	while(n>0)
	{
		n/=10;
		count++;
	}
	printf("digit is :%d",count);
}