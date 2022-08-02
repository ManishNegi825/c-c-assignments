#include<stdio.h>
void square(int);
int main()
{
int num;
printf("enter a number ");
scanf("%d",&num);
square(num);
return 0;
}
void square(int a)
{
 int b=a*a;
printf("the square of this number is %d ",b);
}
