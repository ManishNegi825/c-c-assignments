/* Write a program to find second largest in an array.Take array values from the user.*/
#include<stdio.h>
int main()
{
int a[10],i,j=0,t=0,p=0;

for(i=0;i<10;i++)
{
printf("Enter values of array ");
scanf("%d",&a[i]);
if(t<a[i])
{
   t=a[i];
   j=i;
}
}
for(i=0;i<10;i++)
{
 if(i==j)
 continue;
if(p<a[i])
{
   p=a[i];
}
}
printf("The second Largest value is %d ",p);
return 0;
}