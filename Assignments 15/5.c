#include<stdio.h>
int occurrence(int a[],int);
int main()
{
int size,i;
printf("Enter array size ");
scanf("%d",&size);
int b[size];
 printf("Enter array values ");
 for(i=0;i<size;i++)
 scanf("%d",&b[i]);
 occurrence(b,size);

return 0;
}
int occurrence(int a[],int size)
{
  int i,j,c;
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;i++)
    {
          if(a[i]==a[i+1])
        {
          c=1;
          printf("first occurrence of adjacent duplicate values in the array is %d postion",j);
          break;
        }  
     }
  }
  
     return c ;
}