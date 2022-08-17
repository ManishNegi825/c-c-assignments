/*Write a function to check whether a given string is palindrome or not. */
#include<stdio.h>
void palindrome(char str[35]);
int main()
{
char str[35];
printf("Enter your string ");
fgets(str,35,stdin);
palindrome(str);
 return 0;
}
void palindrome(char str[35])
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
if(c)
printf("This is a palindrome string");
else
printf("Not an palindrome string ");
}