#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int x,y,z,a,b,c;
    
    x=n%10;
    a=n/10;
    y=a%10;
    b=a/10;
    z=b%10;
    
    c=(x*x*x)+(y*y*y)+(z*z*z);
    printf("Armstrong num is :%d ",c==n);
}