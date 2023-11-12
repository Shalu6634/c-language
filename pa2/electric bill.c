#include<stdio.h>
main()
{
	//calculate electricity bill
	//0-50=0.50 , 50-100=0.75 , 100-150=1.25 , 150>=1.50 
	int unit,amt,totle,gst;
	printf("enter the unit:");
	scanf("%d",&unit);
	
	if(unit>0&&unit<=50)
	{
		amt=unit*0.50;
		gst=amt*0.20;
		totle=amt+gst;
	}
	else if(unit>50&&unit<=100)
	{
		amt=(50*0.50)+(unit-50)*0.75;
		gst=amt*0.20;
		totle=amt+gst;
	}
	else if(unit>100&&unit<=150)
	{
		amt=(50*0.50)+(50*0.75)+(unit-50)*1.25;
		gst=amt*0.20;
		totle=amt+gst;
	}
	else if(unit>150)
	{
		amt=(50*0.50)+(50*0.75)+(50*1.25)+(unit-50)*1.50;
		gst=amt*0.20;
		totle=amt+gst;
	}
	printf("bill:%d",totle);
}
