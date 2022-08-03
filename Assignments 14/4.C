/*Write a program to find the greatest number stored in an array of size 10. Take array values from the user. */
#include<iostream>
using namespace std;
int main ()
{
int a[10],i,j,temp;
for(i=0;i<10;i++)
{
  printf("Enter a number ");
  scanf("%d",&a[i]);
  if(temp<a[i])
  temp=a[i];
}
  printf("Largest number in array is %d",temp);

return 0;
}