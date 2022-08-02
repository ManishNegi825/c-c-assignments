#include<stdio.h>
int simple_interest(int,int,int);
int main()
{
int Rate,principal,time;
printf("Enter three numbres ");
scanf("%d %d %d ",&Rate, &principal, &time);
int e = simple_interest(Rate,principal,time);
printf("The simple interset for the above values are %d ",e);
return 0;
}
int simple_interest(int a,int b,int c)
{
int f=a*b*c/100;
return f;
}