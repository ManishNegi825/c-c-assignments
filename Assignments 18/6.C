/*Write a function to check whether a given string is an alphanumeric string or not. */
#include<stdio.h>
void check(char str[30]);
int main()
{
 char str[35];
 printf("Enter string ");
 fgets(str,30,stdin);
 check(str);
 return 0;
}
void check(char str[30])
{
 int i,c=0;
 for(i=0;str[i];i++)
 {
 if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]>='0' && str[i]<='9')
   c++;
 } 
if(c)
printf("Given string is alphanumeric string ");
else
printf("Given string is not alphanumeric string ");
}