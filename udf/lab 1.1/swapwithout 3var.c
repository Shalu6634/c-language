//q.3 wap to swap two variables without using 
//the third variable and using a pointer.
#include<stdio.h>
void swap(int *x,int *y)
{
    *x= *x * *y;
    *y= *x / *y;
    *x= *x / *y;
}
main()
{
	
	int  x,y;
	printf("enter the value of x,y:");
	scanf("%d%d",&x,&y);
	printf("\nbefore swap\n");
    int *a=&x;
	int *b=&y;
	printf("a : %d\n",x);
	printf("b : %d",y);
	swap(&x,&y);
	printf("\nafter swap \n"); 
	printf("\na : %d\n",x);
	printf("b : %d",y);
	
}