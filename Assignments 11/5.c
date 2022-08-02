#include<stdio.h>
void Nprime(int);
int main()
{
  int num,value;
  printf("Enter a number ");
  scanf("%d",&num);
   Nprime(num);

return 0;
}
void Nprime(int a)
{
  int i,j;
  for(i=3;i<=a;i++)
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
