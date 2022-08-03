#include<stdio.h>
int main()
{
int a[10],i,t,j,p;
for(i=0;i<10;i++)
{
printf("Enter values of array ");
scanf("%d",&a[i]);
if(t>a[i])
{
   t=a[i];
   j=i;
}
}
for(i=0;i<10;i++)
{
 if(i==j)
 continue;
if(p>a[i])
{
   p=a[i];
}
}
printf("The second smallest value is %d ",p);
return 0;
}
