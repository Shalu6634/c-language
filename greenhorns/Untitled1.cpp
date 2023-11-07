#include<stdio.h>

main()
{
    int a,b,c;
    printf("enter the value of a,b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("a+b is :%d\n",c);
    c=a-b;
    printf("a-b is :%d\n",c);
    c=a*b;
    printf("a*b is :%d\n",c);
    c=a/b;
    printf("a/b is :%d\n",c);
    c=a%b;
    printf("a%%b is :%d\n",c);
}