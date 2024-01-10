#include<stdio.h>
//Q.2 Write a Program to swap two variables using Pointers.
void swap(int *x,int *y,int *ptr)
{
    *ptr= *x ;
    *x= *y;
    *y= *ptr;
}
main()
{
	
	int  x,y;
	printf("enter the value of x,y:");
	scanf("%d%d",&x,&y);
	printf("\nbefore swap\n");
    int *a=&x;
	int *b=&y;
	int *ptr;
	printf("a : %d\n",x);
	printf("b : %d",y);
	swap(&x,&y,&ptr);
	printf("\nafter swap \n"); 
	printf("\na : %d\n",x);
	printf("b : %d",y);
	
}