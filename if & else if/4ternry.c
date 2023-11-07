//6 WAP to Find max from 4 using ternary operator
#include<stdio.h>

main()
{
	int a,b;
	int c,d;
	printf("enter the value of a,b,c,d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	(a>b)?(a>c)?(a>d)? printf("a is max"):printf("d is max"):(c>d)?printf("c is max"):printf("d is max"): (b>c)? (b<d)? printf("b is max"):printf("d is max"):(c>d)? printf(" c is max"):printf("d is max");
	
}