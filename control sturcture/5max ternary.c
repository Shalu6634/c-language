//WAP to Find max< from 5 using ternary operator
#include<stdio.h>
main()
{
	
	int a,b,c,d,e;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter c :");
	scanf("%d",&c);
	printf("enter d :");
	scanf("%d",&d);
	printf("enter e :");
	scanf("%d",&e);
	
	
(a>b)? (a>c)? (a>d)? (a>e)? printf("a is max"):printf("e is max"):(d>e)? printf("d is max"):printf("e is max"):(c>d)? (c>e)? printf("c is max"):printf("e ia max"):(d>e)? printf("d ia max"):printf("e is max"):(b>c)? (b>d)? (b>e)? printf("b is max"):printf("e is max"):(d>e)? printf("d is max"):printf("e is max"):(c>d)? (c>e)? printf("c ia max"):printf("e is max"):(d>e)? printf("d is max"):printf("e is max");                                                                                                
}
