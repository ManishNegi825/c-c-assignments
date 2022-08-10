#include<stdio.h>
int main()
{
 int i,j,n,sum=0;
 printf("Enter the size of the matrix ");
 scanf("%d",&n);
 int a[n][n];
 printf("enter array values \n ");
 for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
 for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    if(i==j)
    sum+=a[i][j];
    else
    continue;
}
}
printf("The sum of the left dignoal is %d ",sum);
    return 0;
}