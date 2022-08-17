#include<stdio.h>
int main
()
{
  int i;
  char lwr[35];
  printf("Enter your string ");
  fgets(lwr,35,stdin);
  for(i=0;lwr[i];i++)
  { 
     if(lwr[i]>96 && lwr [i]<123)
    lwr[i]=lwr[i]-32;
  }
  printf("%s",lwr);
 return 0;
}
  