#include<stdio.h>
void primerange(int,int);
int main()
{
  int n,n2;
  printf("Enter two numbers ");
  scanf("%d %d ",&n,&n2);
  primerange(n,n2);
  return 0;
}
void primerange(int a, int b)
{
   int i,j;
   for(i=a;i<=b;i++)
   {
     for(j=2;j<i;j++)
     {
        if(i%j==0)
        break;
     }
     if(i==j)
     printf("%d ",i);
   }
}