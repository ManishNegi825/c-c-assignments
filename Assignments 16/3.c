#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the size of the matrix ");
 scanf("%d",&n);
 int a[n][n];
 printf("Enter %d values \n",n*n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
    printf("%d ",a[j][i]);
  }
  printf("\n");
 }
 return 0;
}