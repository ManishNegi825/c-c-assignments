#include<stdio.h>
void natural(int);
int main()
{
  int num;
  printf("Enter a number  ");
  scanf("%d",&num);
  natural(num);
return 0;
}
void natural(int n)
{
 int i;
 for(i=1;i<=n;i++)
 {
   printf("%d ",i);
 }
}