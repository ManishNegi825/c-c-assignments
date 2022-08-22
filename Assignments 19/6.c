/*Write a program to print the strings which are palindrome in the list of strings. */
#include<stdio.h>
#include<string.h>
int palindrome(char*);
int main()
{
char str[3][30];
int i,temp=0;
printf("enter your strings ");
for(i=0;i<3;i++)
fgets(str[i],30,stdin);
for(i=0;i<3;i++)
   if(palindrome(str[i]))      
printf("This is a palindrome string\n");
else
printf("Not an palindrome string\n");     
return 0;
}
int palindrome(char str[30])
{
int i,c=0,j,count=0,p;
for(i=0;str[i];i++);
count=(i/2)-1;
p=i-1;
for(i=0;i<count;i++)
{
  j=p-(i+1);
  if(str[i]==str[j])
  c=1;
  else
  c=0;
}
return c;
}