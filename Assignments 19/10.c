/*Create an authentication system. It should be menu driven.*/
#include<stdio.h>
#include<string.h>
int main()
{                     
char str[3][2][20],search[2][20];
int i,j,flag=0;
    for(i=0;i<3;i++)
{
     printf("Enter your creditential ");
    for(j=0;j<2;j++)
  { 
    fgets(str[i][j],20,stdin);
  }
}
printf("Enter your username and password to check ");
for(j=0;j<2;j++)
fgets(search[j],20,stdin);
for(i=0;i<3;i++)
{
  for(j=0;j<2;j++)
  {
   if(strcmp(str[i][j],search[j])==0)
   flag++;
   else
   flag=0;
  }
  if(flag>1)
   printf("Your login is succesfull ");
}
if(flag<2)
printf("Entered user name and password doesn't matched");
return 0;
}
