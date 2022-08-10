#include<stdio.h>
int main()
{
int a[3][3],b[3][3],product[3][3],i,j;
printf("Enter value for 1st matrix \n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
     scanf("%d",&a[i][j]);
  }
}
printf("Enter value for 2nd matrix \n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
     scanf("%d",&b[i][j]);
  }
}
printf("Entered 1st matrix values are \n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
     printf("%d ",a[i][j]);
  }
  printf("\n");
}
printf("Entered 2nd matrix values are \n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
     printf("%d ",b[i][j]);
  }
  printf("\n");
}
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    product[i][j]=a[i][j]*b[i][j];
  }
  
}
printf("The product of both matrix is below \n ");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    printf("%d ",product[i][j]);
  }
  printf("\n");
}
return 0;
}