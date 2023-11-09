#include<stdio.h>

main()
{
	int day;
	printf("enter the day:");
	scanf("%C",&day);
	
	switch(day)
	{
		case 'M':printf("Monday");
		break;
		case 'T':printf("Tuesday");
		break;
		case 'W':printf("Wednesday");
		break;
		case 'TH':printf("Thursday");
		break;
		case 'F':printf("Friday");
		break;
		case 'S':printf("Saturday");
		break;
		case 'SU':printf("Sunday");
		break;
	   default:printf("enter the valid input");
		
	}
}