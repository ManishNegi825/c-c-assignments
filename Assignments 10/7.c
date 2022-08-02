#include<stdio.h>
int fact(int);
int comb(int,int);
int main()
{
  int n,r;
printf("Enter the value of n and r considering n>r ");
scanf("%d %d ", &n,&r);
int c = comb(n,r);
printf("%d ",c);
return 0;
}
int fact(int a)
{
  int n=1,i;
  for(i=1;i<=a;i++)
  {
   n=n*i;
  }
   return n;
}
int comb(int n,int r)
{

return fact(n)/(fact (r)*fact(n-r));
}