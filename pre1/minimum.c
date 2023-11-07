#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	printf("enter the value of a,b,c,d:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("%d\n",(a<b && a<c && a<d));
	printf("%d\n",(b<a && b<c && b<d));
	
	printf("%d\n",( c<a && c<b && c<d));
	printf("%d",(d<a && d<b && d<c));
}