/* Write a program to compute the sum of all elements in an array using pointers. */
#include<stdio.h>
int sum(int *p,int size);
int main()
{
   int size;
   printf("Enter the size of an array ");
   scanf("%d",&size);
   int arr[size];
   printf("The total of the array is %d ",sum(arr,size));
 return 0;
}
int sum(int *p,int size)
{
  int i,total=0;
  printf("Enter %d numbers ",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",p+i);
    total+=*(p+i);
  }
 return total;
}