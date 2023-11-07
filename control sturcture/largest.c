#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	printf("enter the valueof a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	//a,b,c;
    if(a>b && a>c)
    {
    	printf("a is largest num",a);
    }	
	else if(b>a && b>c)
	{
		printf("b is largest num",b);
	}
	else
	{
		printf("c is largest num",c);
	}
}