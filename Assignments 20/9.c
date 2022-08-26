/*Write a program to print the elements of an array in reverse order. */
#include<stdio.h>
void reverse(int *p,int size);  // function declaration
// main function
int main()
{
 int size;
 printf("Enter the size of the array ");
 scanf("%d",&size);
 int arr[size];
 reverse(arr,size);
return 0;
}
void reverse(int *p,int size)  // function defination
{
 int i;
 printf("Enter %d numbers ",size);
 for(i=0;i<size;i++)
 scanf("%d",p+i);
 printf("The reverse order of array is \n");
 for(i=size-1;i>=0;i--)
 printf("%d ",*(p+i));
}