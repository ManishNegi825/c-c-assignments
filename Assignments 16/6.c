/*Write a program in C to find the sum of rows and columns of a Matrix. */
#include<stdio.h>
int main()
{
int i,j,n,sumr=0,sumc=0;
printf("Enter size of the matrix ");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
 {
    scanf("%d",&a[i][j]);
 }
}
for(i=0;i<n;i++)
{
   sumr=0;
  for(j=0;j<n;j++)
 {
     sumr+=a[i][j];
 }
 printf("The total for the %d row is %d \n",i,sumr);
}
for(i=0;i<n;i++)
{
   sumc=0;
  for(j=0;j<n;j++)
 { 
   sumc+=a[j][i];    
 }
 printf("The total for the %d is %d \n",j,sumc);
}
return 0;
}