//Q.1 Write a Program to create Student Record System for 3 students using structure.
// Consider the below-mentioned attributes in the Student structure:
struct stu 
{
	int id,age,standard;
	char  name[50],course[30],school[30],city[30];
};
main()
{
	struct  stu s1[3];
	char  name[50],course[30],school[30],city[30];
	int i;
	for(i=0; i<3; i++)
	{
		printf("enter name:");
		scanf("%s",&s1[i].name);
//		strcpy(s1[i].name,name);
	    printf("enter id:");
		scanf("%d",&s1[i].id);
		printf("enter age:");
		scanf("%d",&s1[i].age);
		printf("enter standard:");
		scanf("%d",&s1[i].standard);
		printf("enter course:");
		scanf("%s",&s1[i].course);
		printf("enter school:");
		scanf("%s",&s1[i].school);
		printf("enter city:");
		scanf("%s",&s1[i].city);
	}
	for(i=0; i<3; i++)
	{
		printf("\n\n%s\n",s1[i].name);
		printf("%d\n",s1[i].id);
		
	    printf("%d\n",s1[i].age);
	    
	    printf("%d\n",s1[i].standard);
	    
	    printf("%s\n",s1[i].course);
	    
	    printf("%s\n",s1[i].school);
		
		printf("%s\n",s1[i].city); 

	}
	
	
}