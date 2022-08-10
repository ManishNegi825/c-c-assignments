#include<stdio.h>
int main()
{
 int i,j,n,count=0,temp=0,hold;
 printf("Enter array size ");
 scanf("%d",&n);
 printf("Enter %d values ",n*n);
 int a[n][n];
 for(i=0;i<n;i++)
 {
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
 }
for(i=0;i<n;i++)
 {
    count=0;
  for(j=0;j<n;j++)
  {
    printf("%d ",a[i][j]);
    if(a[i][j]==1)
    count++;
  }
  printf("\n");
   if(temp<count)
   {
   temp=count;
    hold=i; 
   }
 }
 if(temp>0)
   printf("The row which has the maxium value of 1 is %d ",hold);
   else
   printf("there is no 1 value in the matrix ");
  return 0;
}