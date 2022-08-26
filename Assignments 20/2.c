/*Write a function to swap strings of two char arrays of calling functions. */
#include<stdio.h>
#include<string.h>  // applicable for my approach
void swap(char *q,char *p);

int main()
{
char name1[25],name2[25];
printf("Enter your name & friend name ");
fgets(name1,25,stdin);
name1[strlen(name1)-1]='\0';
fgets(name2,25,stdin);
name2[strlen(name2)-1]='\0';
swap(name1,name2);
printf("Name = %s Friends name = %s ",name1,name2);
return 0;
}
void swap(char*q,char*p)
{
  char temp[25];
  strcpy(temp,q);
  strcpy(q,p);
  strcpy(p,temp);
}
