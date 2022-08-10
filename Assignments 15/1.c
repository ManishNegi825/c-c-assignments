#include<stdio.h>
int Greatest(int a[],int);
int main()
{
  int n;
  printf("Enter size of an array ");
  scanf("%d",&n);
  int b[n];
  printf("The largest number in array is %d ", Greatest(b,n));
  //printf("The largest number in an array is %d ",Greatest(c[10],n));
return 0;
}
int Greatest(int a[],int size)
{
  int i,max=0;
  for(i=0;i<size;i++)
  {
    printf("Enter values of array ");
    scanf("%d",&a[i]);
    if(max<a[i])
    max=a[i];
  }
  return max;
}
