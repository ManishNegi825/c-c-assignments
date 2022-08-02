#include<stdio.h>
float area(int);
float area(int r)
{
float a=3.14*r*r;
return a;
}
int main()
{
float area_circle,c;
printf("Enter the value of a radius to check area of a circle ");
scanf("%f",&area_circle);
c=area(area_circle);
printf("%f is area of the circle which radius is %f ",c,area_circle);
return 0;
}
