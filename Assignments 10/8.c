#include<stdio.h>
int fact(int a);
int permu(int b,int c);
int main()
{
int n,r,p;
printf("Enter two values considering n>r ");
scanf("%d %d ",&n,&r);
p=permu(n,r);
printf("The permutation for the values of n and r is %d",p);
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
int permu(int b,int c)
{
   int p= fact(b)/fact(b-c);
   return p;
}