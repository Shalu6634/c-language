#include<stdio.h>
void calc(int a,int b)
{
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	int op;
	printf("enter your option:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:printf("addition is :%d",a+b);
		break;
		case 2:printf("substraction is :%d",a-b);
		break;
		case 3:printf("multipication is :%d",a*b);
		break;
		case 4:printf("divide is :%d",a/b);
		break;
		case 5:printf("modul is :%d",a%b);
		break;
		default :printf("enter valid input!");
	  
	}
}
main()
{
	int a,b;
	calc(a,b);
}