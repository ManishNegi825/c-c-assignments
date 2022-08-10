#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter array size ");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
  if(i>=j)  // condition for upper trinagle situation
  printf("%d ",a[i][j]);
  else
  printf("%d ",0); //changing value in upper triangle area 
  }
  printf("\n");
}

return 0;
}