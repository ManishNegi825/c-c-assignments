/*Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education Mysirg” ) */
// Good question
#include<stdio.h>
#include<string.h>
void reverse_string(char str[40]);
int main()
{
  char str[40];
  printf("Enter your string ");
  fgets(str,40,stdin);
  str[strlen(str)-1]='\0';
  reverse_string(str);
return 0;
}                      
void reverse_string(char str[40])
{
   char string[40]="",temp[40];
  int i,j;
  //printf("orignal string is %s",str);
  strrev(str);
  strcat(str," ");
  j=0;
  for(i=0;str[i];i++)
  {
    if(str[i]==' ')
    {
      temp[j]='\0';
      strrev(temp);
      strcat(string,temp);
      strcat(string," ");
      j=0;
    }
    else
    {
      temp[j]=str[i];
      j++;
    }
  }
printf(" \n reverse of the string is %s ",string);
}