#include <stdio.h>

main() 
{
  int n,o;
  int r=0,n1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
  o = n;
  while (n != 0)
   {
        n1=n%10;
        r= r * 10 +n1;
        n= n/10;
    }
    if (o==r)
    {
    	printf("%d is a palindrome.", o);
	}
    else
    {
    	printf("%d is not a palindrome.", o);
	}
}