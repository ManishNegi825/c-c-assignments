#include<stdio.h>
void odd(int);
int main()
{
  int num;
  printf("Enter a num ");
  scanf("%d ",&num);
  odd(num);
return 0;
}
void odd(int a)
{
 int i;
 for(i=0;i<=a-1;i++)
 {
    i++;
   printf("%d ",i);
 }
}