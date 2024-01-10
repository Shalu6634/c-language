//Q.2 Write a Program to swap two variables using Pointers.
#include<stdio.h>
main()
{
	int x,y;
	printf("enter the value of x,y:");
	scanf("%d%d",&x,&y);
	printf("\n Before swaping\n");
	printf("\nx : %d\n",x);
    printf("\ny : %d",y);
	int *a=&x;
	int	 *b=&y;
	*a=*a + *b;
	*b=*a - *b;
	*a=*a - *b;
	printf("\n After swaping\n");
	printf("\nx : %d\n",x);
    printf("\ny : %d",y);
}