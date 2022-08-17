/*Write a function to transform string into uppercase */
#include<stdio.h>
void string_upper(char str[30]);
int main()
{
char string[30];
printf("Enter your string in lowercase to change into uppercase ");
fgets(string,30,stdin);
string_upper(string);
return 0;
}
void string_upper(char str[30])
{
  int i;
  for(i=0;str[i];i++)
  {
  if(str[i]>='a' && str[i]<='z')
  str[i]=str[i]-32;
  }
  printf("%s",str);
}