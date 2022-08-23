/*Write a function in C to merge two arrays of the same size sorted in descending order.   */
#include<stdio.h>
int* sorting(int a[],int size);
int* mergetwoarray(int*,int*,int*,int);
int main()
{
int size,i;
printf("Enter the size of the array ");
scanf("%d",&size);
int a[size],b[size],total[2 * size];
int* merge ;  //merge array pointer
merge=mergetwoarray(a,b,total,size);
int p=2*size;
sorting(merge,p);
for(i=0;i<2*size;i++)
printf("%d ",merge[i]);
return 0;
}

int* sorting(int a[],int size)
{
 int i,j,temp;
  for(i=0;i<size-1;i++)
 {
   for(j=0;j<size-1;j++)
    {
     if(a[j]<a[j+1])
     {
       temp=a[j+1];
       a[j+1]=a[j];
       a[j]=temp;
     }

    }
  }
  return a;
}

int* mergetwoarray(int a[],int b[],int merge[],int size)
{
 int i,j,k=0;
printf("Enter %d numbers of 1st array ",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("Enter %d numbers of 2nd array ",size);
for(i=0;i<size;i++)
scanf("%d",&b[i]);
// sorting the array to get descending order first.
a=sorting(a,size);
b=sorting(b,size);
// Now mergeing the two descending order array.
for(i=0;i<2*size;i++)
{
 if(i<size)
 merge[i]=a[i];
 else
 {
  merge[i]=b[k];
  k++;     
 }
}
return merge;
}