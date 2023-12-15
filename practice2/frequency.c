#include<stdio.h>
main()
{
  char a[50];
  printf("enter your name:");
  scanf("%s",&a);
  int i,j,fre=1;
  int length=strlen(a);
  for(i=0; i<length; i++)
  {
    for(j=i+1; j<length; j++)
    {
  	  if(a[i]==a[j])
	  {
		 fre++;
		 a[j]=0;
	  }	
	}
	if(a[i]!=0)
	{
		printf("%c -> %d\n",a[i],fre);
	}
	fre=1;
  }
}