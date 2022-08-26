/*Write a function to sort an array of int type values. [void sort(int *ptr,int size);] */
#include<stdio.h>
void sort(int *ptr,int size);
void swap(int *p, int *q);
int main()
{
int size,i;
printf("Enter size of the array ");
scanf("%d",&size);
int arr[size];
for(i=0;i<size;i++)
{
 scanf("%d",&arr[i]);
}
sort(arr,size);
return 0;
}
void sort(int *ptr,int size)
{
 int i,j,temp;
 for(i=0;i<size;i++)
 {
   for(j=i+1;j<size;j++)
   {
     if(ptr[i]>ptr[j])
        swap(&ptr[i],&ptr[j]);
 }
 }
  for(i=0;i<size;i++)
  printf("The sorted array is %d ",ptr[i]);
}
void swap(int *p, int *q)
{
 int temp;
 temp=*p;
 *p=*q;
 *q=temp;
}
