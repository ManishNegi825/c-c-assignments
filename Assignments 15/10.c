#include<stdio.h>
int* count(int b[],int size);
int main()
{
  int size,i;            
    printf("Enter array size ");
    scanf("%d",&size);
     int a[size];
    count(a,size);
     for(i=0;i<size;i++)
     printf("%d ",a[i]);
  return 0;
}
 int* count(int b[],int size)
 {
   int i,j,total;
   for(i=0;i<size;i++)
   scanf("%d",&b[i]);
   for(i=0;i<size;i++)
   {
    int total=0;
    for(j=0;j<size;j++)
    {
      if(b[i]==b[j])
      total= total+1;
    }
    printf("The frequency of the %d is %d \n",b[i],total);
   }
   return b;
 }
