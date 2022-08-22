/* Write a program to search a string in the list of strings.*/
#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,flag;
 char str[4][10],search[10];
 printf("enter your string  ");
 for(i=0;i<4;i++)
 fgets(str[i],10,stdin);
 printf("Enter your string to search for ");
 fgets(search,10,stdin);
 for(i=0;i<4;i++)
 {
  if(strcmp(str[i],search)==0)
  {
     flag=0;
     printf("your entered string at %d position ",i);
     break;
  }
  else
  flag=1;
 }
  if(flag==1)
  printf("No match found");
return 0;
}