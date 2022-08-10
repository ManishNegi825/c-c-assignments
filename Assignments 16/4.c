/*Write a program in C to find the sum of right diagonals of a matrix. */
#include<stdio.h>
int main()
{
int size,i,j,sum=0;
printf("Enter the value of a size ");
scanf("%d",&size);
int a[size][size];
printf("Enter matrix values \n ");
for(i=0;i<size;i++)
{
  for(j=0;j<size;j++)
  scanf("%d",&a[i][j]);
}
for(i=0;i<size;i++)
{
  for(j=0;j<size;j++)
  {
    if(i+j==size-1)
    {
      sum+=a[i][j];
    }
  }
}
printf("The total of right dignoal is %d ",sum);
return 0;
}                     