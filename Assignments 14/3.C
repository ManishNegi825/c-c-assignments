/*Write a program to calculate the sum of all even numbers and sum of all odd numbers, 
which are stored in an array of size 10. Take array values from the user. */
#include<iostream>
using namespace std;
int main (){
int a[10],even=0,odd=0,i;
for(i=0;i<=9;i++)
{
  printf("Enter a number ");
  scanf("%d",&a[i]);
  if(a[i]%2==0)
  even+=a[i];
  else
  odd+=a[i];
}
printf("The sum of even numbres are %d ",even);
printf("\n The sum of odd numbres are %d ",odd);
return 0;
}