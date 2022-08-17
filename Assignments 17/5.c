#include<stdio.h>
int main()
{
  int i;
  char LTU[25];
  printf("Enter your string ");
  fgets(LTU,25,stdin);
  for(i=0;LTU[i];i++)
  {
    if(LTU[i]>64 && LTU[i]<91)
    LTU[i]=LTU[i]+32;
  }
  printf("%s",LTU);
 return 0;
}