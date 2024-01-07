#include<stdio.h>
//1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case,
// and looping. Make sure that the program is endless until a certain letter is pressed.
void calc()
{
	int x,y;
	printf("\nenter 1 for +\n");
	printf("enter 2 for -\n");
	printf("enter 3 for *\n");
	printf("enter 4 for /\n");
	printf("enter 5 for %%\n");
	int op;
	printf("enter your option:");
	scanf("%d",&op);
	printf("enter the first num:");
	scanf("%d",&x);
	printf("enter the second num:");
	scanf("%d",&y);
	
	switch(op)
	{
		case 1:printf("addition %d and %d =%d",x,y,x+y);
		break;
		case 2:printf("substraction %d and %d =%d",x,y,x-y);
		break;
		case 3:printf("multipication %d and %d =%d",x,y,x*y);
		break;
		case 4:printf("division %d and %d =%d",x,y,x/y);
		break;
		case 5:printf("modul %d and %d =%d",x,y,x%y);
		break;
	
	} 
 }
}
int main()
{
	calc();
}
