#include<stdio.h>
main()
{
	//3. wap to find factorial of 3 using while loop. 
	int n=3;
	
	int fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
		
	}
	printf("factorial is %d",fact);
}