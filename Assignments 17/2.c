/*Write a program to count the occurrence of a given character in a given string. */
#include<stdio.h>
int main()
{
  char str[25],n,i,c=1;
printf("Enter your string ");
fgets(str,25,stdin);
printf("Enter the charcter to search for ");
scanf("%c",&n);
for(i=0;str[i];i++)
{                     
  if(str[i]==n)
  {
  printf("the values occurs at %d",i+1);
   c=0;
  }
}
if(c)
printf("The entered charcter dosen't exist in the string");
return 0;
}