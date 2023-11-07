#include<stdio.h>

main()
{
	//Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
   //Ex. Base Salary: 100 RS, HRA=10, DA=5, TA=8.
   //Ans = 123 RS
	int salary,hra,base,da,ta;
	printf("enter value gross salary:");
	scanf("%d",&salary);
	
	printf("enter value gross salary:");
	scanf("%d",&hra);

    printf("enter value gross salary:");
	scanf("%d",&da);
	
	printf("enter value gross salary:");
	scanf("%d",&ta);
	
	salary= salary+base+hra+da+ta;
	printf("%d",salary);
}