/*Write a function to calculate length of the string */
#include<stdio.h>
int charlength (char str[]);
int main()
{
 char string[30];
 printf("The length of your string is %d",charlength(string));
return 0;
}
int charlength (char str[30])
{
  int i;
 printf("Enter your string ");
 fgets(str,30,stdin);
  for(i=0;str[i];i++);
  i=i-1;
  return i;
}
