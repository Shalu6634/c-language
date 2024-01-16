#include<stdio.h>
struct result
{
	int roll_no;
	float chem,physics,maths;
	char name[20];
};
int main()
{
	struct result stu[5];
	float total[5],result;
	char name[20];
    int i;
    for(i=0; i<5; i++)
    {
    	printf("\nEnter %d student details \n",i+1);
    	printf("\nEnter your name:");
    	scanf("%s",stu[i].name);
    	printf("enter your roll_no:");
    	scanf("%d",&stu[i].roll_no);
    	printf("Enter your chemistry marks:");
    	scanf("%f",&stu[i].chem);
    	printf("Enter your physics marks:");
    	scanf("%f",&stu[i].physics);
		printf("Enter your maths marks:");
    	scanf("%f",&stu[i].maths);
        float marks=stu[i].chem+stu[i].physics+stu[i].maths;
        float per=(marks/300.0)*100;
        total[i]=marks;
        result=per;
	}
	for(i=0; i<5; i++)
	{
		printf("\n\nEnter %d student details \n",i+1);
		printf("Name : %s\n",stu[i].name);
		printf("Roll_no : %d\n",stu[i].roll_no);
		printf("Chemistry :%.2f\n",stu[i].chem);
		printf("\nPhysics : %.2f\n",stu[i].physics);
		printf("\nMaths : %0.2f",stu[i].maths);
		printf("\ntotal : %.2f/300\n",total[i]);
		 printf("\nstudent percentage : %.2f\n",result);
    }
}