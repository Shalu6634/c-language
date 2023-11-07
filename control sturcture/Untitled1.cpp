#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the value of a , b, c, d, e:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("a is max"):printf("e is max"):(d>e)?printf("d is max"):printf("e is max"):(c>d)?(c>e)?printf("c is max"):printf("e is max"):(d>e)?printf("d is max"):printf("e is max"):(b>c)?(b>d)?(b>e)?printf("b is max"):printf("e is max"):(d>e)?printf("d is max"):printf("e is max"):(c>d)?(c>e)?printf("c is max"):printf("e is max"):(d>e)?printf("d is max"):printf("e is max");
}
