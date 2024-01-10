//4. wap to change value by passing address of variable in udf.
#include<stdio.h>
void change(int *a)
{
	*a= *a +2;
}
main()
{
	int a;
	
	printf("enter a:");
	scanf("%d",&a);
	change(&a);
	printf("\nchange value :%d",a);
}