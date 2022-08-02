#include<stdio.h>
int fact(int);
int main()
{
int num;
printf("enter a num ");
scanf("%d",&num);
 int c = fact(num);
 printf("The factorial is %d ",c);
return 0;
}
int fact(int a)
{
   int i,n=1;
   for(i=1;i<=a;i++)
   {
     n=n*i;
   }
  return n;
   
}