#include<stdio.h>
//tsrs
int  cube(int a)
{
	printf("enter the value of a:");
	scanf("%d",&a);
	int b=(a*a)*a;
	printf(" cube is : %d",b);
	return b;
}
main()
{
	int b;
	cube(b);
}
