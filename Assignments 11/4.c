#include<stdio.h>
int nxtprime(int);
int main()
{
  int num,x;
  printf("Enter a number");
  scanf("%d",&num);
  x = nxtprime(num);
  printf("nxt prime numbre is %d ",x);
return 0;
}
int nxtprime(int a)
{
  int i,c,j;
  for(i=a+1;1;i++)
  {
   for(j=2;j<i;j++)
   {
    if(i%j==0)
      break;
  }
 if(i==j)
 break;
  
  }
return  i;
}