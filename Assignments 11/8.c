#include<stdio.h>
void pascal (int a);
int fact(int);
int comb(int,int);
int main()
{
  int n;
  printf("Enter value");
  scanf("%d",&n);
  pascal (n);

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
void pascal (int a)
{
  int i,j;
  for(i=0;i<=a;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%d ",comb(i,j));
    }
    printf("\n");
  }
}