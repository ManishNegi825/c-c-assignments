#include<stdio.h>
int* sort(int*,int);
int main ()
{
int n;
printf("Enter a size of array ");
scanf("%d",&n);
int b[n];
sort(b,n);
}
int* sort(int*a,int size)
{
int i,j,temp;
printf("Enter values of array ");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
for(i=0;i<size;i++)
{
 for(j=i+1;j<size;j++)
 {
    if(a[i]>a[j])
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
 }
}
for(i=0;i<size;i++)
printf("%d ",a[i]);
return a;
}