/*Write a program to print a string in reverse using a pointer */
#include<stdio.h>
#include<string.h>
void reverse(char *p,int size);
int main()
{
  char str[30];
  printf("Enter your string here ");
  fgets(str,30,stdin);
  reverse(str,30);
return 0;
}
void reverse(char *p,int size)
{
   char swap;
  int i,length;
  length=strlen(p);
  for(i=0;i<length/2;i++)
  {
    swap=*(p+i);
    *(p+i)=*(p+length-1-i);
    *(p+length-1-i)=swap;
  }
 printf("%s",p);
}