#include<stdio.h>
main()
{
	char x[32];
	printf("enter your password:");
	gets(x);
	int i,check=0;
	int length=strlen(x);
	if(length>=8&&length<=32)
	{
		for(i=0; i<length; i++)
		{
			if(x[i]>=65&&x[i]<=90)
			{
				check=1;
			}
			
		}
		if(check==1)
		{
			check=0;
			for(i=0; i<length; i++)
			{
				if(length>=97&&length<=122)
				{
					check=1;
				}
			}
			if(check==1)
			{
				check=0;
				for(i=0; i<length; i++)
				{
					if(x[i]>=48&&x[i]<=57)
					{
						check=1;
					}
				}
				if(check==1)
				{
					check=0;
					for(i=0; i<length; i++)
					{
						if(x[i]>=33&&x[i]<=46||x[i]>=58&&x[i]<=64)
						{
							check=1;
						}
					}
					if(check==1)
					{
						check=0;
						for(i=0; i<length; i++)
						{
							if(x[i]!=' ')
							{
								check=1;
							}
						}
						if(check==1)
						{
						   printf("your password is correct");
						}
					}
					else
					{
						printf("At least using one special character");
					}
				}
				else
				{
					printf("At least using one digit");
				}
			}
			else
			{
				printf("At least using one small letter");
			}
		}
		else
		{
			printf("At least using one capital letter");
		}
	}
	else
	{
		printf("Use to more then 8 and less 32 then letters");
	}
	
}