//q4. wap to find the address of the chain pointer.
#include<stdio.h>
main()
{
	int a = 20;
	int *ptr = &a;
	int **ptr2 = &ptr;
	int  ***ptr3 = &ptr2;
	int  ****ptr4 = &ptr3;
	int  *****ptr5 = &ptr4;
	
	printf("%d\n",*****ptr5);
}