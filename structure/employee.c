//Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number 
//of employees using structure.Consider the below-mentioned attributes in the Employee structure:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_city
//- emp_experience
//- emp_company_name
#include<stdio.h>
struct emp
{
	int id,age,exp;
	char name[20],city[30],company[30],role[20];
};
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	struct emp s1[n];
	char name[20];
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter employee name:");
		scanf("%s",&s1[i].name);
		printf("enter id:");
		scanf("%d",&s1[i].id);
		
		printf("enter age:");
		scanf("%d",&s1[i].age);
		
		printf("enter experience:");
		scanf("%d",&s1[i].exp);
		
		printf("enter company:");
		scanf("%s",&s1[i].company);
		
		printf("enter role:");
		scanf("%s",&s1[i].role);
		
		printf("enter city:");
		scanf("%s",&s1[i].city);
	}
	for(i=0; i<n; i++)
	{
	   printf("\n%s\n",s1[i].name);	
	   
	   printf("%d\n",s1[i].id);
	   
	   printf("%d\n",s1[i].age);
	  
	   printf("%d\n",s1[i].exp);
	  
	   printf("%s\n",s1[i].company);
	   
	   printf("%s\n",s1[i].role);
	   
	   printf("%s\n",s1[i].city);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}