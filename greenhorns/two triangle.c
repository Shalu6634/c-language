#include<stdio.h>
#include<conio.h>
main()
{
	//find third angle or triangle/ two angle are given.
	//third angle of triangle;a+b+c=180
	int a,b,c;
	printf("enter the value of a,b:");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("%d",c);
}