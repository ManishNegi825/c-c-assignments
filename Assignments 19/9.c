/*Write a program that asks the user to enter a username. If the username entered isone of the names in the list then 
the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed */
#include<stdio.h>
#include<string.h>
int fact(int num);
int main()
{
char str[2][25],search[25];
int i,f,num;
printf("Enter user name 3 database ");
for(i=0;i<3;i++)
fgets(str[i],25,stdin);
printf("Enter your username to check ");
fgets(search,25,stdin);
for(i=0;i<3;i++)
{
  if (f=(strcmp(str[i],search))==0)
  {
    printf("Your login is succesfull ");
     printf("\n The factorial is %d",fact(num));

  }
} 
if(f==0)
{
   printf("Invalid user details");
}
return 0;
}
int fact(int num)
{
  int i,factorial=1;
  printf("Enter a number ");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  factorial=factorial*i;
  return factorial;
}