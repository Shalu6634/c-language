#include<stdio.h>
 #include<conio.h>
 main()
 {
    float area;
    int radius;
    const float pi=3.14;
    printf("enter the radius value :");
    scanf("%d",&radius);
    area=pi *radius*radius;
    printf(" area of circle is :%.2fcm2",area);
    
 }