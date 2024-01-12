//Q1. WAP to print your basic information in HTML using file handling using Dev C++.
#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("data.html","w");
	char name[20];
	printf("enter your name:");
	gets(name);
	int GRID;
	printf("\nenter your GRID:");
	scanf("%d",&GRID);
	char course[20];
	printf("\nenter your course name:");
    scanf(" %[^\n]s ",&course);
    char collage[30];
    printf("\nenter your collage name:");
    scanf(" %[^\n]s ",&collage);
    char city[30];
    printf("\nenter your city name:");
    scanf(" %[^\n]s ",&city);
    printf("%s\n",name);
    printf("%d\n",GRID);
    printf("%s\n",course);
    printf("%s\n",collage);
    printf("%s\n",city);
    
	fprintf(fp,"<html>");
	fprintf(fp,"<head>");
	
	fprintf(fp,"<title>bio-data</title>");
	
	fprintf(fp,"</title>");
	
	fprintf(fp,"<body>");
	fprintf(fp,"<h3>Name : %s\n</h3>",name);
	fprintf(fp,"<h3>GRID : %d\n</h3>",GRID);
	fprintf(fp,"<h3>Course name : %s\n</h3>",course);
	fprintf(fp,"<h3>collage name : %s\n\n</h3>",collage);
	fprintf(fp,"<h3>city name : %s\n</h3>",city);
	fprintf(fp,"</body>");
	fprintf(fp,"</head>");
	fprintf(fp,"</html>");
}
	