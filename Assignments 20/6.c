/*Write a program to calculate the length of the string using a pointer*/
#include<stdio.h>
int length(char* p);
int main()
{
char str[20];
printf("Enter your string here ");
fgets(str,20,stdin);
int c =length(str);
printf("The length is %d ",c);
return 0;
}
int length(char* p)
{
int i;
for(i=0;p[i];i++);
return i-1;
}