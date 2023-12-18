#include<stdio.h>
int  calc()
{
	int a,b,sum;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	char op;
	printf("enter +,-,*,/ :");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':printf("add:%d",a+b);
		break;
		case '-':printf("subs:%d",a-b);
		break;
		case '*':printf("multi:%d",a*b);
		break;
		case '/':printf("div:%d",a/b);
		break;
	}
	printf("\n");
	return;
}
main()
{
	calc();
	
}