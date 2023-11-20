#include<stdio.h>
main()
{
	//calculate electricity bill
	//0-50=0.50 , 50-100=0.75 , 100-150=1.25 , 150>=1.50 
	int amount,gst,unit,total;
	printf("enter the unit:");
	scanf("%d",&unit);
	
	if(unit>0 && unit<=50)
	{
		amount=unit*0.50;
		gst=amount*0.20;
		total=amount+gst;	
	}
	else if(unit>50 && unit<=100)
	{
		amount=(50*0.50)+(unit-50)*0.75;
		gst=amount*0.20;
		total=amount+gst;
	}
	else if(unit>100 && unit<=150)
	{
		amount= (50*0.50)+(50*0.75)+(unit-100)*1.25;
		gst=amount*0.20;
		total=amount+gst;
	}
	else if(unit>150 && unit<=200)
	{
		amount=(50*0.50)+(50*0.75)+(50*1.25)+(unit-150)*1.50;
		gst=amount*0.20;
		total=amount+gst;
	}
	printf("eletricity bill : %d",total);
}