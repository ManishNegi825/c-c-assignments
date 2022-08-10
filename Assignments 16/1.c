#include<stdio.h>
int main()
{
int a[3][3],b[3][3],i,j,sum[3][3];
printf("Enter array value of 1st matrix \n ");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
     scanf("%d",&a[i][j]);
  }2
}
printf("2nd elements array value is \n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
     scanf("%d",&b[i][j]);
  }
}
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
      sum[i][j]=a[i][j]+b[i][j];                
   }
}
printf("Total of both the matrix are \n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
     printf("%d  ",sum[i][j]);
  }
  printf("\n");
}
return 0;
}
