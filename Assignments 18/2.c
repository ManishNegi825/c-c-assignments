/*Write a function to reverse a string.*/
#include<stdio.h>
void reversestring(char str[30]);
int main()
{
 char string[30];
 reversestring(string);
return 0;
}
void reversestring(char str[30])
{
  int i,count=0;
  printf("Enter your string ");
  fgets(str,30,stdin);
  for(i=0;str[i];i++)
  count++;
  for(i=count-1;i>=0;i--)
  printf("%c",str[i]);
}