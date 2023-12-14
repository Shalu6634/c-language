#include<stdio.h>
main()
{
	char name[20]="aish sh";
	int i;
    if(name[0]>=97 && name[0]<=122)
    {
     	name[0]=name[0]-32;
	}
	for(i=1; i<sizeof(name); i++)
	{
		if(name[i-1]==' ')
		{
			if(name[i]>=97 && name[i]<=122)
			{
				name[i]=name[i]-32;
			}
		}
		else if(name[i]>=65 && name[i]<=90)
		{
		   name[i]=name[i]+32;
		}
		else if(name[i]==' ')
		{
			if(name[i]>=97 && name[i]<=122)
			{
				name[i+1]=name[i+1]-32;
			}
		}
	}
	puts(name);
}