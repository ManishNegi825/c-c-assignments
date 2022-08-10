#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the size of array ");
scanf("%d",&n);
int a[n][n];
printf("Enter array values \n ");
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if (i<=j)
    printf("%d ",a[i][j]);
  else
  printf("%d ",0);
  }
  printf("\n");
}
return 0;
}