/*Write a program to sort 10 city names stored in two dimensional arrays, taken from the user. */
#include<stdio.h>
#include<string.h>
int main()
{
char str[10][15],temp[15];
int i,j;
printf("Enter 10 city names ");
for(i=0;i<10;i++)
fgets(str[i],12,stdin);
for(i=0;i<10;i++)
{
  for(j=i+1;j<10;j++)
{
  if(strcmp(str[i],str[j])>0)
  {
  strcpy(temp,str[i]);
  strcpy(str[i],str[j]);
  strcpy(str[j],temp);
}
}
}
printf("The sorted stream is ");
for(i=0;i<10;i++)
printf("%s",str[i]);
return 0;
}