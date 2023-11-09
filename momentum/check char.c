#include<stdio.h>

main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	if(n>=65 && n<=90 || n>=97 && n>122)
	{
		
		printf("this is Alphabet");
		
	}
	else if(n>=33 && n<=47|| n>=58 && n<=64)
	{
		
		printf("this is special character");
		
	}
	else if(n>=48 && n<=57)
	{
		printf("this is number");
	}
	else
	{
		printf("this is not special char not num/alphabet");
	}
}
