#include<stdio.h>
int* reverse(int b[],int);
int main()
{
  int size,i;
  printf("Enter array size ");
  scanf("%d",&size);
  int a[size];
  reverse(a,size);
 return 0;
}
int* reverse(int b[],int size)
{
   int i;
   printf("Enter array values ");
   for(i=0;i<size;i++)
   {
      scanf("%d",&b[i]);
   }
   for(i=size-1;i>=0;i--)
   printf("%d ",b[i]);
return b;
}