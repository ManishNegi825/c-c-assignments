#include<stdio.h>
void primefact(int a);
int main()
{
 int n;
printf("Enter a value ");
scanf("%d",&n);
primefact(n);
return 0;
}
void primefact(int a)
{
   int i;
  for(i=2;a!=1;i++)
  {
    while(a%i==0)
    {
    a=a/i;
    printf("%d ",i);
    }
  }
}