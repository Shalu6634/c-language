#include<stdio.h>
#include<conio.h>

main()
{
	
	int a,b,c,x,y,z,num;
	
	printf("Enter The Value : ");
	scanf("%d",&num);
	
	a=num%10;
	x=num/10;
	b=x%10;
	y=x/10;
	c=y%10;
   	z=b;
	printf("%d\n",a);
	printf("%d",b);
	printf("%d",c);
	
	printf("The Value is Polindrom  : %d",a==c);
	
}
	