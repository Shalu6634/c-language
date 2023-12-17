//1. WAP check string is palindrome or not.
#include<stdio.h>
main()
{
	char x[50];
	printf("enter string of x:");
	gets(x);
	char y[50];
	printf("enter string of y:");
	gets(y);
	int i;
	int length=0;
	for(i=0; x[i]!=0; i++)
	{
		length++;
	}
	printf("%d",length);
	int j=0,check=0;
	for(i=0; i<length; i++)
	{
		if(x[i]!=y[j])
		{
			 check++;
		}
		j++;
	}
	if(check==0)
	{
		printf("\nstring is same");
	}
	else
	{
		printf("\nstring is not same");
	}
}