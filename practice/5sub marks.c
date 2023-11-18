#include<stdio.h>
main()
{
	float physics,maths,computer,hindi,science;
	float total;
	
	printf("enter the marks for hindi:");
	scanf("%f",&hindi);
	printf("enter the marks for physics:");
	scanf("%f",&physics);
	printf("enter the marks for science:");
	scanf("%f",&science);
	printf("enter the marks for computer:");
	scanf("%f",&computer);
	printf("enter the marks for maths:");
	scanf("%f",&maths);
	
	total=physics+maths+computer+hindi+science;
	float per = (total/500)*100;
	
	printf("Total marks = %.2f\n", total);
	printf("Percentage = %.2f", per);
	
}