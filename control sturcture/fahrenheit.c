//3. Write C program to convert temperature from degree Celsius to Fahrenheit.(f=(9.5*c)+32)
#include<stdio.h>
main()
{
	int f,celsius;
	
	printf("enter value of celsius:");
	scanf("%d",&celsius);
	
	f = (9.5*celsius)+32;
	printf("Celsius to Fahrenheit:%d ",f); 
}