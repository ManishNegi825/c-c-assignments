#include<stdio.h>
int main()
{
  int i;
 char string[25],copy[25];
 printf("Enter your string ");
 fgets(string,25,stdin);
for(i=0;string[i];i++)
{
   copy[i]=string[i];
}
printf("The copied string is ");
printf("%s", copy);
return 0;
}
