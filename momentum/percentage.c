#include<stdio.h>
main()
{
	float  physics, chemistry, biology,mathematics ,computer;
	
	printf("enter marks in physics:");
	scanf("%f", &physics);
	
	printf("enter marks");
	scanf("%f",&chemistry);
	
	printf("enter marks");
	scanf("%f",&biology);
	
	printf("enter marks");
	scanf("%f",&computer);
	
	printf("enter marks");
	scanf("%f",&mathematics);
	
	float totalNumber = physics+chemistry+biology+mathematics+computer;
	 float percentage=(totalNumber/500)*100;
	printf("%f",percentage);
	if(percentage>=90)
	{
		printf("grade-A");
	}
	else if(percentage<=90 && percentage>=80)
	{
		printf("grade-B");
	}
	else if(percentage<=80 && percentage>=70)
	{
		printf("grade-C");
	}
	else if(percentage<=70 && percentage>=60)
	{
	    printf("grade-D");	
	}
	else if(percentage<=60 && percentage>=50)
	{
		printf("grade-E");
	}
	else if(percentage<=50 && percentage>=40)
	{
		printf("grade-F");
	}
}
