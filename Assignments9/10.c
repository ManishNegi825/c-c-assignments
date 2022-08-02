#include<stdio.h>
int main()
{
int num;
printf("Enter a number ");
scanf("%d",&num);
switch(num%2==0)
{
 case 1:
 num=num+1;
 printf("upper nearest odd num is %d ",num);
 break;
 case 0:
 printf("The number is already odd ");
 break;
}
return 0;
}