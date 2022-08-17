/*Write a function to transform a string into lowercase */
#include<stdio.h>
void upper_lower(char str[30]);
int main()
{
  char str[30];
printf("enter your string to change into lowercase ");
fgets(str,30,stdin);
upper_lower(str);
return 0;
}
void upper_lower(char str[30])
{
  int i;
  for(i=0;str[i];i++)
  {
    if(str[i]>='A' && str[i]<='Z')
     str[i]=str[i]+32;
  }
  printf("%s",str);
}