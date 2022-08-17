/*Write a program to calculate the length of the string. */
#include<stdio.h>
int main()
{
char str[20],i;
printf("Enter your name ");
fgets(str,20,stdin);
for(i=0;str[i];i++);
printf("string length is %d",i-1);
return 0;
}
