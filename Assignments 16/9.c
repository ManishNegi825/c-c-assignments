#include<stdio.h>
int main()
{
int i,j,n,count=0;
printf("Enter the size of the matrix ");
scanf("%d",&n);
int a[n][n];
printf("enter %d numbers : \n",n*n);
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
     printf("%d ",a[i][j]);
    if(a[i][j]==0)
    count++;
  }
  printf("\n");
}
if(count>n*n/2)
printf("This is a sparse matrix ");
else
printf("This is not a sparse matrix ");
return 0;
}